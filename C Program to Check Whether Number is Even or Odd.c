#include <stdio.h>

void check(int N){
    if(N%2 == 0){
        printf("number is even\n");
    }
    else{
        printf("number is odd\n");
    }
}

int main(void){
    int N = 5;
    check(N);
    return 0;
}