// A/B
#include <iostream>
using namespace std;

int main(){
    double a,b;
    cin>>a>>b;

    double result;
    result = (double)a/(double)b;

    cout.precision(12); // 실수 전체 중 괄호 안 n자리 수까지 표현
    // double a = 1234.5678;
    // std::cout.precision(6);
    // std::cout << a;	// 1234.567 에서 반올림 된 1234.57 이 출력 됨 오

    cout << fixed; //
    cout<<result;
}