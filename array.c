#include "count.h"

int** array(int T) {
    int **resultArr; //이차원 배열 저장
    resultArr = (int**) malloc ( sizeof(int*) * T );  //동적할당
    for(int i = 0; i<T; i++)
    {
        resultArr[i] = (int*) malloc ( sizeof(int) * 10 );
    }
    return resultArr;
}