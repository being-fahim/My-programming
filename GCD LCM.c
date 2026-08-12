#include <stdio.h>

int main() {
    int a,b;

    printf("Input two number(separate by space): ");
    scanf("%d %d",&a,&b);

    int n1,n2,e;
    n1 = a;
    n2 = b;

    while(n2 != 0){
        e = n1 % n2;
        n1 = n2;
        n2 = e;
    }

    printf("GCD: %d\n", n1);
    printf("LCM: %d", (a * b)/n1);

}

