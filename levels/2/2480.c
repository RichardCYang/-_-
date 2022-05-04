#include <stdio.h>

int main()
{
    /* noon1 = 첫 번째 주사위의 눈을 저장시킬 변수 */
    /* noon2 = 두 번째 주사위의 눈을 저장시킬 변수 */
    /* noon3 = 세 번째 주사위의 눈을 저장시킬 변수 */
    /* int 대신 short 사용 => 메모리 공간 최적화 */
    short noon1 = 0;
    short noon2 = 0;
    short noon3 = 0;
    /* 주사위 1~3 각각의 눈을 입력 받아옴 */
    scanf("%hd %hd %hd",&noon1,&noon2,&noon3);
    /* 주사위 1~3의 눈 중에서 가장 높은 숫자를 가져오기 (삼항연산자 이용) */
    short maxNoon = noon1 > noon2 ? noon1 : noon2;
    maxNoon = maxNoon > noon3 ? maxNoon : noon3;
    /* 첫 번째 눈과 두 번째 눈, 그리고 세 번째 눈이 모두 같은 수 라면? */
    if( (noon1 == noon2) && (noon2 == noon3) ){
        /* 문제의 1번째 조건식에 의해 */
        /* 다음과 같이 계산되어서 출력 */
        /* 현재 모든 눈이 동일하므로, 눈 1~3 중에 아무거나 */
        /* 뽑아서 1000에 곱합 (여기서는 두 번째 눈을 선택) */
        printf("%d",10000 + (noon2 * 1000));
    }else{
        /* 세개의 눈 중에서 어떤 눈이 같은지에 따라, 동일한 눈이 달라짐 */
        if( (noon1 == noon2) || (noon1 == noon3) ){
            /* 문제의 2번째 조건식에 의해 */
            /* 다음과 같이 계산되어서 출력 */
            printf("%d",1000 + (noon1 * 100));
        }else if( (noon2 == noon3) ){
            /* 문제의 2번째 조건식에 의해 */
            /* 다음과 같이 계산되어서 출력 */
            printf("%d",1000 + (noon2 * 100));
        /* 동일한 눈이 하나도 없을 때 */
        }else{
            /* 문제의 3번째 조건식에 의해 */
            /* 다음과 같이 계산되어서 출력 */
            printf("%d",maxNoon * 100);
        }
    }

    return 0;
}