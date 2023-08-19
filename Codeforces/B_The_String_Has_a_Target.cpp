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

   char a = str[0];

    int t = 1;
    int ind = -1;
    char mn = 'z';
   for(int i=1;i<n;i++){
    if(str[i]!=a){
        t=0;
    }
    if(str[i]<=a && t==0){
        a = str[i];
        ind = i;
    }
   }

 if(ind !=-1){
    cout<<a;
    for(int i=0;i<n;i++){
        if(i==ind){
            continue;
        }
        cout<<str[i];
    }
    cout<<nl;
    return;
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