#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string a_cpy = "";
    for(int i = 1; i < food.size(); i++){
        for(int j = 0; j < food[i] / 2; j++){
            answer += to_string(i);
        }
    }
    a_cpy = answer;
    answer += '0';
    
    for(int i = a_cpy.length()-1; i >= 0; i--){
        answer += a_cpy[i];
    }
    return answer;
}