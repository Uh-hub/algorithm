#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int num) {
    // 리턴할 값은 메모리를 동적 할당해주세요
    char* result = (num % 2 == 0? "Even" : "Odd");
    char* answer = (char*)malloc(strlen(result) + 1);
    strcpy(answer, result);
    return answer;
}