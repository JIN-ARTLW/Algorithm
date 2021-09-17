#include <stdio.h>
int main(){
    int input;
    scanf("%d", &input);
    for(int i=1;i<=input;i++){
        for(int j=1;j<=input-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
}