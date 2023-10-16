#include <stdio.h>

int main(){
    int x[]= {12,4,678,65,80};
    int k= 12,n=5;
    int i, j;
    


    // j=k;
    while(j<n){
        x[j-1] = x[j];
        j=j+1;
    }
    n=n-1;

    printf("Deleted Array \n");

    for(i = 0; i<n; i++){
        printf("x[%d] = %d \n",i, x[i]);
    }
}