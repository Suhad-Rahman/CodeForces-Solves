#include<stdio.h>
int main(){
    int n, square, dig=1, rem, clone, flag=1, count=0;
    
    printf("Please enter the Number: ");
    scanf("%d", &n);
    
    square=n*n;
    clone=n;
    
    while(clone!=0){
        clone=clone/10;
        count++;
    }
    clone=n;
    
    if(count<1){
    for(int i=0; i<2; i++){
        rem=square%10;
        if(rem==clone%10){
            square=square/10;
            clone=clone/10;
            continue;
        }
        else{
            flag=0;
            break;
        }
    }
    }
    
    else{
        for(int i=0; i<1; i++){
        rem=square%10;
        if(rem==clone%10){
            square=square/10;
            clone=clone/10;
            continue;
        }
        else{
            flag=0;
            break;
        }
    }
    }
    
    if(flag==1){
        printf("%d is an Automorphic Number.",n);
    }
    
    else{
        printf("%d is NOT an Automorphic Number.", n);
    }
    
}