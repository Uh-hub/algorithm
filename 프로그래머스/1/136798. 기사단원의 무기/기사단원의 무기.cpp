#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    int divisor = 0;
    for(int i = 1; i <= number; i++){
        for(int j = 1; j <= sqrt(i); j++)//약수의 개수 구하기
        {
            if(i % j == 0){
                if(j*j == i){
                    divisor+=1;
                }
                else{
                    divisor+=2;
                }              
            }
        }
        if(divisor > limit){
            answer += power;
        }
        else{
            answer += divisor;
        }
        divisor = 0;
    }
    return answer;
}