#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    vector<int> v(n);
    
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    reverse(v.begin(),v.end());
    auto it = v.begin();
    int in;
    bool flag=false;
    for(int i=0; i<n; i++){
        it++;
        auto f = find(it,v.end(),v[i]);
        if(f!=v.end() && v[i]!=v[i+1]){
            flag = true;
            in = i;
            break;
        }
        if(v[i]<v[i+1]){
            in = i;
            break;
        }
    }




}


int main()
{
    int test=1;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}
