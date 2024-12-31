#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = -1;
    long num = sqrt(n);
    if(num*num == n){
        answer = (num+1) * (num+1);
    }
    return answer;
}