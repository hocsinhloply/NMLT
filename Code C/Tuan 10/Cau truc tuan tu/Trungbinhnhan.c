#include <stdio.h>
#include <math.h>

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%.2f", (float) sqrt(a * b));
    return 0;
}