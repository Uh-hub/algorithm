#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(int i = 0; i < s.length(); i++){
        if((s[i] <= 90 && s[i]+n >90)||(s[i] >= 97 && s[i] + n > 122)){
            answer += s[i] + n - 26;
        }
        else if(s[i] == ' '){
            answer += ' ';
        }
        else{
            answer += s[i] + n;
        }

    }
    return answer;
}