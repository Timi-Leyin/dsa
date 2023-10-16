#include <stdio.h>

int main(){
    int randArr[10] = {};

    for(int i=0; i<10; i++){
       randArr[i] = i *2 ;
       printf("[%d]", randArr[i]);
    }
}