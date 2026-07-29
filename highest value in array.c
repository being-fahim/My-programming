#include <stdio.h>

int main(){
    int a;
    printf("Enter the array size: ");
    scanf("%d", &a);

    int b[a];

    for(int i = 0; i < a; i++){
        printf("%d: ", i);
        scanf("%d", &b[i]);
    }

    int c = b[0];

    for(int j = 0; j < a; j++){

        if(b[j] > c){
            c = b[j];

        }
    }
    printf("The highest value is: %d", c);

}
