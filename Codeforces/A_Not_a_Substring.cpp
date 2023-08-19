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
   if(n==2 && str=="()"){
    cout<<"NO"<<nl;
    return;
   }
   if(n==2 && str==")("){
    cout<<"YES"<<nl;
    cout<<"(())"<<nl;
    return;
   }
   cout<<"YES"<<nl;
   if((str[0]==')' && str[1]==')') || (str[0]=='(' && str[1]=='(') || (str[0]=='(' && str[1]==')' && str[2]==')')){
    for(int i=0;i<n;i++){
        cout<<'('<<')';
    }
   }
   else{
    for(int i=0;i<n;i++){
        cout<<'(';
    }
    for(int i=0;i<n;i++){
        cout<<')';
    }
   }

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