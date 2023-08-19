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
 

 bool solve(vector<vector<int>>& coordinates) {

        if(coordinates[1][0]-coordinates[0][0] !=0){
            double  m = (double)(coordinates[1][1]-coordinates[0][1])/(coordinates[1][0]-coordinates[0][0]);
            for(int i=1;i<coordinates.size()-1;i++){
                if(coordinates[i+1][0]-coordinates[i][0]==0){
                    return false;
                }
                double  t = (double)(coordinates[i+1][1]-coordinates[i][1])/(coordinates[i+1][0]-coordinates[i][0]);
                if(m!=t){
                    return false;
                }
                
            }
            cout<<"YES"<<nl;

            return true;

        }
         for(int i=1;i<coordinates.size()-1;i++){
             if(coordinates[i+1][0]!=coordinates[i][0]){
                 return false;
             }
         }

         return true;

       
        
    }
 

 
 
int main()
{
 
    FastIO
        int n;cin>>n;
        vector<vector<int>> v(n);

        for(int i=0;i<n;i++){
            int a,b;cin>>a>>b;
            v[i].push_back(a);
            v[i].push_back(b);
        }

        
    
        cout<<solve(v)<<nl;

    return 0;
}