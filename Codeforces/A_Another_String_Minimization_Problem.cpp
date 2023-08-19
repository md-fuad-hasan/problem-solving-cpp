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
   int n,m;
   cin>>n>>m;
   int a=n,b=m;
   vector<bool>vb(m,false);
   b--;
   while(a--){
    int c;cin>>c;
    c--;
    int ind = min(c,b-c);
    if(!vb[ind]){
        vb[ind]=true;
        continue;
    }
  
    vb[max(c,b-c)]=true;

   }

   string str = "";

    for(int i=0;i<m;i++){
        if(vb[i]){
            str+="A";
        }
        else{
            str+="B";
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