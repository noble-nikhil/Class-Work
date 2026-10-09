#include <stdio.h>
int main()
{
int i,n,sum;
printf("Enter your number: ");
scanf("%d", &n);
i=0;
sum=0;
while(i<=n)
{ sum=sum+i;
  i=i+1;
}
printf("Sum of all natural numbers till %d is : %d",n,sum);
return 0;
}
