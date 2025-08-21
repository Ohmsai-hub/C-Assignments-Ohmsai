#include <stdio.h>
int main() {
float x1 , x2 , x3 , y1 , y2 , y3 , slope1 , slope2 ;
printf("Enter the co-ordinates of the first point: ");
scanf("%f %f " , &x1, &y1);
printf("Enter the co-ordinates of the second point: ");
scanf("%f %f " , &x2, &y2);
printf("Enter the co-ordinates of the third point: ");
scanf("%f %f " , &x3, &y3);
slope1 = (y2-y1)/(x2-x1);
slope2 = (y3-y2)/(x3-x2);
if (slope1 == slope2){
printf("The points are collinear.");
}
else {
printf("The points are not collinear.");
}
return 0;
}

