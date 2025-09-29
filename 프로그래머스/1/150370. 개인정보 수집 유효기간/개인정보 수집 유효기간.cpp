#include <string>
#include <vector>
#include <unordered_map>


using namespace std;

int YMDToD(string ymd)
{
    int y = stoi(ymd.substr(0, 4));
    int m = stoi(ymd.substr(5, 2));
    int d = stoi(ymd.substr(8, 2));
    
    return ((y * 12) + m) * 28 + d;
}


vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    unordered_map<char, int> term_d;
    for(int i = 0; i < terms.size(); i++)
    {
        term_d[terms[i][0]] = stoi(terms[i].substr(2)) * 28;
    }
    
    for(int j = 0; j < privacies.size(); j++)
    {
        int due_date = YMDToD(privacies[j].substr(0,10)) + term_d[privacies[j].back()] - 1;
        int today_d = YMDToD(today);
        
        if(due_date < today_d)
        {
            answer.push_back(j+1);
        }
    }
    return answer;
}