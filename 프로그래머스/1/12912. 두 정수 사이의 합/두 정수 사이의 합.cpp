#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    int tmp;
    if(a > b){
        tmp = a;
        a = b;
        b = tmp;
    }
    long long answer = (a + b) * (long long)(((b-a)+1) / 2);
    if(((b-a)+1) % 2 != 0){
        answer += (a+b) / 2;
    }
    
    return answer;
}