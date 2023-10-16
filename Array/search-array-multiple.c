#include <stdio.h>

int main(){
    int array[] = {2,45,45,246,4};
    int array_len = (sizeof(results) / sizeof(results[0]));
    const ITEM = 45;

    int results[] = {};
    int count = 0;

    for(int i=0; i<array_len; i++){
        if( array[i] == ITEM ){
           results[count] = ITEM ;
            count ++ ;
        }
    }



    for(int i=0; i<count; i++){
      printf("Found %d Results \n",2 );
    printf("Found { %d } in { %d } Location \n", results[i], i);
    }
}