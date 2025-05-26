#include<stdio.h>
#include<string.h>
int main(){
int i, j, count=0
;
char a[102],b[102], clone;
fgets(a, 102, stdin);
a[strlen(a)-1]='\0';
for(i=0; i<strlen(a); i++){
    if(a[i]!='+'){
        b[count]=a[i];
        count++;
    }
}
for(i=0; i<count-1; i++){
    for(j=0; j<count-1 -i; j++){
    if(b[j]>b[j+1]){

        clone= b[j];
        b[j]=b[j+1];
        b[j+1]= clone;

        }

    }
}
for(i=0; i<count; i++){
    printf("%c", b[i]);

    if(i< count-1){
        printf("+");
    }
}

return 0;
}
