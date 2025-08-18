#include <stdio.h>
//çözümü gayet basitmiş bu şekilde bakınca
int max(int a, int b) {
    // this is a ternary operator 
    // conditional ? return value if true : return value if false
    return a > b ? a : b;    
}

int max_of_four(int a, int b, int c, int d) {
    return max(a, max(b, max(c, d)));
}

int main(void){
    int a, b, c, d;
    printf("please, give me 4 number!\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("Answer is %d\n\n", ans);
}