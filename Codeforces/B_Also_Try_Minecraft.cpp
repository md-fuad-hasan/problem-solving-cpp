#include<bits/stdc++.h>
using namespace std;
#define FastIO ios_base::sync_with_stdio(0);cin.tie(NULL);
#define vi vector<long long>
#define pi pair<int,int>
#define fi first
#define sc second
#define msi map<string,int>
#define mi map<int,int>
#define si set<int>
#define usi unordered_set<int>
#define ll long long int
#define f(i,a,n) for(ll i=a;i<n;i++)
#define nl "\n" 
 
 
void solve()
{
   int n,m;cin>>n>>m;
   vi v(n);
   vi vin(n);
   vi vd(n);

   for(auto &a:v)cin>>a;
   vin[0]=v[0];
   long long sum=0;
   for(int i=0;i<n-1;i++){


    if(v[i]>v[i+1]){  

        sum+=v[i]-v[i+1];
    
        vin[i+1]=sum+v[i+1];
        continue;
    }
    vin[i+1]=sum+v[i+1];  

   }

   sum=0;
   vd[n-1]=v[n-1];
   for(int i=n-1;i>0;i--){
    if(v[i]>v[i-1]){
        sum+=v[i]-v[i-1];
        vd[i-1]=sum+v[i-1];
        continue;
    }
    vd[i-1]=sum+v[i-1];

   }


   while(m--){
    int a,b;cin>>a>>b;
    a--;b--;
    if(a<b){
        long long ans = vin[b]-v[b]-vin[a]+v[a];
        cout<<ans<<nl;
        continue;
    }

    cout<<vd[b]-v[b]-vd[a]+v[a]<<nl;

   }
 
   return;
}
 
 
 
int main()
{
 
    FastIO
    int test = 1;
  //  cin>>test;
    while(test--){
        solve();
    }
    return 0;
}