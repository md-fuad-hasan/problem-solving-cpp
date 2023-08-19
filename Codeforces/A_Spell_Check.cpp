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
   int T=0,j=0,m=0,u=0,r=0,o=0;

    for(int i=0;i<str.size();i++){
        if(str[i]=='T') T++;
        else if(str[i]=='i') j++;
        else if(str[i]=='m') m++;
        else if(str[i]=='u') u++;
        else if(str[i]=='r') r++;
        else o++;
    }
    if(T==1 && m==1 && j==1 && u==1 && r==1 && o==0){
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