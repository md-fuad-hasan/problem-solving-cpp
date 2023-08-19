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
   ll n,c,q;cin>>n>>c>>q;
   string str;cin>>str;
   vector <string> vs;
   vs.push_back(str);
   c--;
   while(c--){
    ll l,r;cin>>l>>r;
     r = r-l+1;
    vs.push_back(str.substr(l-1,r));
   }

    int len =0;
   for(int i=0;i<vs.size();i++){
        cout<<vs[i]<<nl;
    }
//    while(q--){
//     ll a;
//     cin>>a;
//     int len =0;
//     for(int i=0;i<vs.size();i++){
//         if(len+vs[i].length()>a){
//             a=a-len;
//         //     cout<<vs[i][a-1]<<nl;
//             break;
//         }
//         len+=vs[i].length();
//     }
    
//    }
 
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