#include <stdio.h>
#include <string.h>
int main(){
char command[10];
int length , width , area , perimeter ;
printf("Enter the length of the rectangle: ");
scanf("%d", &length);
printf("Enter the width of the rectangle: ");
scanf("%d", &width);
printf("Perimeter or Area: ");
scanf("%s" , command);
if (strcmp(command, "Perimeter") == 0){
perimeter = 2*(length+width);
printf("Perimeter of Rectangle is: %d\n",perimeter);
}
else if (strcmp(command, "Area") == 0){
area = length*width;
printf("Area of rectangle is : %d\n",area);
}
else {
printf("Invalid Command");
}
return 0;
}

