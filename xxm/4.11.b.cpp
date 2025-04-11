#include<iostream>
#include<vector> 
using namespace std;

int maxCountRow(vector<string>& c,vector<vector<string>> v,int n,int m ) {
	int count=0;
	int maxCount=0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if(c[j]==v[i][j]){
				count++;
			}
		}
		if(count>maxCount){
			maxCount=count;
		}
		count=0;
	}
	return maxCount;
}

bool compare(vector<string>& c,vector<vector<string>> v,int n,int m){
	for(int j=0;j<n;j++)
	{
		bool find=false;
		for(int i=0;i<m;i++)
		{
			if(c[j]==v[i][j]){
				find=true;
				break;
			}
		}
		if(!find){
			return false;
		}
		
	}
	return true;
}

int main()
{
	int t=0;
	cin>>t;
	while (t--)
	{
		int n=0;
		cin>>n;//数组c的长度
		int m=0;
		cin>>m;//神经网络数量
		vector<string> c(n);//目标数组c
		for (int i = 0; i < n; i++){
			cin>>c[i];
		}
		
		vector<vector<string>> v(m,vector<string>(n));//神经网络
		
		for(int i=0;i<m;i++){
			for (int j = 0; j < n; j++) 
			{
				cin>>v[i][j];
			}
		}
		if (!compare(c,v,n,m))
		{
			cout<<-1<<endl;
		}
		else{
			int maxCount=maxCountRow(c,v,n,m);
			int diff=n-maxCount;//最大列中不同的元素个数
			int asw=n+diff*2;
			cout<<asw<<endl;
			
		}
	}
	
	
	
}
