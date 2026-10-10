#include <stdio.h>
int main()
{ int choice;
	double num1,num2;
	printf("choose your operation by inputting given number\n");
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Division\n");
	printf("4. Multiplication\n");
  scanf("%d", &choice);
  printf("Enter the two numbers : ");
  scanf("%lf %lf", &num1, &num2);
  switch(choice)
{ case 1:
	printf("Answer of %.2lf + %.2lf is %lf \n",num1,num2,(num1+num2));
  break;
  case 2:
	printf("Answer of %.2lf - %.2lf is %lf \n",num1,num2,(num1-num2));
  break;
  case 3:
	printf("Answer of %.2lf / %.2lf is %lf \n",num1,num2,(num1/num2));
  break;
  case 4:
	printf("Answer of %.2lf * %.2lf is %lf \n",num1,num2,(num1*num2));
  break;
  default:
	printf("Chosen operation is invalid \n");
  break;
}
return 0;
}
