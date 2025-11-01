#include<stdio.h>

int max (int a, int b) {
    return (a>b) ? a : b;
}

int main () {
    
    int a,b,c;
    
    scanf("%d %d %d", &a, &b, &c);
    
    int max_value = a+b+c;
    
    max_value = max(max_value, a * (b+c));
    
    max_value = max (max_value, (a+b)*c);
    
    max_value = max(max_value, a*b*c);
    
    max_value = max(max_value, a*b+c);
    
    max_value = max(max_value, a+b*c);
    
    printf("%d", max_value);
    
    
    
    return 0;
}