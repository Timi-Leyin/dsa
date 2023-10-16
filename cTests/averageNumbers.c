#include <stdio.h>

int main(){
    int scores[] = {1,5,7,10,15,30};
    int length = 6;
    double average = 0;
    double averageScore = 0;

    for(int i=0; i<length;i++){
        average += scores[i];
    }

    averageScore = average / length ;

    printf("Average Score = %.3f", averageScore);

}