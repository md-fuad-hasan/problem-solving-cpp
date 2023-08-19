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
  
  
   vector<string>v1;
   vector<string>v2;
   vector<string>v3;
   unordered_map<string,int> mp;

   for(int i=0;i<n;i++){
    string str;cin>>str;
    v1.push_back(str);
    mp[v1[i]]++;
   }


    for(int i=0;i<n;i++){
    string str;cin>>str;
    v2.push_back(str);
    mp[v2[i]]++;
   }

   for(int i=0;i<n;i++){
    string str;cin>>str;
    v3.push_back(str);
    mp[v3[i]]++;
   }


   int a=0,b=0,c=0;

   for(int i=0;i<n;i++){
        if(mp[v1[i]]==2){
            a++;
        }
        if(mp[v2[i]]==2){
            b++;
        }
        if(mp[v3[i]]==2){
            c++;
        }
        if(mp[v1[i]]==1){
            a+=3;
        }
        if(mp[v2[i]]==1){
            b+=3;
        }
        if(mp[v3[i]]==1){
            c+=3;
        }
   }

   cout<<a<<' '<<b<<' '<<c<<nl;
 
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