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

bool isPrime[1000001];
int arr[1000000];

void sieve(){
    int n = 1000000;
    isPrime[0]=isPrime[1]=true;

    for(int i=2;i*i<=n;i++){
        if(!isPrime[i]){
            for(int j=i*i; j<=n;j+=i){
                isPrime[j]=true;
            }
        }
    }
    int cnt = 0;


    for(int i=1;i<=n;i++){
        if(!isPrime[i]){
            cnt++;
        }
        if(!isPrime[cnt]){
            arr[i] = 1;
        }
        else{
            arr[i]=0;
        }
        
        
    }
    f(i,1,n+1){
        arr[i]+=arr[i-1];
    }

}

void solve()
{
   int l,r;cin>>l>>r;
   ll cnt = arr[r]-arr[l-1];

   
    
    cout<<cnt<<nl;
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