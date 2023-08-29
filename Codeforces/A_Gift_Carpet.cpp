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
   int n,m;cin>>n>>m;
   vector<string> vs;
   string str;
   for(int i=0;i<n;i++){
    cin>>str;
    vs.push_back(str);
   }

    bool v,ii,k,a;
    v=ii=k=a=false;


   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(vs[j][i]=='v' && !v){
            v=true;
            break;
        }
         if(vs[j][i]=='i' && v && !ii){
            ii=true;
            break;
        }
         if(vs[j][i]=='k' && ii && !k){
            k=true;
            break;
        }
         if(vs[j][i]=='a' && k && !a){
            a=true;
            break;
        }
        
    }
    if(a){
    cout<<"YES"<<nl;
    return;
   }
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