#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
const int N = 1001;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	ll i,j,k,n,r,t,h,s,r1,p1,r2,p2,c,r3,p3,r4,p4;
	ll ans;
	cin>>t;
	for(h=0;h<t;h++){

		cin>>s>>r1>>p1>>r2>>p2>>c;

		if(c==1){
			cin>>r3>>p3;
		}
		if(c==2){
			cin>>r3>>p3>>r4>>p4;
		}

		if(c==0){
			if(r2==2 && p2==2)
				ans = -1;
			else if(r1==2 && p1==2)
				ans = 1;
			else
				ans = 2;
		}
		if(c==1){
			if(r1==2 && p1==2)
				ans = 1;
			else if(r3==2 && p3==2)
				ans = 0;
			else if(r2==2 && p2==2)
				ans = -1;
			else
				ans = 1;
		}

		if(c==2){
			ans = 0;
		}
		cout<<"Case #"<<h+1<<": "<<ans<<"\n";
	}

	return 0;
}