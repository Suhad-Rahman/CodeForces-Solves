#include<stdio.h>
#include<string.h>
int main(){

char a[1002];
fgets(a, 1002, stdin);
a[0]= toupper(a[0]);
printf("%s", a);

return 0;
}
