#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    
    vector<vector<char>> keypad = {{'1','4', '7', '*'}, {'2','5','8','0'}, {'3','6','9','#'}};
    
    vector<int> LLoc = {0, 3};
    vector<int> RLoc = {2, 3};
    vector<int> MLoc = {1, 0};
    int idx = 0;
    
    for(int i = 0; i < numbers.size(); i++)
    {
        char num = numbers[i] + '0';
        if(find(keypad[0].begin(), keypad[0].end(), num) != keypad[0].end())
        {
            answer += 'L';
            idx = find(keypad[0].begin(), keypad[0].end(), num) - keypad[0].begin();
            LLoc = {0,idx};
        }
        else if(find(keypad[2].begin(), keypad[2].end(), num) != keypad[2].end())
        {
            answer += 'R';
            idx = find(keypad[2].begin(), keypad[2].end(), num) - keypad[2].begin();
            RLoc = {2, idx};
        }
        else if(find(keypad[1].begin(), keypad[1].end(), num) != keypad[1].end())
        {//중간이라면
            //거리 계산
            idx = find(keypad[1].begin(), keypad[1].end(), num) - keypad[1].begin();
            MLoc = {1, idx};

            int LDistance = (MLoc[0] - LLoc[0] >= 0 ? MLoc[0] - LLoc[0] : LLoc[0] - MLoc[0]) + (MLoc[1] - LLoc[1] >= 0 ? MLoc[1] - LLoc[1] : LLoc[1] - MLoc[1]);
            int RDistnace = (MLoc[0] - RLoc[0] >= 0 ? MLoc[0] - RLoc[0] : RLoc[0] - MLoc[0]) + (MLoc[1] - RLoc[1] >= 0 ? MLoc[1] - RLoc[1] : RLoc[1] - MLoc[1]);
            if(LDistance == RDistnace)
            {
                if(hand == "left")
                {
                    answer += 'L';
                    LLoc = MLoc;
                }
                else
                {
                    answer += 'R';
                    RLoc = MLoc;
                }

            }
            else
            {
                if(LDistance > RDistnace)
                {
                    answer += 'R';
                    RLoc = MLoc;
                }
                else
                {
                    answer += 'L';
                    LLoc = MLoc;
                }
            }
        }
    }
    return answer;
}