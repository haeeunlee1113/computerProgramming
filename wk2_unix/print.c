#include "count.h"
int print(int **resultArr, int T){
    for (int i = 0; i < T; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", resultArr[i][j]);
        }

        printf("\n");
    }//이차원 배열을 프린트 해준다.
}
