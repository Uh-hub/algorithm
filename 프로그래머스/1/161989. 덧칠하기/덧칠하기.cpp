#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int num = 0;
    for(int i = 0; i < section.size(); i++){
        if(i == 0){
            answer++;
            num = i;
        }
        else{
            if(section[num] + m - 1 < section[i]){
                answer++;
                num = i;
            }
        }
    }
    return answer;
}