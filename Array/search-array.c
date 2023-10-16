#include <stdio.h>

int main(){
    int array[] = {2,45,45,246,4};
    const ITEM = 20;

    for(int i=0; i<5; i++){
        if( array[i] == ITEM ){
            printf("Found Element { %d } at Position { %d }", ITEM, (i+1));
            break;
        }
    }
}