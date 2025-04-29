#include <iostream>

using namespace std;

int main()
{
    int n;
    long long sum = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        //i의 n보다 작은 모든 배수의 개수만큼 i를 더하면 됨
        for (int j = i; j <= n; j += i) {
            //j는 i부터 시작하며, j += i을 해서 i의 배수만 접근
            sum += i;
        }
    }

    cout << sum;
}
