#include<stdio.h>
#include<string.h>
int main(){
char a[20];
fgets(a, 20, stdin);
a[strlen(a)-1]= '\0';
int i, count=0;

for(i=0; i<strlen(a); i++){
    if(a[i]=='4' || a[i]=='7'){
        count++;
    }
}
if(count==4 || count==7){
    printf("YES");
}
else{
    printf("NO");
}
return 0;
}
