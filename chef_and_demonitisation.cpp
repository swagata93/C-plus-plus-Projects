#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    ll s,n;
	    cin>>s>>n;
	    ll ans;
	    if(s==n)
	        ans=1;
	    else if(s<n){
	        if(s%2==0)
	            ans=1;
	        else{
                if(s==1) ans=1;
                else ans=2;
	        }
	    }
	    else{
	        ll r=s%n;
	        ans=s/n;
	        if(r>0 && r%2==0)
                ans+=1;
            else if(r>0 && r%2==1){
                if(r==1) ans+=1;
                else ans+=2;
            }
	    }
	    cout<< ans << endl;
	}
	return 0;
}
