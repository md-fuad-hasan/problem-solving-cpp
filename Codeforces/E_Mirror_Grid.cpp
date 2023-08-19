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
#define ll long long int
#define f(i,a,n) for(ll i=a;i<n;i++)
#define nl "\n" 
 
 
void solve()
{
   int n;cin>>n;
   int arr[n+1][n+1];
   for(int i=1;i<=n;i++){
    string str;cin>>str;
    for(int j=1;j<=n;j++){
        if(str[j-1]=='1'){
             arr[i][j]=1;
        }
        else {
            arr[i][j] = 0;
        }
    }
   }




//     for(int i=1;i<=n;i++){
    
//     for(int j=1;j<=n;j++){
//        cout<<arr[i][j]<<" ";
//     }
//     cout<<nl;
//    }
    int cnt=0;
   for(int i=1;i<=n/2;i++){
    for(int j=i;j<=n-i;j++){
        int o =0,z=0;

        if(arr[i][j] == 0){
            z++;
        }
        if(arr[i][j] == 1){
            o++;
        }
        if(arr[j][n-i+1] == 0){
            z++;
        }
        if(arr[j][n-i+1] == 1){
            o++;
        }
        if(arr[n-i+1][n-j+1] == 0){
            z++;
        }
        if(arr[n-i+1][n-j+1] == 1){
            o++;
        }
        if(arr[n-j+1][i] == 0){
            z++;
        }
        if(arr[n-j+1][i] == 1){
            o++;
        }

        cnt+=min(o,z);
         
    }
   

   }

   cout<<cnt<<nl;

 
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