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
 

bool ansFunc(int n, int m){
    if(n==m){
        return true;
    }
    else if(n<m){
        return false;
    }
    else if(n%3){
        return false;
    }
    n = n/3;

    return ansFunc(n,m) | ansFunc(2*n,m);

}

 
void solve()
{
   int n,m;cin>>n>>m;

   bool ans =  ansFunc(n,m);

   ans ? cout<<"YES"<<nl : cout<<"NO"<<nl;
 
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