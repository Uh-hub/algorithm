#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int tmp = x;
    int sum = 0;
    while(tmp != 0){
        sum += tmp % 10;
        tmp /= 10;
    }
    if(x % sum != 0){
        answer = false;
    }
    return answer;
}