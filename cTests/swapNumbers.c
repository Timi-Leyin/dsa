#include <stdio.h>

int main(){
    int number1 =10;
    int number2= 15;

    printf("Before Swap NO1 = %d \n NO2 == %d \n", number1, number2);

    int temp_number = number1;
    number1 = number2;
    number2 = temp_number; 

    printf("After Swap NO1 = %d \n NO2 == %d", number1, number2);
}