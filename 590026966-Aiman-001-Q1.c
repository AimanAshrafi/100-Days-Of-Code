#include <stdio.h>

int main(){
    int number1;
    int number2;

    int sum = 0;

    
    printf("enter the first number:");
    scanf("%i" , &number1);
    printf("enter the second number:");
    scanf("%i" , &number2);
    printf("\nThe sum of %i + %i=%i\n",number1, number2, number1+ number2);


    return 0;
}