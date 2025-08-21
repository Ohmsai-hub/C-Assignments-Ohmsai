#include <stdio.h>
int main() {
char name[50];
int birthyear, currentyear , age ;
printf("Enter your Name: ");
scanf("%[^\n]" ,name);
printf("Enter the current Year: ");
scanf("%d" , &currentyear);
printf("Enter your birth year: ");
scanf("%d" ,&birthyear);
age = currentyear - birthyear;
if (age<0){
printf("Invalid Birth Year.\n");
}
else{
printf("Your name is : %s\n",name);
printf("You are %d years old.\n",age);}
return 0;
}

