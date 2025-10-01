#include <string>
#include <vector>
#include <cmath>


using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int y_h = 0;
    int y_w = 0;
    for(int i = 1; i <= sqrt(yellow); i++)
    {
        if(yellow % i == 0)
        {
            if(i >= (yellow / i))
            {
                y_h = yellow / i;
                y_w = i;
            }
            else
            {
                y_h = i;
                y_w = yellow / i;
            }
            
            if(brown == 2 * (y_h + y_w + 2))
            {
                answer.push_back(y_w + 2);
                answer.push_back(y_h + 2);
                break;
            }
        }
    }
    
    return answer;
}