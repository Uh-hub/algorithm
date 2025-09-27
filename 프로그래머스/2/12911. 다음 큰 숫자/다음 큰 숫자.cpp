#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int n_cnt = 0;
    int next_n_cnt = 0;
    int tmp_n = n;
    
    while(tmp_n > 0)
        {
            if(tmp_n % 2 == 1) n_cnt++;
            tmp_n /= 2;
        }
    
    while(n_cnt != next_n_cnt)
    {
        n++;
        next_n_cnt = 0;
        tmp_n = n;
        
        while(tmp_n > 0)
        {
            if(tmp_n % 2 == 1) next_n_cnt++;
            tmp_n /= 2;
        }
    }
    answer = n;
    return answer;
}