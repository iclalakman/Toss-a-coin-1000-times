#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define HEAD 1
int main() {
    int toss,i;
    int numberofhead=0;

    srand(time(NULL));
    printf("You tossed the coin 1000 times\n");

    for (i=0 ;i<1000 ;i++ ) {
        toss = (int) (rand() % 2);

        if (toss == HEAD){
            numberofhead+=1;}
    }

    printf("Number of heads: %d \n",numberofhead);
    printf("The number of tails: %d",1000-numberofhead);
    
    return 0;
}




