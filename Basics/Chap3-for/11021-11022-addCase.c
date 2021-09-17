#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    int a, b;
    for(int i = t;i>0;i--){
        scanf("%d %d",&a,&b);
        // printf("Case #%d: %d\n", t-i+1, a+b);
        printf("Case #%d: %d + %d = %d\n", t-i+1, a, b, a+b);
    }
}