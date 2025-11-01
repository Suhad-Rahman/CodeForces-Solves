#include<stdio.h>

int max(int a, int b) {
    
    return (a>b) ? a:b;
}

int main() {
    
    int t;
    scanf("%d", &t);
    
    while(t--) {
        int n,x;
        scanf("%d %d", &n, &x);
        
        int prev_location=0;
        int max_fuel=0;
        
        for(int i=0; i<n; i++) {
            int current_location;
            
            scanf("%d", &current_location);
            
            int distance = current_location - prev_location;
            prev_location=current_location;
            
            max_fuel = max(max_fuel, distance);
        }
        
        int goal= x - prev_location;
        
        max_fuel = max(max_fuel, goal*2);
        
        printf("%d\n", max_fuel);
        
    }
    
    return 0;
}