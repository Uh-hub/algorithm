#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    int sets = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '(')
        {
            sets++;
        }
        else
        {
            if(sets > 0)
            {
                sets--;
            }
            else
            {
                return false;
            }
        }
    }
    if(sets > 0)
    {
        return false;
    }

    return true;
}