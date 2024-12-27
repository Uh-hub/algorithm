#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    int cnt = 0;
    long long n_cpy = n;
    while(n_cpy / 10 != 0){
        n_cpy /= 10;
        cnt++;
    }
    int* answer = (int*)malloc(sizeof(long long) * cnt);
    int i = 0;
    while(n >= 10){
        answer[i] = n % 10;
        n /= 10;
        i++;
    }
    answer[i] = n;
    return answer;
}