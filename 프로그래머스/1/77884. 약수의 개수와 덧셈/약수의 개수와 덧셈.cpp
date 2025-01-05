#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    int idx = 1;
    for(int i = left; i <= right ; i++){
        answer += i;
    }
    while((idx*idx) < left){
        idx++;
    }
    for(idx+1; (idx*idx) <= right;idx++){
        answer -= 2*(idx*idx);
    }
    return answer;
}