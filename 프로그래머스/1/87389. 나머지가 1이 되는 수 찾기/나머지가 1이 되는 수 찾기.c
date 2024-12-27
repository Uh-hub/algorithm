#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    for(int x = 1; x <= n; x++){
        if(n % x == 1){
            answer = x;
            return answer;
        }
    }
    
}