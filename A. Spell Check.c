#include<stdio.h>
#include<string.h>

int main(){
    int t;
    scanf("%d", &t);
    
    while(t--){
        char s[11];
        int n; 
        scanf("%d", &n);
        scanf("%s", s);
        int r=0;
        
        if(n==5){
        int counts[5]= {0};
        
        for(int i=0; i<n; i++){
            char c=s[i];
            
            if(c=='T'){
                counts[0]++;
            }
            else if(c=='i'){
                counts[1]++;
            }
            else if(c=='m'){
                counts[2]++;
            }
            else if(c=='u'){
                counts[3]++;
            }
            else if(c=='r'){
                counts[4]++;
            }
        }
        
        if(counts[0]==1 && counts[1]==1 && counts[2]==1 && counts[3]==1 && counts[4]==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        
        }
        
        else{
            printf("NO\n");
        }
        
    }
    
    
    return 0;
}