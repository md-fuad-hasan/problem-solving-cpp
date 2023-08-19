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
   int n,m,a,b,k;cin>>n>>m>>a>>b>>k;

   bool flag1=false, flag2=false,flag3=false,flag4=false;

   for(int i=1;i<=m;i++){
        int temp = abs(a-1)+abs(b-i);
        int tmp = abs(a-n)+abs(b-i);
        if(temp<=k){
            flag2 = true;
        }
        if( tmp<=k){
            flag4 = true;
        }
   }

   for(int i=1;i<=n;i++){
        int temp = abs(a-i)+abs(b-1);
        int tmp = abs(a-i)+abs(b-m);
        if(temp<=k){
            flag1 = true;
            
        }
        if(tmp<=k){
            flag3 = true;
        }
   }

   if(!flag2 && !flag3){
    cout<<n+m-2<<nl;
    return;
   }
   if( !flag1 && !flag4){
    cout<<n+m-2<<nl;
    return;
   }

   cout<<-1<<nl;
 
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