#include <stdio.h>
int main() {
int celsius , fahrenheit ;
printf("Enter the temperature in celsius: ");
scanf("%d" , &celsius);
fahrenheit = (celsius * 9/5 ) + 32;
printf("The temperature in fahrenheit is %d F.\n", fahrenheit);
return 0;
}

