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
 
vector<int> coprime[1001];

void coprimes(){
    for(int i=1;i<=1000;i++){
        for(int j=1;j<=1000;j++){
            if(__gcd(i,j)==1){
                coprime[i].push_back(j);
            }
        }
    }
}


 
void solve()
{
   int n;cin>>n;
   vector<int>arr[1001];
   for(int i=1;i<=n;i++){
    int a;cin>>a;
    arr[a].push_back(i);
   }

   int mx = -1;
   for(int i=1;i<=1000;i++){
    for(auto j:coprime[i]){
        if(!arr[i].empty() && !arr[j].empty()){
            int ans = arr[i].back()+arr[j].back();
            mx = max(mx,ans);
        }
    }
    
   }
   cout<<mx<<nl;
 
   return;
}
 
 
 
int main()
{
 
    FastIO
    int test = 1;
    cin>>test;
    coprimes();
    while(test--){
        solve();
    }
    return 0;
}