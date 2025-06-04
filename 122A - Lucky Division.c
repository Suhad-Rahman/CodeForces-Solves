#include<stdio.h>
int main(){
    int n, i, rem, flag;
    scanf("%d", &n);
    i=n;
    while(i!=0){
        flag=0;
        rem=i%10;
        if(rem==4 || rem==7){
            flag=1;
        }
        if(flag==0){
            break;
        }
        i/=10;
    }
    if(flag==1 || n%4==0 || n%7==0 || n%44==0 || n%47==0 || n%74==0 || n%77==0 || n%444==0 || n%447==0 || n%474==0 || n%477==0 || n%744==0 || n%747==0 || n%774==0 || n%777==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}