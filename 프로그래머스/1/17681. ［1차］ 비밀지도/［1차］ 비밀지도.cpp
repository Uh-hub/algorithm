#include <string>
#include <vector>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer(n, "");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr1[i] % 2 == 1 || arr2[i] % 2 == 1)
            {
                answer[i] = "#" + answer[i];
            }
            else
            {
                answer[i] = " " + answer[i];
            }
            arr1[i] /= 2;
            arr2[i] /= 2;
        }
    }
    
    return answer;
}