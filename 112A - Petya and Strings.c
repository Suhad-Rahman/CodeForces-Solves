#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
int i;
char a[102], b[102];
fgets(a, 102, stdin);
fgets(b, 102, stdin);

a[strlen(a)-1]='\0';
b[strlen(b)-1]='\0';

for(i=0; i<strlen(a); i++){
    a[i]= toupper(a[i]);
    b[i]= toupper(b[i]);
}
int o=strcmp(a, b);
if(o>0){
    printf("1");
}
else if(o==0){
    printf("0");
}
else{
    printf("-1");
}
return 0;
}
