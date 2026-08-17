#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
	char a[16];
		fgets(a , sizeof a, stdin);
	int b = toupper(a[0]);
	printf("%c", b);
	for(int i = 1; a[i] != '\0'; i++){
		if(a[i] == 's')
				printf("$");
		else if(a[i] == 'i')
				printf("!");
		else if(a[i] == 'o')
				printf("()");
		else
				printf("%c", a[i]);
	}

	return 0;
}
