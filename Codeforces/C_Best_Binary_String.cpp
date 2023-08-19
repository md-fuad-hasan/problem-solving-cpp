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
   int t=0;
   for(int i=0;i<str.size();i++){
    if(str[i]=='?'){
        if(i-1>=0 && str[i-1] != '?'){
            str[i]=str[i-1];
            t=1;
        }
    }
    else if(str[i-1]=='?' && i-1>=0){
        int j=i;
        t=1;
        while(j>0){
            str[j-1]=str[j];

            j--;
        }
    }
   }
   if(t==0 && str[0]=='?'){
    for(int i=0;i<str.size();i++){
        str[i]='0';
    }
   }
   cout<<str<<nl;
 
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