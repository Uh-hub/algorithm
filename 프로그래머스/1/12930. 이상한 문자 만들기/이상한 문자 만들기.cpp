#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int idx = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] != ' '){
            //만약 공백이 아닌 경우
            if(idx % 2 == 0 && s[i] >= 97){
                //짝수인데 소문자였을 경우
                answer += (s[i] - 32);
                idx++;
                continue;
            }else if(idx % 2 != 0 && s[i] <= 90){
                //홀수인데 대문자인 경우
                answer += (s[i] + 32);
                idx++;
                continue;
            }
            
        }
        //공백인 경우
        else{
            answer += s[i];
            idx = 0;
            continue;
        }
        //나머지의 경우 그대로 저장
        answer += s[i];
        idx++;
    }
    return answer;
}