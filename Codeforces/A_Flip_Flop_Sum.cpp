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
   int s=0;
   bool a=false,b=false,c=false;
   f(i,0,n){
    int d;cin>>d;
    s+=d;
    if(d==-1){
        a=true;
    }
    if(d==-1 && b==true){
        c=true;
    }
    if(d==-1){
        b=true;
    }
    else{
        b=false;
    }
   
   }

   if(c){
    cout<<s+4<<nl;
    return;
   }
   if(a){
    cout<<s<<nl;
    return;
   }
   cout<<s-4<<nl;
 
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