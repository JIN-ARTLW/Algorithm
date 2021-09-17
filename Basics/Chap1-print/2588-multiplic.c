#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    int b1, b2, b3;
    b3 = b%10;
    b2 = (b%100 - b3)/10;
    b1 = (b - (b2*10+b3))/100;
    //printf("%d %d %d\n\n", b1, b2, b3);

    int o1 = a*b1;
    int o2 = a*b2;
    int o3 = a*b3;
    printf("%d\n%d\n%d\n%d", o3, o2, o1, o3+o2*10+o1*100);
}