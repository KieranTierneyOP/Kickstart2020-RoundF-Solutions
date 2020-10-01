#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
const int N = 100001;
struct abc{
	ll val;
	ll ind;
};
bool comp(const abc &a, const abc &b){
    return a.val < b.val || (a.val ==b.val && a.ind<b.ind);

}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	ll i,j,k,n,r,t,x,h;

	abc a[N];

	cin>>t;
	for(h=0;h<t;h++){

		cin>>n>>x;
		for(i=0;i<n;i++){
			cin>>a[i].val;
			a[i].ind = i;
			if(a[i].val%x==0)
				a[i].val = a[i].val/x;
			else
				a[i].val  =a[i].val/x+1;
		}
		sort(a, a+n, comp);

		cout<<"Case #"<<h+1<<": ";
		for(i=0;i<n;i++)
			cout<<a[i].ind+1<<" ";
		cout<<"\n";
		
	}
	
	return 0;
}