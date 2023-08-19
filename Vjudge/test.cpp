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
 

void multiply(ll a[3][3], ll b[3][3])
{

    ll mod = 1000000009;
    ll mul[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < 3; k++)
                mul[i][j] += ((a[i][k]%mod)*(b[k][j]%mod))%mod;
                mul[i][j]%=mod;
        }
    }
 
    
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            a[i][j] = mul[i][j];
           
        }
    }
}

ll power(ll F[3][3], ll n)
{
    ll mod = 1000000009;
    ll M[3][3] = {{1,1,1}, {1,0,0}, {0,1,0}};
 
    // Multiply it with initial values i.e with
    // F(0) = 0, F(1) = 1, F(2) = 1
    if (n==1)
        return ((2*F[0][0]%mod) + F[0][1])%mod;
 
    power(F, n/2);
 
    multiply(F, F);
 
    if (n%2 != 0)
        multiply(F, M);
 
    // Multiply it with initial values i.e with
    // F(0) = 0, F(1) = 1, F(2) = 1
    return ((2*F[0][0])%mod + F[0][1])%mod ;
}

ll findNthTerm(int n)
{
 
    ll F[3][3] = {{1,1,1}, {1,0,0}, {0,1,0}} ;
 
    //Base cases
    if(n<=3)
        return n-1;
    
 
    return power(F, n-3);
}
 
void solve()
{
    ll n;
    cin>>n;
    while(n !=0){
    

    cout<<findNthTerm(n)<<nl;
    cin>>n;

    }
 
   return;
}
 
 
 
int main()
{
 
    FastIO
    int test = 1;
   // cin>>test;
    while(test--){
        solve();
    }
    return 0;
}