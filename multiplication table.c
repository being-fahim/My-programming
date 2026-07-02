#include <stdio.h>

    int main() {
        int i;
        int m;
        int num;
            printf("Type a number: ");
            scanf("%d", &num);

    for(i=1; i<=10; i++){
      m = num * i;
      printf("%d X %d = %d\n",num, i, m);
    }

    return 0;
}
