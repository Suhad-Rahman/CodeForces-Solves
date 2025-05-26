#include<stdio.h>
#include<stdlib.h>
int main(){
int a[5][5], i, j, x, y, moves;

for(i=0; i<5; i++){
    for(j=0; j<5; j++){
        scanf("%d", &a[i][j]);
    }
}

for(i=0; i<5; i++){
    for(j=0; j<5; j++){
        if(a[i][j]==1){
            x=i;
            y=j;
        }
    }
}
moves= abs(x-2)+abs(y-2); //Manhattan Distance to Center = So, if 1 is found at (x, y), the distance to the center (2,2) would be |x - 2| + |y - 2|
printf("%d", moves);
return 0;
}
