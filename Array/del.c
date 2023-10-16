#include <stdio.h>

int main(){
     int array[]= {12,4,678,65,80};
     int n=5;
     int ITEM =65;
     int k;

    for(int i=0; i<n; i++){
        if(array[i] == ITEM){
            k=i;
        }
    }




    printf("ARRAY AFTER DELETION \n");
     for(int i=0; i<n; i++){
        printf("X[%d] = %d\n",i, array[i]);
     }
}