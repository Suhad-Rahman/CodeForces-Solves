#include <stdio.h>

long long gcd(long long a, long long b) {
    while (b!=0) {
        long long rem= a % b;
        a= b;
        b= rem;
    }
    return a;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        long long a[n];
        for (int i=0; i<n; i++) {
            scanf("%lld", &a[i]);
        }

        long long g = a[0];
        for (int i=1; i<n; i++) {
            g= gcd(g, a[i]);
        }

        if (g==1) {
            printf("2\n");
            continue;
        }

        long long ans = -1;
        for (long long x = 2; x <= 100; x++){
            if (gcd(g, x) == 1) {
                ans = x;
                break;
            }
        }

        printf("%lld\n", ans);
    }

    return 0;
}
