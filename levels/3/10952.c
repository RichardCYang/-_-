#include <stdio.h>

int main()
{
    /* 더하기 피연산자 저장할 변수 A,B */
    /* int 대신 short 사용 => 메모리 공간 최적화 */
    short A,B;
    /* 무한루프 */
    while(1){
        /* 사용자로부터 두 개의 값 입력 받아오기 */
        scanf("%hd %hd",&A,&B);
        /* 두 값이 모두 0이면 */
        if( A == 0 && B == 0 ){
            /* 무한루프를 빠져 나가고, 프로그램 종료 */
            break;
        }
        /* 두 값을 더한 값 출력 */
        printf("%d\n",A + B);
    }
}