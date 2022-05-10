// 단어 정렬
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(string &s1, string &s2){
    if(s1.size()==s2.size())
        return s1<s2;
    else 
        return s1.size() < s2.size();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin>>n; 
    
    vector <string>v(n+1);

    for (int i = 0; i < n; i++)
    {
        cin>>v[i]; // 문자열 입력 받기
    }
    sort(v.begin(), v.end(), comp); // 사전식으로 정렬
    
    for (int i = 0; i < n; i++)
    {
        if (v[i]==v[i-1])
        {
            cout<<"----------"<<v[i]<<'\n';
            continue;
        }
        
        cout<<v[i]<<'\n'; // 출력
    }
    return 0;
}