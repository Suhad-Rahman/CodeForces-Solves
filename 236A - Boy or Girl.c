#include<stdio.h>
#include<string.h>
int main(){

BoyGirl();
return 0;
}

void BoyGirl(){
char a[102];
fgets(a, 102, stdin);
a[strlen(a)-1]='\0';
    int i, sum=0;
    char f[256]= {0};
        for(i=0; i<strlen(a); i++){
            f[a[i]]++;
        }
        for(i=0; i<256; i++){
            if(f[i]>0){
                sum++;
            }
        }
        if(sum%2==0){
            printf("CHAT WITH HER!");
        }
        else{
            printf("IGNORE HIM!");
        }
}
