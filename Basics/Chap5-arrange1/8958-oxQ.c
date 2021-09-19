#include <stdio.h>
#include <string.h>
int main(){
    int n, output=0, num=0;
    scanf("%d", &n);
    char a[80];
    for(int i=0;i<n;i++){
        scanf("%s", a);
        num=0; output=0;
        for(int j=0;j<strlen(a);j++){
            if(a[j]=='O') num++;
            else if(a[j] == 'X') num=0;
            output+=num;
        }
        printf("%d\n", output);
    }
}