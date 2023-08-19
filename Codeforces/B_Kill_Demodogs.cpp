// #include<bits/stdc++.h>
// using namespace std;
// #define FastIO ios_base::sync_with_stdio(0);cin.tie(NULL);
// #define vi vector<int>
// #define pi pair<int,int>
// #define fi first
// #define sc second
// #define msi map<string,int>
// #define mi map<int,int>
// #define si set<int>
// #define usi unordered_set<int>
// #define ll long long
// #define f(i,a,n) for(ll i=a;i<n;i++)
// #define nl "\n" 
 
//  const int mod = 1e9+7;
 
// void solve()
// {
//    ll n;cin>>n;
//    ll ans = (((n*(n+1)%mod)*(4*n-1)%mod)*337)%mod;
//    cout<<ans<<nl;
 
//    return;
// }
 
 
 
// int main()
// {
 
//     FastIO
//     int test = 1;
//     cin>>test;
//     while(test--){
//         solve();
//     }
//     return 0;
// }


#include <iostream>
#include <vector>

using namespace std;

int countDeltaWaves(int N) {
    vector<vector<int>> dp(N+1, vector<int>(3, 0));
    dp[0][0] = 1;
    for (int i = 1; i <= N; i++) {
        dp[i][0] = dp[i-1][0] + dp[i-1][1];
        dp[i][i] = dp[i-1][i-1] + dp[i-1][i];
        for (int j = 1; j < i; j++) {
            dp[i][j] = dp[i-1][j-1] + dp[i-1][j] + dp[i-1][j+1];
        }
    }
    int total = 0;
    for (int j = 0; j <= N; j++) {
        total += dp[N][j];
    }
    return total;
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    int numDeltaWaves = countDeltaWaves(N);
    cout << "Number of different delta waves of otaku with N = " << N << " is " << numDeltaWaves << endl;
    return 0;
}
