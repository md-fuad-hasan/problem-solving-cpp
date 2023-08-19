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
    bool t = true;
    int cnt =0;
    if(str.size()==1 && str[0]=='^'){
        cout<<1<<nl;
        return;
    }
   for(int i=0;i<str.size();i++){
    if(str[i]=='_'){
        if(t) cnt++;

        t = true;
    }
    else{
        t = false;
    }
   }
   if(t)cnt++;

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