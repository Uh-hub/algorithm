#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> board, int h, int w) {
    int answer = 0;
    string ans_color = board[h][w];
    if(h-1 >= 0 && ans_color == board[h-1][w])
    {//위
        answer++;
    }
    if(h+1 < board.size() && ans_color == board[h+1][w])
    {//아래
        answer++;
    }
    if(w-1 >= 0 && ans_color == board[h][w-1])
    {//왼쪽
        answer++;
    }
    if(w+1 < board[0].size() && ans_color == board[h][w+1])
    {//오른쪽
        answer++;
    }
    return answer;
}