#include <stdio.h>

int main(){
     int numbers[] = {10,11,12,13,14,15,16,17,18,19,20};
     int evenSum = 0;

      for(int i=0; i<11;i++){
        if(i%2 == 0){
            evenSum += numbers[i];
        }
      }

      printf("Even Sum = %d", evenSum);
}