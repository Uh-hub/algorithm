#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string str_n = to_string(n);
    string tmp = "";
    vector<char> num;
    for(int i = 0; i < str_n.length(); i++){
        num.push_back(str_n[i]);
    }
    sort(num.rbegin(), num.rend());
    for(int i = 0; i < num.size(); i++){
        tmp += num[i];
    }
    answer = stoll(tmp);
    return answer;
}