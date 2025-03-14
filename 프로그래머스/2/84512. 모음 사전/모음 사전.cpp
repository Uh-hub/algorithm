#include <string>
#include <vector>

using namespace std;
//cnt 전역변수로 선언
int cnt = 0;

//word와 일치하는 current_word를 찾은 경우, found = true 로 바꾸며 재귀 완전 종료
bool found = false;

vector<string> vowel = { "A", "E", "I", "O", "U" };
//재귀 사용 
void recursion(string current_word, string word)
{
    if (found == true)
    {
        return;
    }
    cnt++;
    if (word == current_word)
    {
        found = true;
        return;
    }
    if (current_word.length() == 5) {
        return;
    }
    for (auto v : vowel)
    {
        recursion(current_word + v, word);
    }
}

int solution(string word) 
{

    recursion("", word);
    return cnt-1;
}