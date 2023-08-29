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
   int i=0;
   bool arr[10];
   
   
   while(i<=100){
        int t = 1;
        for(int j=0;j<10;j++){
            arr[j] = false;
        }
        int n1 = (n+i)*(n+i);
        int n2 = (n+i)*(n+i)*(n+i);
        string s1 = to_string(n1);
        string s2 = to_string(n2);
        string s3 = s1+s2;


        if(s3.size()!=10){
            i++;
            t= 0;
            continue;
        }
        for(int j=0;j<s3.size();j++){
            int num = s3[j]-'0';
            if(arr[num]){
                t=0;
                break;
            }
            arr[num]=true;
        }
        
        if(t){
            cout<<i<<nl;
            return;
        }

        i++;
        
   }

   cout<<-1<<nl;
 
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