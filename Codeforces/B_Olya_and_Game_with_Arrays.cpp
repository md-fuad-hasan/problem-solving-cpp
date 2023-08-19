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
    
   int n;cin>>n;
   vi v1,v2;
   ll res = 0;
   for(int i=0;i<n;i++){
    int m;cin>>m;
    int mn1=INT_MAX,mn2;

    for(int i=0;i<m;i++){
        int a;cin>>a;
        if(a<=mn1){
            mn2=mn1;
            mn1=a;
        }
        else if(a<mn2){
            mn2=a;
        }
    }
    v1.push_back(mn1);
    v2.push_back(mn2);

    res+=mn2;

   }

   int mn = *min_element(v1.begin(),v1.end());
   int mn_mx = *min_element(v2.begin(),v2.end());

    res = res-mn_mx+mn;

    cout<<res<<nl;

 
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