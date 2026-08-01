#include <stdio.h>
#include <string.h>

int main() {
	char A[20];
	printf("Input a Number: ");
	scanf("%s", &A);

	int len = strlen(A);

	for(int i = 0; i < len; i++){

		printf("%c",A[i]);

		int c = len - 1 - i;

		if(c > 0 && c % 3 == 0){
			printf(",");
		}
	}
	}
