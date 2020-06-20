#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vl vector<ll>
#define inp(x)  for(auto &t:x) cin>>t;
#define itr     vector<int>::iterator
#define debug(a) cout << #a << "=" << a << ' '<<endl;
#define out(x)  for(auto &t:x) cout<<t<<" "; cout<<endl;
#define ff first
#define ss second
#define pb push_back
#define initialize(a,v)  for(int i=0;i<a.size();++i) a[i]=v;

ll expo(ll a,ll b)
{
	ll res=1;
	while(b>0)
	{
		if(b&1)
		res*=a;
		a*=a;
		b>>=1;
	}

	return res;
}





void solve()
{
	ll n;
	cin>>n;
	ll k=expo(n,2);
	cout<<(k-n)/2<<endl;


}

int main()
{

	ios_base::sync_with_stdio(false);cin.tie(NULL);

	int t=1;
	cin>>t;
	while(t--)
	{
		solve();
	}
}
