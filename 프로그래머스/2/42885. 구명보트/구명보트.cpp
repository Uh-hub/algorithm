#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int front_p = 0;
    int back_p = people.size() - 1;
    sort(people.begin(), people.end());
    for(int i = 0; i < people.size(); i++)
    {
        if(front_p == back_p)
        {
            answer++;
            break;
        }
        else if(front_p > back_p)
        {
            break;
        }
        
        if(people[front_p] + people[back_p] <= limit)
        {//가장 큰 사람과 가장 작은 사람이 오케이된 경우
            answer++;
            front_p++;
            back_p--;
        }
        else
        {//제한 초과한 경우 가장 큰 사람만 우선 태워 보내기
            answer++;
            back_p--;
        }
    }
    
    return answer;
}