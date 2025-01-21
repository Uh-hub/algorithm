#include <string>
#include <vector>
#include <algorithm>


using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> rank;
    for(int i = 0; i < score.size(); i++){
        rank.push_back(score[i]);
        sort(rank.begin(), rank.end(), greater());
        
        if(rank.size() < k){
            answer.push_back(rank.back());
        }
        else{
            answer.push_back(rank[k-1]);
        }
    }
    return answer;
}