#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(string dartResult) {
    vector<int> calc;
    
    for(int i = 0; i < dartResult.length(); i++)
    {
        //숫자
        if(isdigit(dartResult[i]))
        {
            int num = dartResult[i] - '0';
            if(i + 1 < dartResult.size() && dartResult[i] == '1' && dartResult[i+1] == '0')
            {
                num = 10;
                i++;
            }
            calc.push_back(num);
        }
        //보너스
        else if(dartResult[i] == 'S') calc.back() = pow(calc.back(), 1);
        else if(dartResult[i] == 'D') calc.back() = pow(calc.back(), 2);
        else if(dartResult[i] == 'T') calc.back() = pow(calc.back(), 3);
        
        //옵션
        else if(dartResult[i] == '*')
        {
            if(calc.size() >= 2) calc[calc.size() -2] *= 2;
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