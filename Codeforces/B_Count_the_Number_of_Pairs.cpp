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
   int n,k;cin>>n>>k;

   string str;cin>>str;

    int a[26]={0};
    int A[26]={0};

    for(int i=0;i<n;i++){
        if(str[i]>='A' && str[i]<='Z'){
            A[str[i]-'A']++;
        }
        else{
            a[str[i]-'a']++;

        }
    }
    int cnt=0,cn=0;
    for(int i=0;i<26;i++){
        cnt+=min(a[i],A[i]);
        cn+=(abs(a[i]-A[i])/2);
    }
    
    cnt+=min(cn,k);

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