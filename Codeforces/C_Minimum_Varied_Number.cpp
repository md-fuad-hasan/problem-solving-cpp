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
#define ll long long int
#define f(i,a,n) for(ll i=a;i<n;i++)
#define nl "\n" 
 
 
void solve()
{
   int n;cin>>n;
   vector<int>v;
   int a=9;
   while(n){
    if(a<n){
        v.push_back(a);
        n-=a;
        a--;
    }
    else{
        v.push_back(n);
        n=0;
    }
   }
   int sum = v[0];
   int mul = 1;
   for(int i=1;i<v.size();i++){
    mul*=10;
    sum += v[i]*mul;
   }
   cout<<sum<<nl;
 
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