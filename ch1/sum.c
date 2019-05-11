#include <stdio.h>
int sum(int c, int d){
    return c + d;
}
void main(){
    int a = 3;
    int b = 4;
    printf("%d + %d = %d\n",a,b, sum(a, b));
}
