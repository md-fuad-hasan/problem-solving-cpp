#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    int arr[n];
    
    if(n%2){
        cout<<1<<' ';
        for(int i=2;i<=n;i+=2){
            cout<<i+1<<' '<<i<<' ';
        }
        cout<<endl;
    }
    else{
        for(int i=1;i<=n;i+=2){
            cout<<i+1<<' '<<i<<' ';
        }
        cout<<endl;
    }
   
}


int main()
{
    int test=1;
    cin>>test;
    while(test--){
        solve();
    }
}
