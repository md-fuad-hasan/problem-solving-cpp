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

   vi v(n);
   for(auto &a:v)cin>>a;

   sort(v.begin(),v.end(), greater<int>());

   vi store;
   int sum=0;

   vi far;

   f(i,0,n){
    int j=i;
    while(sum==v[j]){
        far.push_back(v[j]);
        if(j==n-1){
            break;
        }
        j++;
    }
    i=j;
    if(sum!=v[i]){
         sum+=v[i];
        store.push_back(v[i]);
    }
   
   
   }
   for(int i=0;i<far.size();i++){
    if(sum==far[i]){
        cout<<"NO"<<nl;
        return;
    }
    store.push_back(far[i]);
   }

   cout<<"YES"<<nl;
   for(auto &b:store)cout<<b<<' ';
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