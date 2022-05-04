#include <stdio.h>

int main()
{
    /* 이 문제는 기본적으로 10950번 문제와 동일함 */
    /* 단 C가 아닌 C++ 에서는 출력할 때, std::endl 대신 '\n' 써줘야 더 빨라짐 */
    /* std::endl 내부적으로 개행만 해주는게 아니라 버퍼를 Flush 하는 역할도 */
    /* 같이 하므로, 더 느려짐 */
    int T,i;
    short A,B;
    scanf("%d\n",&T);
    for(i = 0; i < T; i++){
        scanf("%hd %hd",&A,&B);
        printf("%d\n",A + B);
    }
}