#include <stdio.h>
void main(){
int i=3;
int *j;
int **k;

printf(" \n address is : %p\n", &i);
printf(" \n value is : %d\n",*(&i));
j=&i; //storing i's address in j as a variable
k=&j; //storing j's address in k as a variable, but as j is a pointer so double star has to be used
printf(" \n value of j : %p \n",j);
printf(" \n value of k: %d \n",**k);
printf(" \n address of k: %p \n", &k);
}
