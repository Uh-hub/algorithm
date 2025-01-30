#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = n - lost.size();
    
    for(int i = 0; i < lost.size(); i++){
        for(int j = 0; j < reserve.size(); j++){
            if(lost[i] == reserve[j] && reserve[j] > 0){
                lost[i] = -3;
                reserve[j] = 0;
                answer++;
            }
        }
    }
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());
    for(auto l_st : lost){
        if(l_st < 0){
            continue;
        }
        for(int i = 0; i < reserve.size(); i++){
            if(l_st - 1 == reserve[i] || l_st + 1 == reserve[i]){
                reserve[i] = 0;
                answer++;
                break;
            }
        }
    }
    return answer;
}