#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;
    int a=0,b=0,c=0,d=0;
    int x,y;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        if(y==0){
            if(x>a){
                a=x;
                continue;
            }
            if(x<b){
                b=x;
                continue;
            }
        }
        if(x==0){
            if(y>c){
                c=y;
                continue;
            }
            if(y<d){
                d=y;
                continue;
            }
        }
    }
    int ans = a+c-b-d;
    ans*=2;
    cout<<ans<<endl;

    return;

}



int main()
{
    int test = 1;
    cin>>test;

    while(test--){
        solve();
    }

    return 0;
}