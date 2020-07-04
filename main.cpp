#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector< pair<ll, ll> > v(n);
        for(int i=0; i<n; i++){
            ll x,y;
            cin>>x>>y;
            v[i].first=x;
            v[i].second=y;
        }
        int chefpoints=0, montypoints=0;
        for(int i=0; i<n; i++){
            ll x=v[i].first;
            //cout<< v[i].first << " ";
            ll y=v[i].second;
            //cout<< v[i].second << " ";
            int a=0, b=0;
            while(x!=0){
                a+=x%10; x/=10;
            }
            //cout<< a << " ";
            while(y!=0){
                b+=y%10; y/=10;
            }
            //cout<< b << " ";
            if(a>b) chefpoints++;
            else if(b>a) montypoints++;
            else{
                chefpoints++; montypoints++;
            }
        }
        if(chefpoints>montypoints) cout<< 0 << " " << chefpoints << "\n";
        else if(montypoints>chefpoints) cout<< 1 << " " << montypoints << "\n";
        else cout<< 2 << " " << chefpoints << "\n";
    }
    return 0;
}
