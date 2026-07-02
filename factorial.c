#include <stdio.h>

int main(){
    int n;
    int i;
    int fact = 1;

            printf("Input a number: ");
            scanf("%d", &n);

            printf("%d! = ", n);

    for(i = 1; i <= n; i++){
        fact = fact * i;
        printf("%d", i);

        if(i < n){
            printf(" X ");
        }


    }
            printf(" = %d", fact);
}
