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
   string str;cin>>str;
   int n = str.size();

   if(n==1){

    if(str[0]=='Y' ||str[0]=='e' ||str[0]=='s'){
        cout<<"YES"<<nl;
        return;
    }
    cout<<"NO"<<nl;
    return;
   }
   for(int i=1;i<n;i++){
    
    if(str[i]=='Y' && str[i-1]!='s'){
        cout<<"NO"<<nl;
        return;
    }
    else if(str[i]=='e' && str[i-1]!='Y'){
        cout<<"NO"<<nl;
        return;
    }
    if(str[i]=='s' && str[i-1]!='e'){
        cout<<"NO"<<nl;
        return;
    }
    if(str[i]=='Y' || str[i]=='e' || str[i]=='s'){
      continue;
    }
    else{
        cout<<"NO"<<nl;
        return;
    }

   }
   cout<<"YES"<<nl;
 
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