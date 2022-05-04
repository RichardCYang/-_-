#include <stdio.h>

int main()
{
    /* 2741번 문제와 동일하나, 2741번 문제는 오름차순 출력이고, 해당 문제는 반대로 */
    /* 큰 수 부터, 내림차순으로 출력하는 문제입니다. */
    int i,N;
    scanf("%d",&N);
    for(i = N; i > 0;i--){
        printf("%d\n",i);
    }
}