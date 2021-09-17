#include <stdio.h>
int main(){
    //2562
    int a[8];
    for(int i=0;i<9;i++){
        scanf("%d", &a[i]);
    }
    int big=a[0];
    int flag=1;
    for(int i=0;i<9;i++){
        if(a[i]>big){
            big=a[i];
            flag=i+1;
        }
    }
    printf("%d\n%d", big, flag);
    //10818
    // int n;
    // scanf("%d", &n);
    // int a[n];
    // for(int i=0;i<n;i++){
    //     scanf("%d", &a[i]);
    // }
    // int small=a[0], big=a[0];
    // for(int i=0;i<n;i++){
    //     if(a[i]<small) small=a[i];
    //     if(a[i]>big) big=a[i];
    // }
    // printf("%d %d", small, big);
}