#include <stdio.h>

struct User{
	int card_Number;
	int pin;
	double balance;
};
int deposit(double * balance){
	int amount;
	printf("Insert Amount : \n");
	scanf("%d", &amount);

	*balance += amount;
}
int withdraw(double * balance){
	int amount;
	printf("Insert Amount : \n");
	scanf("%d", &amount);
	*balance -= amount;
}
int main()
{
	struct User person1;
	person1.card_Number = 1234;
	person1.pin = 1234;
	person1.balance = 10000;
	
	printf("current balance : %0.2f\n\n", person1.balance);

	printf("1.Deposit\n2.Withdraw\n3.Display Balance\n");
	
	int option;
	printf("Choose option\n");
	scanf("%d", &option);

	if (option == 1){
		deposit(&person1.balance);
		printf("%0.2f\n", person1.balance);
	}else if (option == 2){
		withdraw(&person1.balance);
		printf("%0.2f\n", person1.balance);
	}else if (option == 3){
		printf("%0.2f\n", person1.balance);
	}
	
}


