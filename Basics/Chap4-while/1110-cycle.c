#include <stdio.h>
int main(){
    int input, a, b, c;
    int count = 0;
    scanf("%d", &input);
    int new = input;
    do{
        a = new/10;
        b = new%10;
        c = (a + b) % 10;
        new = (b*10) + c;
        count++;
    }while(new != input);
    printf("%d", count);
}