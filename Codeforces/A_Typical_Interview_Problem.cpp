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

   string s = "FBFFBFFBFBFFBFFBFBFF";


//     int k=0;
//    for(int i=0;i<s.size();i++){
//     for(int j=i;j<s.size();j++){
//         if(i+k==s.size()){
//             cout<<"NO"<<nl;
           
//             return;
//         }
//         if(s[i+k]!=str[k]){
           
//             k=0;
           
//             break;
            
//         }
//         else{
            
//             k++;
            
//         }

//         if(k==str.size()){
//             cout<<"YES"<<nl;
//             return;
//         }
//     }
//    }

//    cout<<"NO"<<nl;

 (s.find(str) != string::npos) ? cout<<"YES"<<nl : cout<<"NO"<<nl;
   
 
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