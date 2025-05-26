#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
int i, up=0, low=0;
char a[102];
fgets(a, 102, stdin);
a[strlen(a)-1]='\0';

for(i=0; i<strlen(a); i++){
    if(a[i]<97){
        up++;
    }
    else{
        low++;
    }
}
if(up>low){
    for(i=0; i<strlen(a); i++){
        a[i]= toupper(a[i]);
    }
}
else{
    for(i=0; i<strlen(a); i++){
        a[i]= tolower(a[i]);
    }
}
printf("%s", a);
return 0;
}
