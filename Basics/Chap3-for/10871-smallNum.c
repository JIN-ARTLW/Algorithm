#include <stdio.h>
int main(){
    int n, x;
    scanf("%d %d", &n, &x);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(int j=0;j<n;j++){
        if(x>a[j]) printf("%d ", a[j]);
    }
}