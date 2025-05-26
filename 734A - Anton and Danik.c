#include<stdio.h>
#include<string.h>
int main(){
long long int n;
int i, A, D;
char a[100002];
scanf("%lld", &n);
getchar();
fgets(a, 100002, stdin);
a[strlen(a)-1]='\0';

for(i=0; i<n; i++){
    if(a[i]=='A'){
        A++;
    }
    else{
        D++;
    }
}
if(A>D){
    printf("Anton");
}
else if(A<D){
    printf("Danik");
}
else{
    printf("Friendship");
}
return 0;
}
