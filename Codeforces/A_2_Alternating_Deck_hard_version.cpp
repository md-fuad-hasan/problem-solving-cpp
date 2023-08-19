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
   int alice=1,alice1=0,bob=0,bob1=0;
   bool a=false;
   int i=1;
   n--;
   while(n>=(2*i+3)){
    if(a){
        alice1+=(2*i+3)/2;
        alice+=(2*i+3)/2+1;
        a=false;
    }
    else{
        bob+=(2*i+3)/2;
        bob1+=(2*i+3)/2+1;
        a=true;
    }
    
    n=n-2*i-3;
    i+=2;
  

   }

   if(a){

    if(n&1){
        alice1+=n/2;
        alice+=n/2+1;
    }
    else{
        alice1+=n/2;
        alice+=n/2;
    }

   }

    
   else{
    if(n&1){
         bob+=n/2;
        bob1+=n/2+1;
    }
    else{
        bob+=n/2;
        bob1+=n/2;
    }
   
   }

   cout<<alice<<' '<<alice1<<' '<<bob<<' '<<bob1<<nl;
 
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