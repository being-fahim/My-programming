#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	for(int i = 1; i <= N; i++){
        for(int c = 1; c <= N - i; c++){
            printf(" ");
        }
		for(int j = 1; j <= i; j++){
			printf("*");
			if(j < i){
                printf(" ");
			}//Do not print any space after the last asterisk in each line.
		}
		printf("\n");
	}
	return 0;
}
