#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    while(s.length() != 0){
        int x = s[0];
        int x_yes = 0;
        int x_no = 0;
        bool m_end = false;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == x){//x가 첫번째 값일 때 s[i]와 같다면 x_yes++
                x_yes++;
            }
            else{//같지 않다면 x_no++
                x_no++;
            }
            if(x_yes == x_no){//같으면 앞부분 제거하고 중간에 끝났음을 표시(true로)
                s = s.substr(i+1);
                answer++;
                m_end = true;
                break;
            }
        }
        if(m_end == false){//중간에 끝난게 아니라면 끝까지 다 봤는데 길이가 안맞는 것으로 ans++하고 break
            answer++;
            break;
        }
    }
    return answer;
}