#include <string>
#include <vector>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    vector<int> cnt_X(10, 0);
    vector<int> cnt_Y(10, 0);
    bool empty = true;
    
    for(int i = 0; i < X.length(); i++){//X에서 0~9까지 각각의 개수 세서 저장
        cnt_X[X[i] - '0']++; 
    }
    for(int i = 0; i < Y.length(); i++){//Y에서 0~9까지 각각의 개수 세서 저장
        cnt_Y[Y[i] - '0']++; 
    }
    for(int i = cnt_X.size()-1; i >= 0; i--){//X, Y 중 하나라도 같은 값이 있는지 확인용
        if(cnt_X[i] != 0 && cnt_Y[i] != 0){
            empty = false;
            break;
        }
    }
    if(empty){
        answer += "-1";
    }
    else{//같은 수가 하나라도 있는 경우
        for(int i = cnt_X.size()-1; i >= 0; i--){
            int min_xy = min(cnt_X[i], cnt_Y[i]);
            for(int j = 1; j <= min_xy; j++){
                answer += to_string(i);
            }
        }
        if(answer[0] == '0'){
            answer = '0';
        }
    }
    return answer;
}