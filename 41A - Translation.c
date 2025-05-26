#include<stdio.h>
int main(){
int i, j=0, flag=0, x;
char a[102], b[102], c[102];
fgets(a, 102, stdin);
fgets(c, 102, stdin);
a[strlen(a)-1]='\0';
c[strlen(c)-1]= '\0';

for(i= strlen(a)-1; i>=0; i--){
    b[j]=a[i];
    j++;
}
if(strlen(a)>strlen(c)){
    x=strlen(a);
}
else{
    x=strlen(c);
}
for(i=0; i<x; i++){
    if(b[i]!=c[i]){
        flag=1;
        break;
    }
}
if(flag==0){
    printf("YES");
}
else{
    printf("NO");
}
return 0;
}
