#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    
    while(t--){
        char s[11];
        scanf("%10s", s);
        
        char box[11]="codeforces";
        int diff=0;

        
        for(int i=0; i<10; i++){
            if(s[i]!=box[i]){
                diff++;
            }
        }
        
        printf("%d\n", diff);
        
    }
    
    
    return 0;
}