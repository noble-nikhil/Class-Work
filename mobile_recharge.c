#include <stdio.h>
int main()
{ int wallet=4000,add,sub,choice;
	printf("\n ====== WELCOME TO NOBLE INTERNET ====== \n");
	printf("\n ====== MENU ====== \n");
	printf("1. View recharge plans \n");
	printf("2. See Wallet balance \n");
	printf("3. Add money to the wallet \n");
	printf("4. Buy recharge plans \n");
	printf("5. Exit the program \n");
  switch(choice){
  	case 1: 	
  	{
  	printf("\n ====== Recharge Plans ====== \n");
	printf("1. Recharge for ₹199 \n");
	printf("2. Recharge for ₹299 \n");
	printf("3. Recharge for ₹499 \n");
	}
	break;
	
	case 2:
	printf("Wallet has following balance : ₹%d \n", wallet);
	break;
	
	case 3:
	{printf("Add the amount to be deposited in wallet : \n");
	scanf("%d",&add);
	wallet = wallet + add;
	printf("₹%d has been deposited succesfully, the updated wallet balance is : ₹%d \n",add,balance);
	}
	break;
	
	case 4:
	{
	
  	}
  
