#include <iostream>
using namespace std;

int func(int n, int k)
{
    if(n == 1)
    {
        return ++k;
    }
    else if(n % 2 == 0)
    {
        return func(n/2, k);
    }
    else
    {
        k++;
        return func((n-1) / 2, k);
    }
    
}


int solution(int n)
{
    int k = 0;
    int ans = func(n, k);
    
    return ans;
}