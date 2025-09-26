#include <string>
#include <vector>

using namespace std;

int solution(vector<int> schedules, vector<vector<int>> timelogs, int startday) {
    int answer = 0;
    int sat_idx = (startday == 7) ? 6 : 6 - startday;
    int sun_idx = 7 - startday;
    
    for(int i = 0; i < schedules.size(); i++)
    {
        bool prize = true;
        int hour = schedules[i] / 100;
        int minute = schedules[i] % 100 +10;
        if(minute >= 60)
        {
            minute -= 60;
            hour++;
        }
        int goal_time = hour * 100 + minute;
        
        
        for(int k = 0; k < 7; k++)
        {
            if(k == sat_idx || k == sun_idx) continue;

            if(goal_time < timelogs[i][k])
            {
                prize = false;
                break;
            }
        }
        if(prize)
        {
            answer++;
        }
    }
    
    
    return answer;
}