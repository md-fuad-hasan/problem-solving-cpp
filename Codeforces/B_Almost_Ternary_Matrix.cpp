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
   int n,m;cin>>n>>m;
   bool flag = true;
   int rn = 1;
   int rz = 2;

   bool flag1 = true;
   int cn=1;
   int cz=2;


   for(int i=1;i<=n;i++){
   if(flag1 && cz==2){
    rn=1;
    rz=2;
    flag = true;

    cn++;
    if(cn==2){
        cz = 0;
        flag1 = false;
    }
   }
   else if(!flag1 && cn==2){
    cz++;

    rn=2;
    rz=1;
    flag = false;
    if(cz==2){
        cn=0;
        flag1 = true;
    }

   }
    
    for(int j=1;j<=m;j++){
        if(flag && rz==2){
            cout<<1<<' ';
            rn++;
            if(rn==2){
               rz=0;
                flag = false;
            }
           
        }
        else if(!flag && rn==2){
            cout<<0<<' ';
            rz++;
            if(rz==2){
               rn=0;
                flag=true;
            }
        }
        
    }
    cout<<nl;
   }
 
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