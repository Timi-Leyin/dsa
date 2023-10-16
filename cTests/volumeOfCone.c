#include <stdio.h>

int main(){
    double ONETHIRD = 1.0/3.0;
    double PIE = 3.142;
    double radius = 10;

    double volume = ONETHIRD * PIE * (radius * radius);
    

    printf("The Volume of a Cone is %.3f CM \n", volume);
}