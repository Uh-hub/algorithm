#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int num = 1;
    int tmp;
    if(n > m){
        tmp = n;
        n = m;
        m = tmp;
    }
    int a = n;
    int b = m;
    
    while(num != 0){
        num = b % a;
        b = a;
        a = num;
    }
    answer.push_back(b);
    answer.push_back((n*m)/b);
    
    return answer;
}