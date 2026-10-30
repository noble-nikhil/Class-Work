#include <stdio.h>

void primefactors(int n){

for(int i=2;i<=n;i++)
{ while (n%i==0)
  {printf("%d\n", i);
  n = n/i;
  } 
  }
}

int main()
{ int n;
  printf("Enter your number: ");
scanf("%d",&n);
printf("Prime factors are : \n");
primefactors(n);
return 0;
}

