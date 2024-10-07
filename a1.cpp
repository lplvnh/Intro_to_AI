#include <bits/stdc++.h>
#include<vector>

using namespace std;

using ll=long long;

int main()
{
    int cnt=0,cnt1=0,s=0,s1=0;
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        v.push_back(x);
    }
    for(int x:v){
        if(x%2==0){
            ++cnt;
            s+=x;
        }
        else{
            ++cnt1;
            s1+=x;
        }
    }
    cout<<cnt<<"\n"<<cnt1<<"\n"<<s<<"\n"<<s1<<"\n";
    return 0;
}