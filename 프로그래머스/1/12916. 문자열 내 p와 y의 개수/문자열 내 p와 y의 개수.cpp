#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int p_cnt = 0;
    int y_cnt = 0;
    
    transform(s.begin(), s.end(), s.begin(), [](unsigned char c) 
              {return tolower(c);}
             );
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'p')
        {
            p_cnt++;  
        }
        else if(s[i] == 'y')
        {
            y_cnt++;
        }
    }
    if(p_cnt != y_cnt)
    {
        answer = false;
        return answer;
    }

    return answer;
}