#include <stdio.h>

int main(){
    int a,b,c;
    do{
    printf("Type three sides length: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a + b > c && b + c > a && a + c > b){
        if(a == b && b == c){
            printf("This is a Equilateral\n\n");
        }else if(a == b || b == c || a == c ){
            printf("This is a Isosceles\n\n");
        }else{
            printf("This is a Scalene\n\n");
        }
    }else{
        printf("This can't be a Triangle!\n\n");
    }
    }while(1);
}
