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
   int k,n;cin>>k>>n;

    int m=n-k;
    int p;
    f(i,0,50){
        if((i*(i+1))/2>m){
            break;
        }
        p=i+1;
    }

    
    
    int cnt=0;
    int cn=0;
    for(int i=1;i<=k;i++){
        cn++;
        
        if(cn<=p){
         cnt+=cn;
         cout<<cnt<<' ';
        }
        else{
            cnt++;
            cout<<cnt<<' ';
        }
    }
  
    cout<<nl;

 
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