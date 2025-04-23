#include <string>
#include <vector>
#include <map>

using namespace std;

char max_calc(char a, char b, map<char, int> scores)
{
    if(scores[a] > scores[b])
    {
        return a;
    }
    else if(scores[a] < scores[b])
    {
        return b;
    }
    else
    {
        if(a > b)
        {
            return b;
        }
        else return a;
    }
}

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    map<char, int> scores = {{'R', 0}, {'T', 0}, {'C', 0}, {'F', 0}, {'J', 0}, {'M', 0}, {'A', 0}, {'N', 0}}; 
    //choice에 따라 각 지표에 점수 저장
    for(int i = 0; i < survey.size(); i++)
    {
        if(choices[i] < 4)
        {
            if(choices[i] == 1)
            {
                scores[survey[i][0]] += 3;
            }
            else if(choices[i] == 2)
            {
                scores[survey[i][0]] += 2;
            }
            else
            {
                scores[survey[i][0]] += 1;
            }
            
        }
        else if(choices[i] > 4)
        {
            if(choices[i] == 7)
            {
                scores[survey[i][1]] += 3;
            }
            else if(choices[i] == 6)
            {
                scores[survey[i][1]] += 2;
            }
            else
            {
                scores[survey[i][1]] += 1;
            }
        }
    }
    
    //성격 유형 판별
    answer += max_calc('R', 'T', scores);
    answer += max_calc('C', 'F', scores);
    answer += max_calc('J', 'M', scores);
    answer += max_calc('A', 'N', scores);
    
    return answer;
}