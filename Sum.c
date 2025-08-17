#include <stdio.h>
// Program to calculate the sum of first N natural numbers"
int main(void){
    int N,i=0, sum = 0;

    N = 10;

    for( i=0; i<=N; i++){
        sum +=i;
    }
    printf("%d", sum);
    return 0;
}