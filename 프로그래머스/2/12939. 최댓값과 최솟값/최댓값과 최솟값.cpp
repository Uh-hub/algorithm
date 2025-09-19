#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> nums;
    stringstream ss(s);
    string s1;
    while(getline(ss, s1, ' '))
    {
        int num = stoi(s1);
        nums.push_back(num);
    }
    sort(nums.begin(), nums.end());
    
    answer = to_string(nums.front()) + " " + to_string(nums.back());
    
    return answer;
}