#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> first = {1,2,3,4,5};
    vector<int> second = {2,1,2,3,2,4,2,5};
    vector<int> third = {3,3,1,1,2,2,4,4,5,5};
    
    vector<int> score(3,0);
    int max = 0;
    
    for(int i = 0; i < answers.size(); i++){
        //1번 수포자
        if(answers[i] == first[i % first.size()]){
                score[0]++;
        }
        //2번 수포자
        if(answers[i] == second[i % second.size()]){
            score[1]++;
        }
        //3번 수포자
        if(answers[i] == third[i % third.size()]){
            score[2]++;
        }
    }
    max = *max_element(score.begin(), score.end());
    for(int i = 0; i < score.size(); i++){
        if(score[i] == max){
            answer.push_back(i+1);
        }
    }
    return answer;
}