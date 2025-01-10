#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    string str_front = "";
    int idx = 0;
    string tmp = "";
    for(int i = 0; i < strings.size(); i++){//선택정렬
        idx = i;
        for(int j = i; j < strings.size(); j++){//모든 원소 탐색
            if(strings[j][n] == strings[idx][n]){ //만약 n번째 원소가 같다면
                if(strings[j] < strings[idx]){//두 원소 자체를 비교
                    idx = j;//사전적으로 앞에 있는걸로 교체
                }
            }
            else if(strings[j][n] < strings[idx][n]){//만약 str[n]이 더 앞이면
                idx = j;//교체
            }
                
        }
        answer.push_back(strings[idx]);//해당 원소 push_back
        tmp = strings[i];
        strings[i] = strings[idx];
        strings[idx] = tmp;
       
        
    }
    return answer;
}