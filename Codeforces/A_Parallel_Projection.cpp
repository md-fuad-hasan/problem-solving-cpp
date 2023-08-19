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
   int w,d,h;cin>>w>>d>>h;
   int a,b,f,g;cin>>a>>b>>f>>g;

   int dif1=a-f;
   int dif2=b-g;

   if(dif1<0){
    dif1=-dif1;
   }
    if(dif2<0){
    dif2=-dif2;
   }

   int ans1= h+g+b+dif1;
   int ans2= h+(d-g)+(d-b)+dif1;
   int ans3 = h+f+a+dif2;
   int ans4= h+(w-f)+(w-a)+dif2;

   cout<<min(min(ans1,ans2),min(ans3,ans4))<<nl;
 
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