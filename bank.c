#include <stdio.h>

struct User{
	unsigned int card_Number;
	unsigned int pin;
	double balance;
};
double deposit(double * balance){
	int amount;
	printf("Insert Amount : \n");
	scanf("%d", &amount);
	
	*balance =+ amount;
		
}
double withdraw(double * balance){
	int amount;
	printf("Insert Amount : \n");
	scanf("%d", &amount);
	
	if (amount > (* balance)){
		printf("Insufficient Balance!!!\n");
	}else
		*balance -= amount;
}
double display_balance(struct User person){
	printf("Current Balance : %0.2f\n\n", person.balance);
}
int main(int argc, char * argv[])
{
	struct User person1;
	person1.card_Number = 1234;
	person1.pin = 1234;
	person1.balance = 10000;
	
	printf("current balance : %0.2f\n\n", person1.balance);
	printf("1.Deposit\n2.Withdraw\n3.Display Balance\n4.none\n");
	
	int _True = 1;
	while (_True){
		int option;
		printf("Choose option\n");
		scanf("%d", &option);
	
		if (option == 1){
			deposit(&person1.balance);
			display_balance(person1);
		}else if (option == 2){
			withdraw(&person1.balance);
			display_balance(person1);
		}else if (option == 3){
			display_balance(person1);
		}else if (option == 4){
			printf("Thank you!!!\n");
			break;
		}else
			printf("Insert valid option");	
	}
}


