#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= 2*n; i++) 
    i % 2 == 0 ?: printf("%d ", i);
    return 0;
}