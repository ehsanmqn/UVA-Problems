#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
	int n,sum;
	while(cin>>n)
	{
		sum=(n*n*(n+1)*(n+1))/4;
		cout<<sum<<endl;
	}
	return 0;
}