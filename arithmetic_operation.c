#include<stdio.h>
void main()
{
    int num1,num2;
    printf("_____________________________x_____________________________");
    printf("                  arithmetic operation                 ");
    printf("\nhey user! please insert a number to display on screen and hit enter(key):");
    scanf("%d",&num1);
    printf("Enter A Number: %d",num1);
    printf("\nplease insert another number to display on screen and hit enter(key):");
    scanf("%d",&num2);
    printf("Enter Another Number: %d",num2);
    printf("\nsum of your number is: %d",num1+num2);
    printf("\nsubtraction of your number is: %d",num1-num2);
    printf("\nmultiplication of your number is: %d",num1*num2);
    printf("\ndivision of your number is: %d",num1/num2);
    printf("_______________________________X_______________________________");
}