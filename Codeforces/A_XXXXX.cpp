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
#define ll long long int
#define f(i,a,n) for(ll i=a;i<n;i++)
#define nl "\n" 
 
 
void solve()
{
   long long n,x;cin>>n>>x;

   long long s=0,j=-1;
   bool flag = false;
   long long k=-1;
   for(long long i=1;i<=n;i++){
    long long a;cin>>a;
    s+=a;
    if(a%x){
        j=i;
    }
    if(!flag && j>0){
        k=i;
      
        flag=true;
    }
   }

   if(s%x){
    cout<<n<<nl;
    return;
   }
   else if(j==-1 && k==-1){
    cout<<-1<<nl;
    return;
   }
   else if(j==-1){
    cout<<n-k<<nl;
    return;
   }
   else if(k==-1){
    cout<<j-1<<nl;
    return;
   }

    j=n-j+1;
    
   cout<<n - min(j,k)<<nl;

 
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