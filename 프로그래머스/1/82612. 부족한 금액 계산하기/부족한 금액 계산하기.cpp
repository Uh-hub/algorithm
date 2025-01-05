using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long cnt_sum = (1+count)*(count/2);
    if(count % 2 != 0){
        cnt_sum += (count/2)+1;
    }
    answer = (long long)cnt_sum*price - money;
    if(answer < 0){
        answer = 0;
    }
    return answer;
}