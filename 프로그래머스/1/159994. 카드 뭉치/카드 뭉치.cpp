#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "Yes";
    int cnt1 = 0;
    int cnt2 = 0;
    for(auto word : goal){
        if(cards1[cnt1] == word){
            cnt1++;
            continue;
        }
        else if(cards2[cnt2] == word){
            cnt2++;
            continue;
        }
        else{
            answer = "No";
            break;
        }
    }
    return answer;
}