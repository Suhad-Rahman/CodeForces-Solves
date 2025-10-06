#include<stdio.h>
int main(){
    int t, c, j, additional_c;
    
    scanf("%d", &t);
    
    for(int i=0; i<t; i++){
        additional_c=0;
        scanf("%d", &c);
        if(c%3!=0){
            while(c%3!=0){
                c++;
                additional_c++;
            }
            printf("%d\n", additional_c);
        }
        
        else if (c==0){
            printf("3\n");
        }
        else{
            printf("%d\n", additional_c);
        }
        
    }
    
    
    
    return 0;
}