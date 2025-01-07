#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> tri_n;
    int power = 1;
    while(n >= 3){
        tri_n.push_back(n%3);
        n /= 3;
    }
    tri_n.push_back(n);
    for(int i = 0 ; i < tri_n.size(); i++){
        answer += tri_n[tri_n.size()-i-1] * power;
        power *= 3;
    }
    return answer;
}