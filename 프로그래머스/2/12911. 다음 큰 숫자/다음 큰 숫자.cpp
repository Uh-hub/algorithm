#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int cnt = __builtin_popcount(n);
    while(cnt != __builtin_popcount(++n));
    
    return n;
}