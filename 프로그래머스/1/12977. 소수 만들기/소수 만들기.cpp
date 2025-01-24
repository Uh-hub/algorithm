#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    int sum = 0;
    bool test = true;
    for(int i = 0; i < nums.size()-2; i++){
        for(int j = i+1; j < nums.size()-1; j++){
            for(int k = j + 1; k < nums.size(); k++){
                sum = nums[i] + nums[j] + nums[k];
                test = true;
                for(int t = 2; t <= sqrt(sum); t++){
                   if(sum % t == 0){
                       test = false;
                       break;
                   }
               }
                // cout << sum << " " << test << endl;
                if(test == true){
                    answer++;                    
                }
            }
        }
    }
    
    
    // // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    // cout << "Hello Cpp" << endl;

    return answer;
}