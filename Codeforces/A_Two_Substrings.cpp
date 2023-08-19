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
   
     string s; cin >> s;
    bool flag1=false,flag2=false;
    f(i,0,s.size()-1){
        if(s[i]=='A' && s[i+1]=='B' && !flag1){
            flag1=true;
            i+=2;
        }
        if(s[i]=='B' && s[i+1]=='A' && flag1){
            flag2=true;
            i++;
        }
 
    }
 
    if(flag2) {
        cout << "YES";
        return ;
    }
    flag1=false,flag2=false;
    f(i,0,s.size()-1){
        if(s[i]=='B' && s[i+1]=='A' && !flag2){
            flag2=true;
            i+=2;
        }
        if(s[i]=='A' && s[i+1]=='B' && flag2){
            flag1=true;

            i++;
        }
 
    }
 
    if(flag1) {
        cout << "YES";
        return ;
    }
 
    cout << "NO";
 
 
   return;
}
 
 
 
int main()
{
 
    FastIO
    int test = 1;
  //  cin>>test;
    while(test--){
        solve();
    }
    return 0;
}