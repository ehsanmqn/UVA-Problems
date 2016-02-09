#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
	//freopen("a.in","r",stdin);
	int n;
	double cnt,perc;
	cin>>n;
	while(n>=0)
	{
		cnt=1.0/n;
		perc=cnt*100*(n-1);
		cout<<perc<<"%"<<endl;
		cin>>n;
	}
	return 0;
}