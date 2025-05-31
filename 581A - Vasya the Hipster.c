#include<stdio.h>
int main(){

int a, b, c;
scanf("%d %d", &a, &b);

if(a<b){
    c=(b-a)/2;
    printf("%d %d", a, c);
}
else{
    c=(a-b)/2;
    printf("%d %d", b, c);
}
return 0;
}
