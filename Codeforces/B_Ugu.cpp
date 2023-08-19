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
   string str;cin>>str;
   
   if(n==1){
    cout<<0<<nl;
    return;
   }
     int cnt=0;
     if(str[n-1]=='0'){
         int t=0,t1=0;
         for(int i=n-2;i>=0;i--){
             if(str[i]=='1' && t==0){
                 cnt++;
                 t=1;
             }
             if(str[i]=='0' && t==1){
                 t1=1;
             }
             if(str[i]=='1' && t1==1){
                 cnt+=2;
                 t1=0;
             }
         }
     }
     else{
        int t=0,t1=0;
         for(int i=n-2;i>=0;i--){
             
             if(str[i]=='0'){
                 t1=1;
             }
             if(str[i]=='1' && t1==1){
                 cnt+=2;
                 t1=0;
             }
         }

     }
     cout<<cnt<<nl;
 
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

