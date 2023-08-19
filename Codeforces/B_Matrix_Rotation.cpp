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
   vi v(4);

   for(auto &a:v) cin>>a;
    int maxi = *max_element(v.begin(),v.end());
    int mini = *min_element(v.begin(),v.end());

    if(v[0]==mini && v[3]==maxi){
        cout<<"YES"<<nl;
        return;
    }
    if(v[1]==mini && v[2]==maxi){
        cout<<"YES"<<nl;
        return;
    }
    if(v[2]==mini && v[1]==maxi){
        cout<<"YES"<<nl;
        return;
    }
    if(v[3]==mini && v[0]==maxi){
        cout<<"YES"<<nl;
        return;
    }

    cout<<"NO"<<nl;

 
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