#include <stdio.h>
int main(){
    int a[5], output;
    for(int i = 0;i<5;i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0;i<5;i++){
        a[i] = a[i]*a[i];
    }
    output = a[0]+a[1]+a[2]+a[3]+a[4];
    printf("%d", output%10);
}