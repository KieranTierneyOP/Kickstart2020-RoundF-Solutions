#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
const int N = 1001;
ll printNcR(ll n, ll r) { 
  
    long long p = 1, k = 1; 
  
    if (n - r < r) 
        r = n - r; 
  
    if (r != 0) { 
        while (r) { 
            p *= n; 
            k *= r; 
  
            long long m = __gcd(p, k); 
  
            p /= m; 
            k /= m; 
  
            n--; 
            r--; 
        } 
  
    } 
  
    else
        p = 1; 
	return p;  
} 

int main(){
	// ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	ll i,j,r,h;
	ll a[51];
	ll t,n,m,k;
	cin>>t;
	for(h=0;h<t;h++){
		cin>>n>>m>>k;
		for(i=0;i<k;i++)
			cin>>a[i];
		// cout<<"yo1\n";
		long double c1 = 1,c2 = 1,c3;
		for(i=0;i<k;i++){
			c1 = c1*(m-i);
		}
		ll tmp = n;
		for(i=0;i<k;i++){
			c2 *= printNcR(tmp, a[i]);
			tmp -= a[i];
		}
		// cout<<"yo2\n";


		long double r, ans, rolls = n;
		
		for(i=0;i<n;i++){
			cout<<"c2: "<<c2<<" m: "<<m<<"\n";
			c2 = c2/m;
		}

		// cout<<"yo3\n";
		cout<<"yoyoyo: "<<c2<<"\n";

		while(true){
			c3 = printNcR(rolls, n);
			cout<<"rolls: "<<rolls<<" c1: "<<c1<<" c2: "<<c2<<" c3: "<<c3<<"\n";
			r = rolls*c1*c2*c3;

			c2 = c2/m;
			ans += r;
			cout<<"r: "<<r<<"\n";
			if(r<0.00000000001)
				break;
			rolls++;
		}

		cout<<ans<<"\n";


		cout<<"Case #"<<h+1<<": "<<ans<<"\n";
	}


	return 0;
}