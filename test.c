#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int fun(int n) {
//     int r = 0;
//     int q = 8*n;
//     for (int i=0; i<=q; i=i+4) {
//         for (int j=0; j<i; j++) {
//             r++;
//         }
//     }
//     return r;
// }

int fun(int n) {
    int r;
    int s=0;
    int count =0;
    for(int q=1; q<=n; q++) {
        s=s+q;
        count++;
    }
    s*=2;
    printf("             n=%d, s=%d\n", n,s);
    for(r=s/2; r>2; r--){
        s--;
        count++;
    }
    // printf("%d\n",count);
    return r*s;
}

int main () {
    printf("n=5 r=%d\n", fun(5));
    printf("n=6 r=%d\n", fun(6));
    printf("n=7 r=%d\n", fun(7));
    printf("n=8 r=%d\n", fun(8));
    return 0;
}