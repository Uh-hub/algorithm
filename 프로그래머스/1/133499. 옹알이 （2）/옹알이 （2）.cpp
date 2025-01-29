#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> talkable_w = {"aya", "ye", "woo", "ma"};
    
    for (auto word : babbling) { // babbling 안의 word 하나씩 확인
        string pre_w = ""; 
        bool valid = true; // 단어가 유효한지 여부
        
        while (!word.empty() && valid) { // word 길이가 0이 될 때까지 반복
            bool matched = false;
            
            for (auto w : talkable_w) { // 모든 talkable_w 단어와 비교
                if (word.substr(0, w.length()) == w) { // 앞부분이 일치하는 경우
                    if (w == pre_w) { // 연속된 동일 발음이면 유효하지 않음
                        valid = false;
                        break;
                    }
                    pre_w = w; // 이전 단어 업데이트
                    word = word.substr(w.length()); // 앞부분 제거
                    matched = true;
                    break;
                }
            }
            if (!matched) { // 어떤 단어와도 일치하지 않으면 유효하지 않음
                valid = false;
            }
        }
        
        if (valid && word.empty()) { // 단어가 유효하고 모두 처리되었으면
            answer++;
        }
    }
    
    return answer;
}
