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
   int pos = 0;
   int neg = 0;
   int sum = 1;
   int temp;
   f(i,0,n){
    int a;cin>>a;
    
    (a>0) ? pos++ : neg++;

   }
   f(i,0,n){
    if(sum<=pos){
        cout<<sum<<' ';
        sum++;
        temp = pos;
    }
    
    else{
        
        temp--;
        cout<<temp<<' ';
    }
   }
   cout<<nl;
    sum=1;
   f(i,0,n){
    if(neg>0){
        cout<<1<<' '<<0<<' ';
        neg--;pos--;i++;
    }
    else{
        if(sum<=pos){
            cout<<sum<<' ';
            sum++;
        }

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