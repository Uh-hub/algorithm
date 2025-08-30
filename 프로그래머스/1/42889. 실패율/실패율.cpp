#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

bool cmp(const pair<float, int>& a, const pair<float, int>& b)
{
    if(a.first == b.first)
    {
        return a.second < b.second;
    }
    else
    {
        return a.first > b.first;
    }
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<int> stage_num (N+1, 0);
    //각 스테이지 별 플레이어 수를 stage_num에 저장
    for (int i = 0; i < stages.size(); i++)
    {
        stage_num[stages[i]-1]++;
    }
    
    //실패율 계산
    //실패율 저장하는 벡터
    vector<pair<float, int>> failrate;

    int reachedPlayer = stages.size();
    for(int i = 0; i < N; i++)
    {//각 스테이지 별 실패율 계산
        //분자는 stage_num에서, reachedPlayer는 분모 - 분자
        int stillPlayer = stage_num[i];
        if(stillPlayer == 0 || reachedPlayer == 0)
        {
            failrate.push_back(make_pair(0, i+1));
        }
        else
        {
            failrate.push_back(make_pair((float) (stillPlayer) / (reachedPlayer), i+1));
        }
        
        reachedPlayer -= stillPlayer;
        
    }

    //이중 벡터를 실패율 기준 내림차순으로 정렬 
    sort(failrate.begin(), failrate.end(), cmp);
    //answer에 정렬된 스테이지를 순차적으로 삽입해서 반환 
    for(int i = 0; i < failrate.size(); i++)
    {
        answer.push_back(failrate[i].second);
    }
    return answer;
}

