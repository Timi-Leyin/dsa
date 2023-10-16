#include <stdio.h>

int main(){
    int numbers[] = {1,2,3,4,5};
    int oddSum = 0;

     for(int i=0; i<5;i++){
       if(i%2 ==1){
         oddSum += numbers[i];
       }
     }

     printf("Odd Sum = %d", oddSum);
}