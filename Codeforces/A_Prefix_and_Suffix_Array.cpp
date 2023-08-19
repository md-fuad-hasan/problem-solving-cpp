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
   string a,b;
   int t=0;
   f(i,0,2*n-2){
    string str;cin>>str;
    if(str.size()==n-1){
        if(t==0){
            a=str;
            t=1;
        }
        else{
            b=str;
        }
    }
    
   }
   
    reverse(a.begin(), a.end());

    if(a==b){
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