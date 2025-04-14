#include<Stdio.h>
int main(){
long long l,w,a;
scanf("%lld %lld %lld", &l, &w, &a);

long long tiles_length= (l+a-1)/a;
long long tiles_width= (w+a-1)/a;

long long total_tiles= tiles_length*tiles_width;

printf("%lld", total_tiles);

return 0;
}
