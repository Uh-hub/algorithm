#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer = {0, 0};
    string rev_s = "";
    int len = 0;
    while(s != "1")
    {
        len = 0;
        rev_s = "";
        
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '1') len++;
            else answer[1]++;
        }
        s = "";

        while(len > 0)
        {
            rev_s+=('0'+ (len%2));
            len /= 2;
        }
        for(int i = rev_s.length() - 1; i >= 0 ; i--)
        {
            s += rev_s[i];
        }
        answer[0]++;
    }
    return answer;
}