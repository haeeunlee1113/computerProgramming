#include "count.h"

int main() {
    int T; // 처음 입력 받는 테스트 케이스 갯수
    int **resultArr = array(T);//결과 저장을 위한 이차원 배열 생성


    printf("테스트 케이스를 입력하세요 : ");
    scanf("%d", &T); // 테스트 케이스 갯수 입력 받음

    for (int i = 0; i < T; i++) // 각각 테스트 케이스에 대해 counting 한 후 이차원 배열로 저장한다.
    {
        int testCase;
        scanf("%d",&testCase);

        for (int j = 0; j < 10; j++) {
            resultArr[i][j] = count(testCase)[j];
        }
    }
    print(resultArr,T);
    return 0;

}