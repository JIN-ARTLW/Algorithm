#include <stdio.h>
int main(){
    //10951
    //EOF는 출력 초과 전까지만 실행
    int A, B;
	while (scanf("%d %d", &A, &B) != EOF)
		printf("%d\n", A + B);
	return 0;
    // 10952
    // scanf("%d %d", &a, &b);
    // while(a!=0 && b!=0){
    //     printf("%d\n", a+b);
    //     scanf("%d %d", &a, &b);
    // }
}