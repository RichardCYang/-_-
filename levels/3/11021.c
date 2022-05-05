#include <stdio.h>

int main()
{
    /* 테스트(더하기 연산) 횟수를 저장할 변수(T)와 피연산자 변수(A,B) 선언 */
    /* int 대신 short 사용 => 메모리 공간 최적화 */
    short T,A,B,i;
    /* 테스트(더하기 연산) 횟수 입력 받아오기 */
    scanf("%hd",&T);
    /* 테스트(더하기 연산) 횟수만큼 반복하며 더하기 하기 */
    for(i = 0; i < T;i++){
        /* 피연산자(A,B) 입력 받아오기 */
        scanf("%hd %hd",&A,&B);
        /* 더하기 결과값을 서식(Case #1: 1)에 맞추어 출력 */
        printf("Case #%d: %d\n",i + 1,A + B);
    }
}