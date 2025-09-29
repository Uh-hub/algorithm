#include <iostream>
#include<string>
using namespace std;

int solution(string s)
{
    string tmp_s = "";
    for(int i = 0; i < s.length(); i++)
    {
        if(tmp_s.back() == s[i])
        {
            tmp_s.pop_back();
        }
        else
        {
            tmp_s += s[i];
        }
    }
    if(tmp_s.length() == 0)
    {
        return 1;
    }
    return 0;
}