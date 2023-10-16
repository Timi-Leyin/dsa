#include <stdio.h>


int main(){
    int x[] = {1,2,3,45,8};
    int ITEM =45,n=5;

    int i=0, j=0;
    printf("The original Array");
    
    for(i=0; i<n; i++){
        printf("x[%d] = %d \n", i, x[i]);
    }

    while(j<n){
        if(x[j] == ITEM){
            break;
        }
        j = j+1;
    }

    printf("The Element %d is at %d Position", ITEM, j+1);

    return 0;
}