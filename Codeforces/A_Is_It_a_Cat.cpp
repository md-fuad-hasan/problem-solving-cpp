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
   int t1=0,t2=0,t3=0,t4=0;

   for(int i=0;i<n;i++){
    if((str[i]=='m' || str[i]=='M') && !t2 && !t3 && !t4){
        t1=1;
       
        continue;
    }
   
    if((str[i]=='e' || str[i]=='E') && t1  && !t3 && !t4){
        t2=1;
        continue;
    }
    if((str[i]=='o' || str[i]=='O') && t2 && !t4){
        t3=1;
        
        continue;
    }
    if((str[i]=='w' || str[i]=='W') && t3 ){
        t4=1;
          
    }
    else{
        cout<<"NO"<<nl;
        return;
    }
   }

   if(t4){
    cout<<"YES"<<nl;
    return;
   }
    cout<<"NO"<<nl;
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