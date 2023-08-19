#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    if (n==1){
        cout<<2<<endl;
        return;
    }
    if(n%3==0){
        cout<<n/3<<endl;
        return;
    }

    int temp = n%6;
    int ans = 2*(n/6);
    if(temp == 4 || temp == 5){
        ans+=2;
    }
    else ans++;

    cout<<ans<<endl;


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
