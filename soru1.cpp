#include <stdio.h>
#include <math.h>

int main() {
    int d;
    printf("D: ");
    scanf("%d", &d);

    int p = 0;

    while(pow(2,p) <= d){
        p++;
    }

    p--;

    while(p>=0){
        if(pow(2,p) <= d){
            printf("1");
            d-=pow(2,p);
        } else {
            printf("0");
        }
        p--;
    }
}
