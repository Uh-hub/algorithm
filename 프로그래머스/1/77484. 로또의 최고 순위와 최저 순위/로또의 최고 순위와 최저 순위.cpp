#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int min_score = 0;
    int max_score = 0;
    for(int num : lottos){
        if(num == 0){
            max_score++;
        }
        else if(find(win_nums.begin(), win_nums.end(), num) != win_nums.end()){
            min_score++;
        }
    }

    max_score += min_score;
    if(max_score >  6 || max_score == 0){
        answer.push_back(6);
    }
    else{
        answer.push_back(7 - max_score);
    }
    
    if(min_score > 6 || min_score == 0){
        answer.push_back(6);
    }
    else{
        answer.push_back(7 - min_score);
    }
    return answer;
}