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
   vi v(n);
   for(auto &a:v)cin>>a;

   for(int i=0;i<n;i++){
    int m;cin>>m;
    string str;cin>>str;
    for(int j=m-1;j>=0;j--){
        if(str[j]=='D'){
            if(v[i]==9){
                v[i]=0;
            }
            else{
                v[i]++;
            }
        }
        else{
            if(v[i]==0){
                v[i]=9;
            }
            else{
                v[i]--;
            }
        }

       
    }
    
   }

    for(auto &a:v)cout<<a<<' ';
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