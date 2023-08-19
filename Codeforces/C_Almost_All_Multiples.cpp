#include<bits/stdc++.h>
using namespace std;
#define FastIO ios_base::sync_with_stdio(0);cin.tie(NULL);
#define vi vector<int>
#define pi pair<int,int>
#define fi first
#define sc second
#define msi map<string,int>
#define mi map<int,int>
#define si set<int>
#define usi unordered_set<int>
#define ll long long
#define f(i,a,n) for(ll i=a;i<n;i++)
#define nl "\n" 
 
 
void solve()
{
   int n,x;cin>>n>>x;

    if(n%x){
        cout<<-1<<nl;
        return;
    }
    cout<<x<<' ';
    for(int i=2;i<n;i++){
        if(i==x){
            for(int j= x*2;j<=n;j+=x){
                if(n%j==0){
                    cout<<j<<' ';
                    x=j;
                    break;
                }
            }
        }
        else{
            cout<<i<<' ';
        }
    }
    cout<<1<<nl;

 
   return;
}
 
 
 
int main()
{
 
    FastIO
    int test = 1;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}