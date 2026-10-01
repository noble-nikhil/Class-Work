#include <stdio.h>

int main()
{
	int age;
	int roll_number;
	char first_name[45];
	char last_name[30];

	printf("Enter First name, Last name, Age, Roll number : ");
	scanf("%s %s %d %d", first_name, last_name, &age, &roll_number);

	printf("Your details are as follows : \n");
	printf("First Name : %s\n", first_name);
	printf("Last Name : %s\n", last_name);
	printf("Age  : %d\n", age);
	printf("Roll Number : %d\n", roll_number);

	return 0;
}
