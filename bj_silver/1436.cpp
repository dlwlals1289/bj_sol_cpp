// 영화감독 숌
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin>>n;

    vector <int>v;
    string s;
    v.push_back(666);

    for (int i = 0; i < v.size()&&v.size()<10000; i++)
    {
        // cout<<i<<'\n';
        for (int j = 0; j < 10; j++)
        {
            s = to_string(j)+to_string(v[i]); // 1~9를 이전 원소들의 앞에 붙이기
            v.push_back(stoi(s));
            s = to_string(v[i])+to_string(j); // 1~9를 이전 원소들 뒤에 붙이기
            v.push_back(stoi(s));
        }
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());
        
    }
    cout<<v[n-1]<<'\n';
    

    return 0;
}