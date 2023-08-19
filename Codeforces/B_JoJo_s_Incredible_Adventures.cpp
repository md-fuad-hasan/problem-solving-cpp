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
   string str;
   cin>>str;
   int cnt =0;
   int z = 0;
    int mx =0;
    int t = 0;
   for(int i=0;i<str.size();i++){
    if(str[i]=='0'){
        z++;
        t =0;
        cnt =0;
    }
    if(str[i]=='1'){
      
        cnt++;
        mx = max(mx,cnt);
    }
   }
    cnt = 0;
    if(str[0]=='1' && str[str.size()-1]=='1' && z!=0){
        for(int i=0;i<str.size();i++){
            if(str[i]=='0'){
                break;
            }
            cnt++;
        }
        for(int i=str.size()-1;i>=0;i--){
            if(str[i]=='0'){
                break;
            }
            cnt++;
        }
    }

    
    mx = max(mx,cnt);

   if(z==0){
    cout<<(ll)mx*mx<<nl;
    return;
   }

   if(z==str.size()){
    cout<<0<<nl;
    return;
   }
   if(mx ==1){
    cout<<1<<nl;
    return;
   }

   cout<<(ll)((mx+1)/2) * ((mx+2)/2)<<nl;

 
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