#include <stdio.h>
int main(){
    int a[9];
    int output=0;
    for(int i=0;i<10;i++){
        scanf("%d", &a[i]);
    }
    for(int i=0;i<10;i++){
        a[i] = a[i]%42;
    }
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(a[i] == a[j]) {
                output++;
                break;
                }
        }
    }
    printf("%d", 10-output);
}