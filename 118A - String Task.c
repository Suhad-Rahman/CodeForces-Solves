#include<stdio.h>
#include<string.h>

int main(){
int i;
char a[102];
fgets(a, 102, stdin);
a[strlen(a)-1]='\0';

for(i=0; i<strlen(a); i++){
    a[i]=tolower(a[i]);
}
for(i=0; i<strlen(a); i++){
    int j=i;
    if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='y'){
        for(j; j<strlen(a); j++){
            a[j]=a[j+1];
        }
        i--;
    }

}
for(i=0; i<strlen(a); i++){
    printf(".%c", a[i]);
}

return 0;
}
