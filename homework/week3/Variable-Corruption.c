// gcc -o Variable-Corruption Variable-Corruption.c -m32 -mpreferred-stack-boundary=2 -fno-stack-protector

#include <stdio.h>

int main()
{
	char type = 'A';
	char input[16];

	printf("input : ");
	scanf("%s", input);

	if(type == 'A') {
		printf("type is %c, you lose!\n", type);
	} else if(type == 'B') {
		printf("type is %c, you WIN!!\n", type);
	}
	
}
