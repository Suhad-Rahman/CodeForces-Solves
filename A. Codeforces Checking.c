#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    
    while(t--){
        char c;
        scanf(" %c", &c);
        
        char box[11]="codeforces";
        int flag=0;
        
        for(int i=0; i<10; i++){
            if(c==box[i]){
                flag=1;
                break;
            }
        }
        if(flag==1){
                printf("YES\n");
            }
        else{
                printf("NO\n");
            }
        
    }
    
    return 0;
}