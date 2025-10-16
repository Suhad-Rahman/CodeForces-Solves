#include<stdio.h>
int main(){
     int t;
     scanf("%d", &t);
     
     while(t--){
         int x, y, z, w;
         
         scanf("%d %d %d", &x, &y, &z);
         
         w =x&y&z;
         
         if((x&y)==w && (x&z)==w && (y&z)==w){
             printf("YES\n");
         }
         else{
             printf("NO\n");
         }
         
         
     }
    
    
    return 0;
}