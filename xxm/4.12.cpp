#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int t=0;
	cin>>t;
	while(t--){
		int n=0;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a.begin(),a.end());
		cout<<abs(a[0]-a[n-1])<<endl;
		
	}
	
}

