#include <stdio.h>
int main(){
    int c, n;
    scanf("%d", &c);
    for(int j=0;j<c;j++){
        scanf("%d", &n);
        int a[n], ave=0;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            ave += a[i];
        }
        ave /= n;
        int flag = 0;
        for(int i=0;i<n;i++){
            if(a[i]>ave) flag++;
        }
        printf("%.3f%%\n", 100/(float)n*flag);
    }
}