#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    int a, b;
    for(int i = t;i>0;i--){
        scanf("%d %d",&a,&b);
        printf("%d\n", a+b);
    }
}