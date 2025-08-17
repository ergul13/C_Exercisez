#include <stdio.h>

int main(void){
    int i;

    printf("The English Alphabet A-Z:\n");
    for(i = 65; i<=90;i++)
    {
        printf("%c",i);
    }

    printf("\n\nThe English Alphabet a-z:\n");
    for(i = 97; i<=122;i++)
    {
        printf("%c",i);
    }

}