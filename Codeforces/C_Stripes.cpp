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
   vector<string> v;

   for(int i=0;i<8;i++){
    string str;cin>>str;
    v.push_back(str);
   }

   for(int i=0;i<8;i++){
    int t=1;
    for(int j=0;j<8;j++){
        if(v[i][j]!='R'){
            t=0;
            break;
        }

    }
    if(t==1){
        cout<<"R"<<nl;
        return;
    }
   }
   cout<<"B"<<nl;
 
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