#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int div(int a, int b);
int mul(int a, int b);
int mod(int a, int b);
int main()
{ 
	int x,y;
	printf(" Enter Values of a and b \n");
	scanf("%d %d", &x, &y );

	printf("Sum = %d\n", add(x,y));
	printf("Product = %d\n", mul(x,y));
	printf("Subtraction = %d\n", sub(x,y));
	printf("Division = %d\n", div(x,y));
	printf("Mod = %d\n", mod(x,y));
	printf("Main after result \n");

	return 0;
}
