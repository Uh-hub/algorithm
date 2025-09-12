#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string new_id) {
    string answer = "";
    string tmp = "";
    
    for(char word : new_id)
    {//소문자로 변환 후 필요없는 문자 삭제 완료
        if('A' <= word && word <= 'Z')
        {
            word = tolower(word);
            tmp+= word;
        }
        else if(('a' <= word && word <= 'z') || word == '-' || word == '_' || word == '.' || ('0' <= word && word <= '9'))
        {
            tmp+= word;
        }    
    }
    new_id = tmp;
    tmp = "";
    
    //연속된 . 제거
    tmp += new_id[0];
    for(int i = 1; i < new_id.length(); i++)
    {
        if(tmp.back() == '.' && new_id[i] == '.'){continue;}
        else {tmp += new_id[i];}
    }
    //맨 앞 또는 맨 뒤 . 제거
    while(tmp[0] == '.')
    {
        tmp = tmp.substr(1);
    }
    while(tmp.back() == '.')
    {
        tmp = tmp.substr(0, tmp.length()-1);
    }
    //빈문자열이면 a 대입
    if(tmp.length() == 0)
    {
        tmp += 'a';
    }
    if(tmp.length() >= 16)
    {
        tmp = tmp.substr(0, 15);
        while(tmp.back() == '.')
        {
            tmp = tmp.substr(0, tmp.length()-1);
        }
    }
    while(tmp.length() <= 2)
    {
        tmp += tmp.back();
    }
    answer = tmp;
    return answer;
}