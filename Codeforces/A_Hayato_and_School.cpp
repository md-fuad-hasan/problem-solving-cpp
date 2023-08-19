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
   vi v(n);
   int odd=0,even=0;
   f(i,0,n){
    cin>>v[i];
    if(v[i]%2){
        odd++;
    }
    else{
        even++;
    }
   }
    int a=0,b=0;
    if(odd>2){
        cout<<"YES"<<nl;
        for(int i=0;i<n;i++){
            if(v[i]%2==1 && a<3){
                cout<<i+1<<" ";
                a++;
            }
        }
        cout<<nl;
        return;
    }
    if(even>1 && odd>0){
        
        cout<<"YES"<<nl;
        for(int i=0;i<n;i++){

            if(v[i]%2==0 && a<2){
                cout<<i+1<<" ";
                a++;
            }
            else if(v[i]%2 && b<1){
                cout<<i+1<<" ";
                b++;
            }
           

        }
        cout<<nl;
        return;
    }
   
    
    cout<<"NO"<<nl;


 
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