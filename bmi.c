#include <stdio.h>
int main(){
float weight , height , bmi ;
printf("Enter the weight of the person : \n");
scanf("%f" , &weight);
printf("Enter the height of the person in meters : \n");
scanf("%f" , &height);
bmi = weight/(height*height) ;
printf("The BMI of the person is : %f \n" , bmi);
if (bmi < 15){
printf("The person is starving.");
}
else if ( 15.1 < bmi < 17.5 ){
printf("The person is anorexic.");
}
else if ( 17.6 < bmi < 18.5 ){
printf("The person is underweight.");
}
else if ( 18.6 < bmi < 24.9){
printf("The person is ideal weighted .");
}
else if ( 25 < bmi < 25.9){
printf("The person is overweight .");
}
else if ( 30 < bmi < 39.9){
printf("The person is obese .");
}
else if ( bmi > 40 ){
printf("The person is morbidity obese .");
}
return 0;
}
