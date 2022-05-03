#include <stdio.h>

int main(int argc,char * argv[]){
    /* 각각 A와 B 변수 선언 */
    /* int 대신 short 사용 => 메모리 공간 최적화 */
    short a = 0;
    short b = 0;
    /* A,B 두 수를 입력 받아옴 */
    scanf("%d %d",&a,&b);
    /* A가 B보다 크다면 */
    if( a > b ){
        /* '>' 출력 */
        printf(">");
    /* A가 B보다 작다면 */
    }else if( a < b ){
        /* '<' 출력 */
        printf("<");
    /* A와 B가 동일하다면 */
    }else{
        /* '==' 출력 */
        printf("==");
    }
    return 0;
}