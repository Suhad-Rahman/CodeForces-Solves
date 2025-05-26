#include<stdio.h>
#include<string.h>
int main(){
char a[102];
int i, count=0;
fgets(a, 102, stdin);
a[strlen(a)-1]='\0';
for(i=0; i<strlen(a); i++){
    if(a[i]==a[i+1]){
        count++;
        if(count>=6){
            break;
        }
    }
    else{
        count=0;
    }
}
if(count==6){
    printf("YES");
}
else{
    printf("NO");
}
return 0;
}
