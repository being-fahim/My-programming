#include <stdio.h>

int main(){

    int a,b,c,e;
    char f;
        printf("Enter the value of A: ");
        scanf("%d",&a);
        printf("Enter the value of B: ");
        scanf("%d", &b);
        printf("Select an operator: ");
        scanf(" %c", &f);
    int count = 0;
    do{
            switch(f){
            case '+':
                e = a + b;
                printf("What is the value of %d + %d = ",a,b);
                scanf("%d", &c);
                break;
            case '-':
                e = a - b;
                printf("What is the value of %d - %d = ",a,b);
                scanf("%d", &c);
                break;
            case '*':
                e = a * b;
                printf("What is the value of %d X %d = ",a,b);
                scanf("%d", &c);
                break;
            case '/':
                e = a / b;
                printf("What is the value of %d / %d = ",a,b);
                scanf("%d", &c);
                break;
            }
            if(c != e){
                if(count < 2){
                    printf("\nWrong Answer!\nTry again.\n\n");
                }
                count++;
            }
    }while(c != e && count != 3);

            if(c == e){
                printf("\n             Congradulations!\n");
            }else{
                printf("\n          Better luck next time!");
                printf("\n");
            }

}
