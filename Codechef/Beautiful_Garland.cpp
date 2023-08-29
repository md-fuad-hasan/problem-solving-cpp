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
    string str;cin>>str;
    int r=0,g = 0;
    int t = 0;
    
    if(str.size()&1){
        cout<<"no"<<nl;
        return;
    }
    
    if(str[0]==str[str.size()-1]){
        t++;
    }
    if(str[0]=='G'){
            g++;
        }
        else{
            r++;
        }
    for(int i=1;i<str.size();i++){
        if(str[i]=='G'){
            g++;
        }
        else{
            r++;
        }
        if(str[i-1]==str[i]){
            t++;
        }
        
    }
    
    if(r!=g || t>2){
        cout<<"no"<<nl;
        return;
    }
    cout<<"yes"<<nl;

 
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