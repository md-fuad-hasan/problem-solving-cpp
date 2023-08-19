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
   int n,a,b;cin>>n>>a>>b;
   int mini = 20000;
   for(int i=0;i<n;i++){
    int x,y;cin>>x>>y;
    int m,c,h;
    c=a;
    if(y<b){
        m = y+60-b;
        c++;
    }
    else{
        m = y-b;
    }
    if(x<c){
        h = x+24-c;
    }
    else{
        h = x-c;
    }
    int t = h*60+m;
    if(t<mini){
        mini=t;
    }
   }
   cout<<mini/60<<' '<<mini%60<<nl;
 
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