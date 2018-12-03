#include <stdio.h>
#include <math.h>

int main() {
    int n, m;

    printf("N: ");
    scanf("%d", &n);

    printf("M: ");
    scanf("%d", &m);

    int r, c;
    for(r=1; r<=n; r++){
        for(c=1; c<=m; c+=3){
            printf("%d,%d\n", c, r);
        }
    }
}
