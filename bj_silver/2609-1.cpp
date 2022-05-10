// 최대공약수 최소공배수 함수 이용 버전
#include <iostream>
#include <numeric>
#include <math.h>
#include <algorithm>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n[2];
    for (int i = 0; i < 2; i++)
    {
        cin>>n[i];
    }
    cout<<gcd(24, 18)<<'\n'<<lcm(n[0], n[1])<<'\n';
    return 0;
}