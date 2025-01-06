#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = false;
    if(s.length() == 4 || s.length()==6){
        answer = true;
        for(int i = 0; i < s.length(); i++){
            if(s[i] < 48 || s[i] > 57){
                answer = false;
            }
        }
    }
    return answer;
}