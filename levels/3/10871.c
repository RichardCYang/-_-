#include <stdio.h>

int main()
{
    /* 테스트 횟수 변수(N) */
    /* 크기를 비교할 대상 기준값 변수(X) */
    /* int 대신 short 사용 => 메모리 공간 최적화 */
    short N,X,i,num;
    char * format;
    /* 테스트 횟수와 크기비교 대상 값 입력 받아오기 */
    scanf("%hd %hd",&N,&X);
    /* 테스트 횟수만큼 반복 */
    for(i = 0; i < N;i++){
        scanf("%hd",&num);
        /* 입력 받은 값이 기준 값보다 작으면 */
        if( num < X ){
            /* 해당 값 출력 */
            printf("%d\n",num);
        }
    }
}