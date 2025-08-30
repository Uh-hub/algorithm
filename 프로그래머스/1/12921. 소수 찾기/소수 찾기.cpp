#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(int n) {
    int answer = 0;
    vector<bool> isPrime(n, true);
    isPrime[0] = false;
    
    for(int i = 2; i < sqrt(n); i++)
    {
        for(int j = 2; j * i <= n; j++)
        {
            isPrime[i*j-1] = false;
        }
    }
    
    for(int i = 0; i < isPrime.size(); i++)
    {
        if(isPrime[i])
        {
            answer++;
        }
    }
    return answer;
}