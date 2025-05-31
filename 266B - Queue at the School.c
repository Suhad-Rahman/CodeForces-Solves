#include<stdio.h>
#include<string.h>
int main(){
int n, t, i, count=0;
scanf("%d %d", &n, &t);
getchar();
char a[n+1], clone;
for(i=0; i<n; i++){
    scanf("%c", &a[i]);
}
a[strlen(a)]='\0';

    for(i=0; i<t; i++){
        for(int j=0; j<n-1; j++){

        if(a[j]=='B' && a[j+1]!='B'){
            clone=a[j];
            a[j]=a[j+1];
            a[j+1]=clone;
            j++;
                }
            }
        }
a[n]='\0';
printf("%s", a);

return 0;
}
