#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min_idx = 0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] < arr[min_idx]){
            min_idx = i;
        }
    }
    arr.erase(arr.begin()+min_idx);
    answer = arr;
    if(arr.empty()){
        answer.push_back(-1);
    }
    return answer;
}