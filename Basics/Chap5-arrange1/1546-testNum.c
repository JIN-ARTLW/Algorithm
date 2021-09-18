#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    float test[n];
    for(int i=0;i<n;i++){
        scanf("%f", &test[i]);
    }
    int m=test[0];
    for(int i=0;i<n;i++){
        if(m<test[i]) m=test[i];
    }
    for(int i=0;i<n;i++){
        test[i]=test[i]/m*100;
    }
    float out=0.0;
    for(int i=0;i<n;i++){
        out += test[i];
    }
    printf("%f", out/n);
}