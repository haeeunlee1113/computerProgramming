#include  "count.h"

int *count(int testCase) {
    int *countArr; //결과를 담을 array 만듦
    countArr = (int*) malloc ( sizeof(int) * 10 );
    for(int temp = 0; temp<10; temp++) {
        countArr[temp] = 0;
    } //array 0으로 초기화
    int i, num;
    for ( i=1; i<=testCase ; i++) {
        num = i;
        while(num>0) {
            countArr[num%10]++; // 10 나눈 나머지 = 10진법에서 n자리수에 쓰인 숫자이기 때문에 나머지에 해당하는 배열 값 +1 해줌
            num/=10; // n번째 자리의 값을 알아냈다면 다음엔 n-1 번째 자리의 값을 알아내야 하게 때문에 10으로 나눠줌
        }
   }
    return countArr;
}

