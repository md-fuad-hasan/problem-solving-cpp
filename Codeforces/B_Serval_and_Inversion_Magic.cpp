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
   string str;cin>>str;
   int a=(n-2)/2;
   int t1=0,t2=0;
   for(int i=a;i>=0;i--){
    if(str[i]!=str[n-1-i]){
        t1=1;
        if(t2==1){
            cout<<"No"<<nl;
            return;
        }
    }
    else if(t1==1){
        t2=1;
    }
   }

   cout<<"Yes"<<nl;
 
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