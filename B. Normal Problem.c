#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d", &t);
    
    while(t--){
        char str[101],box[2];
        scanf("%s", str);
        
        int len=strlen(str)-1;
        
        for(int i=0; i<=len/2; i++){
            box[1]=str[i];
            str[i]=str[len-i];
            str[len-i]= box[1];
        }
        
        for(int i=0; i<=len; i++){
            if(str[i]=='p'){
                str[i]='q';
            }
            else if(str[i]=='q'){
                str[i]='p';
            }
            else{
                continue;
            }
        }
        
        printf("%s\n", str);
        
    }
    
    
    return 0;
}