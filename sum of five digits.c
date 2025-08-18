#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    int sum = 0;

    printf("5 haneli sayı giriniz\n\n");
    scanf("%d", &n);
    
    if(n>10000 && n<99999){
        while(n>0){
            sum += n%10;
            n = floor(n/10);
        }
        printf("answer is : %d\n", sum);}
    else
        {printf("yanlış sayı girdiniz");}
    return 0;
}