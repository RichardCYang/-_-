#include <stdio.h>

int main(int argc,char * argv[]){
    /* 각각 x와 y 좌표 변수 선언 */
    /* int 대신 short 사용 => 메모리 공간 최적화 */
    short x = 0;
    short y = 0;
    /* x좌표 입력 후, 다음 라인에서 y좌표 입력 받아옴 */
    scanf("%d\n%d",&x,&y);
    /* x가 양수라면? => 제1,제4 사분면 */
    if( x > 0 ){
        /* x가 양수면서, y도 양수라면? => 제1 사분면 */
        if( y > 0 ){
            /* '1' 출력 */
            printf("1");
        /* x가 양수면서, y는 음수라면? => 제4 사분면 */
        }else{
            /* '4' 출력 */
            printf("4");
        }
    /* x가 음수라면? => 제2,제3 사분면 */
    }else{
        /* x가 음수면서, y가 양수라면? => 제2 사분면 */
        if( y > 0 ){
            /* '2' 출력 */
            printf("2");
        /* x가 음수면서, y도 음수라면? => 제3 사분면 */
        }else{
            /* '3' 출력 */
            printf("3");
        }
    }
    
    return 0;
}