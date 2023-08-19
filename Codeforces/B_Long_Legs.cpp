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
   int c,d;cin>>c>>d;
   int a = min(c,d);
   int b = max(c,d);
  
   int sq1 = (int) sqrt(a);
    int res = sq1-1;
    

    res+=a/sq1+(a%sq1);

    int sq2 = (int) sqrt(b);

    res+=sq2-sq1;
   

    res+=b/sq2+(b%sq2);
 


   

   cout<<res<<nl;

 
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