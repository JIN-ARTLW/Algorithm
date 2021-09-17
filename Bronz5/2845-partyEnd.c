#include <stdio.h>
int main(){
    int a, b, c[4], people;
    scanf("%d %d", &a, &b);
    for(int i=0;i<5;i++){
        scanf("%d", &c[i]);
    }
    people = a*b;
    for(int i=0; i<5;i++){
        printf("%d ", c[i]-people);
    }
}