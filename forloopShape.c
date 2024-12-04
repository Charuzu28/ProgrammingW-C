//right triangle shape for loop
#include <stdio.h>

int main()
{
    int i = NULL;
    int j = NULL;
    int k = NULL;
    for(i = 0; i < 5; i++){
        for(j = 0; j <= i; j++ ){
            printf("*");
        }
        
        printf("\n");
    };

    return 0;
}
