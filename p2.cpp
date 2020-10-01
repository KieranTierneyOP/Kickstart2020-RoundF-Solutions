#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
const int N = 1001;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	ll i,j,k,n,r,t,h,s,e;
	cin>>t;
	for(h=0;h<t;h++){
		vector<pair<ll, ll>> v;
		
		cin>>n>>k;


		for(i=0;i<n;i++){		
			cin>>s>>e;
			v.pb({s, e});
		}

		sort(v.begin(), v.end());

		ll start,c;
		ll ans = 0;

		start = 0;

		for(i=0;i<n;i++){
			s = v[i].first;
			e = v[i].second;

			s  = max(start, s);

			if(s>e)
				continue;

			if((e-s+1)%k==0){
				c = (e-s+1)/k;
				if(k==1)
					c--;
			}
			else if((e-s+1)%k==1){
				c = (e-s+1)/k;
			}
			else{
				c = (e-s+1)/k+1;
			}

			// c = max(c, (ll)1);
			// cout<<"i: "<<i<<": c: "<<c<<"\n";

			ans += c;

			start = s+c*k;
			// cout<<"start: "<<start<<"\n";

		
		}

		cout<<"Case #"<<h+1<<": "<<ans<<"\n";
	}

	return 0;
}