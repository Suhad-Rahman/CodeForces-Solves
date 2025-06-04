#include<stdio.h>
#include<string.h>
int main(){
    int i, j=0, count=0;
    char s[102];
    fgets(s, 102, stdin);
    s[strlen(s)-1]='\0';
    char check[6]="hello";
    for(i=0; i<strlen(s); i++){
        if(s[i]==check[j]){
            j++;
            count++;
        }
    }
    if(count==5){
        printf("YES");
    }
    else{
        printf("NO");
    }
}