#include <stdio.h>

void UptoLow(char ch)
{ int Low;
  Low = int(ch)-32;
  

int main(){
char ch;
int choice;
printf("Enter your character : \n");
printf("=====MENU====\n");
printf("1. Uppercase to Lowercase\n");
printf("2. Lowercase to uppercase\n");
printf("3. Exit\n");

do{
switch(choice){
case 1:

break;
case 2:

break;
case 3:
printf("exiting the program\n");
break;
default:
printf("Invalid choice \n");
}
} while(choice != 3);
return 0;
}


