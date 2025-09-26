#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    
    int min_x = 50;
    int min_y = 50;
    int max_x = 0;
    int max_y = 0;
    
    for(int i = 0; i < wallpaper.size(); i++)
    {
        for(int j = 0; j < wallpaper[i].length(); j++)
        {
            if(wallpaper[i][j] == '#')
            {
                //최소
                if(min_x > i) min_x = i;
                if(min_y > j) min_y = j;
                    
                //최대
                if(max_x < i) max_x = i;
                if(max_y < j) max_y = j;
            }
        }
    }
    answer.push_back(min_x);
    answer.push_back(min_y);
    answer.push_back(max_x + 1);
    answer.push_back(max_y + 1);

    return answer;
}