#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(string dartResult) {
    vector<int> calc;
    
    for(int i = 0; i < dartResult.length(); i++)
    {
        if('0' <= dartResult[i] && dartResult[i] <= '9')
        {
            if(!calc.empty())
            {
                if(dartResult[i] == '0' && calc.back() == 1)
                {
                    calc.back() = 10;
                }
                else{
                calc.push_back(dartResult[i] - '0');
                }
            }
            
            else{
                calc.push_back(dartResult[i] - '0');
            }

        }
        else if(dartResult[i] == 'S') calc.back() = pow(calc.back(), 1);
        else if(dartResult[i] == 'D') calc.back() = pow(calc.back(), 2);
        else if(dartResult[i] == 'T') calc.back() = pow(calc.back(), 3);
        
        else if(dartResult[i] == '*')
        {
            if(calc[calc.size() - 2]) calc[calc.size() -2] *= 2;
            calc.back() *= 2;
        }
        else if(dartResult[i] == '#')
        {
            calc.back() *= -1;
        }
    }
    
    int sum = 0;
    for(int i = 0; i < calc.size(); i++)
    {
        sum += calc[i];
    }

    return sum;
}