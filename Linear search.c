#include <stdio.h>

int main(){

    int b;
    int a[b];
        printf("How many value do you want to store?\n");
        printf("Ans: ");
        scanf("%d", &b);
        printf("Give your values:\n\n");

    for(int i = 0; i < b; i++){
        printf("%d. ", i+1);
        scanf("%d", &a[i]);
    }
        printf("This is your stored values:\n");
        printf("a[%d] = {", b);

    for(int j = 0; j < b; j++){
            printf("%d", a[j]);
            if(j < b -1){
                printf(",");
            }
    }
        printf("}");
    do{
    int o, c = -1;
        printf("\nEnter the value to find its position: ");
        scanf("%d", &o);

    for(int k = 0; k < b; k++){
        if(o == a[k])
            c = k;
    }
    if(c == -1){
        printf("There is no %d\n\n", o);
    }else{
        printf("Position: %d\n\n", c);
    }
    }while(1);

}
