#include<stdio.h>
#include<string.h>

int main(){
int n, i, count=0;
scanf("%d", &n);
getchar();
char a[n+1];
for(i=0; i<n; i++){
    scanf("%c", &   a[i]);
}
a[n+1]='\0';

for(i=0; i<strlen(a); i++){
    if(a[i]==a[i+1]){
        count++;
    }
}
printf("%d", count);

return 0;
}
