#include <stdio.h>
int main() 
{ 
    float principle, interest, rate ,time;
    printf("Enter Principle amount: \n enter rate of interest: \n enter time in years: \n");
    scanf("%f %f %f",&principle , &rate , &time);
    interest= (principle*rate*time)/100;
    printf("The Simple Interest is: %.2f\n",interest);
    return 0;   
}