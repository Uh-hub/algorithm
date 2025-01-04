#include <string>
#include <vector>

using namespace std;

string solution(string s) {
//     //방법1
//     int idx = s.length()/2;
//     string answer = ((s.length() % 2 == 0) ? s.substr(idx - 1, 2) : string(1, s[idx]));
    
    // 방법2
    string answer = "";
    int idx = s.length()/2;
    if(s.length() % 2 == 0){
        answer = string(1, s[idx - 1]) + string(1, s[idx]);
    }
    else{
        answer = s[idx];
    }
    return answer;
}
