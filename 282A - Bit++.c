#include<stdio.h>
#include<string.h>
int main(){

int n, i, count=0;
scanf("%d", &n);
getchar();
for(i=0; i<n; i++){
    char a[5];
    fgets(a, 5, stdin);
    if(a[1]=='+'){
        count++;
    }
    else{
        count--;
    }
}
printf("%d", count);
return 0;
}
