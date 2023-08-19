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
   int k,m,i,n;
   cin>>k;
    i = sqrt(k);
   for( ;;i++){
    if(i*(i+1)/2>=k){
        break;
    }
   }
    n= i-1;
    m = n*(n+1)/2;

   cout<<k-m-1<<' '<<i<<nl;

 
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


