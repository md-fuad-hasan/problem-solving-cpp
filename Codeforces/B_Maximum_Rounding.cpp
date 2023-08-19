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
   int n = str.size();
   int pos=-1;
   int carry = 0;
   for(int i=n-1;i>=0;i--){
        int temp = str[i]-'0'+0+carry;
        if(temp>=5){
            pos = i;
            carry = 1;

        }else{
            carry = 0;
        }
   }
    if(pos==-1){
        cout<<str<<nl;
        return;
    }
    if(pos == 0){
        cout<<1;
        for(int i=0;i<n;i++){
            cout<<0;
        }
        cout<<nl;
        return;
    }
    pos--;
    for(int i=0;i<n;i++){
        if(i==pos){
            cout<<str[i]-'0'+1;
        }else if(i>pos){
            cout<<0;
        }
        else{
            cout<<str[i];
        }
    }
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