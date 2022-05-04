#include <stdio.h>

int main()
{
    /* 합을 구해야 할 대상 범위를 저장 할 변수 선언 */
    /* int 대신 short 사용 => 메모리 공간 최적화 */
    short n = 0;
    /* 합을 구할 범위를 입력 받아오기 */
    scanf("%hd",&n);
    /* 등차수열의 합 공식을 이용한 합을 계산 */
    printf("%d",(n * (n + 1))/2);
}