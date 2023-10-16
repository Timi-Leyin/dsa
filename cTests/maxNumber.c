#include <stdio.h>

int main(){
    int numbers[] = {5,7,100};
    int maximum = 0;

    for(int i=0; i<3;i++){
        printf("%d, ", numbers[i]);
        if(numbers[i] > maximum){
            maximum = numbers[i];
        }
    }

    printf("\nThe MAXIMUM No is %d\n", maximum);
}