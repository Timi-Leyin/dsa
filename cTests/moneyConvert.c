#include <stdio.h>

int main(){
    // convert dollars to naira
    double amount_in_dollars = 1000;
    double dollar_rate = 1039;
    
    double to_naira = amount_in_dollars * dollar_rate ;
    printf("$%f converted to #%f \n", amount_in_dollars, to_naira);


    // to {naira} to pounds
    double pounds_rate = 1200;
    double to_pounds = to_naira / pounds_rate ;

    printf("#%f converted to %f Pounds \n", to_naira, to_pounds);

}