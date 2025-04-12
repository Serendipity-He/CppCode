#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

ll gcd(ll a, ll b) {
	while (b != 0) {
		ll temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

ll arrGCD(vector<ll> a)
{
	ll asw=a[0];
	for(size_t i=0;i<a.size();i++)
	{
		asw=gcd(asw,a[i]);
	}
	return asw;
}

int main()
{
	ll t=0;
	cin>>t;
	while(t--){
		ll n=0;
		cin>>n;
		vector<ll> a(n);
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a.begin(),a.end());
		ll maxGcd=a[0];
		vector<ll> b;
		for(int i=1;i<n;i++)
		{
			if(a[i]%maxGcd==0){
				b.push_back(a[i]);
			}
		}
		if(b.size()==0){
			cout<<"No"<<endl;
			continue;
		}
		
		if(arrGCD(b)==maxGcd){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
//		cout<<endl<<"---------------------"<<endl;
	}
	
}