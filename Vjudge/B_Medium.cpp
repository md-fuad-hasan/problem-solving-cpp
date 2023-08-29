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
 
 
 
 
int main()
{
 
    FastIO
    int test = 1;
    cin>>test;
    for(int i=1;i<=test;i++){
        int n;cin>>n;
        int ans = 1,temp=1,sum = 1;
        while(n>sum){
            temp = temp*2;
            sum = sum+temp;
            ans++;
        }

        cout<<"Case "<<i<<": "<<ans<<nl;
    }
    return 0;
}