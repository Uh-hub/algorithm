#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    vector<int> nums_date = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for(int i = 0; i < a-1; i++){
        b += nums_date[i];
    }
    switch( (b-1) %7){
        case 0:
            answer = "FRI";
            break;
        case 1:
            answer = "SAT";
            break;
        case 2:
            answer = "SUN";
            break;
        case 3:
            answer = "MON";
            break;
        case 4:
            answer = "TUE";
            break;
        case 5:
            answer = "WED";
            break;
        case 6:
            answer = "THU";
            break;
    }
    
    return answer;
}