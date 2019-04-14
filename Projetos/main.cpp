/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    char *pinos[6];
    
    int i, y;
    for(i = 1;  i <= 6 ; i++){
        pinos[i-1] = (char*)malloc(sizeof(char) * i);

        for(y = 0;  y < i; y++){
            pinos[i-1][y] = y + 1; 
        }
    }
    
    for(i= 0 ; i < 6; i++){
        for(y = 0 ; y <= i; y++){
            printf("%d ", pinos[i][y]);
        }
        printf("\n");
    }
    
    cout<<"Hello World";

    return 0;
}
