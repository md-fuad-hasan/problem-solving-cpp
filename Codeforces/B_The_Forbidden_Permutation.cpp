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
   int n,m,d;cin>>n>>m>>d;
   unordered_map<int,int>um;
   int arr[m];
   f(i,1,n+1){
    int a;cin>>a;
    um[a]=i;
   }
   f(i,0,m){
    cin>>arr[i];
   }
   int s=1e9;
   f(i,0,m-1){
    int a=um[arr[i]];
    int b=um[arr[i+1]];
    if(a>=b || b>a+d){
        s=0;break;
    }
   
   
        
        int c=n-b+a-1;
        if(c>=a+d-b+1){
            s= min(s,min(b-a,a+d-b+1));
        }
        else{
            s= min(s,b-a);
        }
 
    

   }


   cout<<s<<nl;

 


 
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