#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int k = 1; k < sqrt(2*n); k++)
    {
        if((2*n) % k == 0)
        {
            int tmp = (2*n) / k;
            if((tmp+1-k) % 2 == 0)
            {
                answer++;
            }
        }
    }
    return answer;
}