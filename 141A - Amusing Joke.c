#include<stdio.h>
#include<string.h>
int main(){
int i, j, flag;
char a[102], b[102], c[204], clone;
fgets(a, 102, stdin);
fgets(b, 102, stdin);
fgets(c, 204, stdin);

a[strlen(a)-1]='\0';
b[strlen(b)-1]='\0';
c[strlen(c)-1]='\0';

strcat(a,b);

for(i=0; i<strlen(a)-1; i++){
        flag=0;
    for(j=0; j<strlen(a)-1; j++){
        if(a[j]>a[j+1]){
            clone=a[j];
            a[j]=a[j+1];
            a[j+1]=clone;
                flag=1;
        }
    }
    if(flag==0){
        break;
    }
}
for(i=0; i<strlen(c)-1; i++){
        flag=0;
    for(j=0; j<strlen(c)-1; j++){
        if(c[j]>c[j+1]){
            clone=c[j];
            c[j]=c[j+1];
            c[j+1]= clone;
                flag=1;
        }
    }
    if(flag==0){
        break;
    }
}
if(strcmp(a,c)==0){
    printf("YES");
}
else{
    printf("NO");
}
return 0;
}
