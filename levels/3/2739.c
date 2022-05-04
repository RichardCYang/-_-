#include <stdio.h>

int main(int argc,char * argv[]){
    /* 구구단 몇 단인지 입력 받아 저장시킬 변수 */
    /* int 대신 short 사용 => 메모리 공간 최적화 */
    short N = 1;
    /* 몇 단 구구단을 계산해야 하는지 입력 받아옴 */
    scanf("%hd",&N);
    /* 1부터 9까지 반복문을 돌림 (1단 ~ 9단) */
    for(short i = 1;i < 10;i++){
        /* 구구단 곱셈 계산 */
        printf("%d * %d = %d\n",N,i,N * i);
    }
}