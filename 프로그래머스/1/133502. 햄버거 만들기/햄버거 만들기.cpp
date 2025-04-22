#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int> stack;
    
    for(int i = 0; i < ingredient.size(); i++)
    {
        //ingredient에 있는 값 stack에 삽입
        stack.push_back(ingredient[i]);
        //stack의 크기가 4이상이 된 경우 
        if(stack.size() >= 4)
        {
            int n = stack.size();
            //뒤에서부터 1,2,3,1 이 맞는지 확인
            //맞다면 pop_back하고 answer++ 진행
            if(stack[n-4] == 1 && stack[n-3] == 2 && stack[n-2] == 3 && stack[n-1] == 1)
            {
                stack.pop_back();
                stack.pop_back();
                stack.pop_back();
                stack.pop_back();
                answer++;
            }
        }
    }
    return answer;
}