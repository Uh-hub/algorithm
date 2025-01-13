#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    vector<int> stck;
    for(int i = 0 ; i < s.length(); i++){
        if(find(stck.rbegin(), stck.rend(), s[i]) != stck.rend()){
            //앞에 있다면
            answer.push_back(find(stck.rbegin(), stck.rend(), s[i])-stck.rbegin() + 1);
        }
        else{
            //없다면
            answer.push_back(-1);
        }
        stck.push_back(s[i]);
    }
    return answer;
}