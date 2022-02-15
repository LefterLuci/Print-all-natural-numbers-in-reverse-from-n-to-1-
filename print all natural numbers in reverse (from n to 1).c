#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {

    int n,index=0;

    printf("Print all natural numbers from 1 to n in reverse. Please type n:\n");
    scanf("%d",&n);

    while(n>=index){

        printf("%d ",n);
        n--;
    }
       return 0;