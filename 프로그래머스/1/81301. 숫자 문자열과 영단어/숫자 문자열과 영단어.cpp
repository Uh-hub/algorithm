#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string s) {
    int answer = 0;
    int idx = 3; 
    string tmp = "";
    vector<string> nums = {
        "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
    };
    for(int i = 0; i < s.length(); i++){
        if('0' <= s[i] && s[i]<= '9'){//숫자인 경우
            answer *= 10;
            answer += s[i] - '0';
            continue;
        }
        //문자인 경우
        tmp += s[i];//문자열에 추가
        if(find(nums.begin(), nums.end(), tmp) != nums.end()){//일치하는 값 찾은 경우
            answer *= 10;
            answer += find(nums.begin(), nums.end(), tmp) - nums.begin();
            tmp = "";
        }  
        // else{//일치하지 않으면
        //     answer 
        // }
    }
    
    return answer;
}