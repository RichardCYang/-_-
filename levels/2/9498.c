#include <stdio.h>

int main(int argc,char * argv[]){
    /* 시험 점수를 저장할 변수 선언 */
    /* int 대신 short 사용 => 메모리 공간 최적화 */
    short score = 0;
    /* 시험 점수를 입력 받아옴 */
    scanf("%d",&score);
    /* 시험 점수가 90 ~ 100 구간이면 */
    if( score > 89 && score < 101 ){
        /* 'A' 출력 */
        printf("A");
    /* 시험 점수가 80 ~ 90 구간이면 */
    }else if( score > 79 && score < 90 ){
        /* 'B' 출력 */
        printf("B");
    /* 시험 점수가 70 ~ 80 구간이면 */
    }else if( score > 69 && score < 80 ){
        /* 'C' 출력 */
        printf("C");
    /* 시험 점수가 60 ~ 70 구간이면 */
    }else if( score > 59 && score < 70 ){
        /* 'D' 출력 */
        printf("D");
    /* 시험 점수가 나머지 구간이면 */
    }else{
        /* 'F' 출력 */
        printf("F");
    }
    
    return 0;
}