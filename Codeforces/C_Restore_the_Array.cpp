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
   int m;cin>>m;
   int n = m-1;
   int arr[n];

   for(auto &a:arr)cin>>a;

   int mn = *min_element(arr,arr+n);
   int mx = *max_element(arr,arr+n);
   int ind;
    for(int i=0;i<n;i++){
        if(arr[i]==mn){
            ind = i;
            break;
        }
    }
  

    bool c = false,d=false;
   for(int i=0;i<=n;i++){

    if(i==ind && !c){
        cout<<mn<<' ';
        c=true;
        continue;
    }

    if(c){
        if(arr[i-1]==mx && i!=n){
            arr[i-1]=arr[i];
        }
        cout<<arr[i-1]<< ' ';

    }
    else{
        if(arr[0]!=mx && arr[n-1]!=mx && i<n && arr[i]==mx && arr[i+1]==mx){
            if(arr[i-1]!=mn){
                arr[i]=arr[i-1];
            }
            else{

                arr[i]=arr[i-1];
            }
        }
        cout<<arr[i]<<' ';
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