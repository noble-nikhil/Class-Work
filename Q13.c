#include <stdio.h>
int main()
{
 int num,mult,swap,ld,fd,temp;
 printf("Enter your number  : ");
 scanf("%d", &num);
 temp=num;
 ld=num%10;
 mult=1;
while(temp>=10)
{ temp=temp/10;
  mult=mult*10;
}
fd=temp;
swap=ld*mult;
swap=swap+num%mult;
swap=swap-ld;
swap=swap+fd;
printf("swapped number is : %d",swap);
return 0;
}
