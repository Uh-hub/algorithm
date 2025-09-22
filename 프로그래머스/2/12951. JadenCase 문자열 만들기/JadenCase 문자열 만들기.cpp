#include <string>
#include <vector>
#include <strstream>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    // strstream ss;
    // vector<string> words;
    bool btoupper = false;
    
for(int i = 0; i < s.length(); i++)
{
    if(i == 0)
    {
        if(!(0 <= s[i] && s[i] <= 9))
        {
            s[i] = toupper(s[i]);
        }
    }
    else
    {
        if(s[i] == ' ')
        {
            btoupper = true;
        }
        else
        {
            if(btoupper)
            {
                s[i] = toupper(s[i]);
                btoupper = false;
            }
            else
            {
                s[i] = tolower(s[i]);
            }
        }
    }
}
    answer = s;
    return answer;
}