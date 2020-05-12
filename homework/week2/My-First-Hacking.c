#include <stdio.h>

int main()
{
	unsigned int money = 0;
	int salary = 0;

	printf("\nhello, Your Money is %d$\n\n", money);
	
	printf("========== PAYDAY ==========\n");
	printf("BOSS : How much do you want to get paid?\n");
	printf("Me : ");
	scanf("%d", &salary);
	
	if(salary > 100) {
		printf("BOSS : You're fired!\n");
	} else {
		printf("BOSS : Sure, Good choice\n");	
		money += (unsigned int) salary;
	}
	
	printf("\nYour Money is %u$\n", money);
	if(money > 10000) {
		printf("You Win!\n");
	} else {
		printf("You Lose!\n");
	}
}
