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
 

bool isPrime[90000001];
vi v;

void sieve(){
    int n = 90000000;
    isPrime[0]=isPrime[1]=true;
    
    for(int i=2;i*i<=n;i++){
        if(!isPrime[i]){
            for(int j=i*i;j<=n;j+=i){
                isPrime[j]=true;
            }
        }
    }

    for(int i=2;i<=n;i++){
        if(!isPrime[i]){
            v.push_back(i);
        }
    }

    return;
}
 
void solve()
{
   int n;cin>>n;
   cout<<v[n-1]<<nl;
 
   return;
}
 
 
 
int main()
{
 
    FastIO
    int test = 1;
    sieve();
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}