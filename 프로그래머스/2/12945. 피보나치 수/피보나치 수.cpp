#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(int n) {
    
    unordered_map<int, int> storage;
    storage[0] = 0;
    storage[1] = 1;
    
    for(int i = 2; i <= n; i++)
    {
        storage[i] = (storage[i-1] + storage[i-2]) % 1234567;
    }
    
    return storage[n];
}