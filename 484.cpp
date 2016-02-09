#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<vector>

using namespace std;

vector<int> v;
int acc[100000];

int findmatch(int num,int n)
{
	for(int i=0;i<n;i++)
		if(v[i]==num)
			return i;
	return -1;
}
int main()
{
	freopen("a.in","r",stdin);
	int num,index,cnt=0;

	while(cin>>num)
	{
		index=findmatch(num,cnt);
		if(index>-1)
			acc[index]++;
		else
		{
			v.push_back(num);
			acc[cnt++]++;
		}
	}
	for(int i=0;i<cnt;i++)
		cout<<v[i]<<" "<<acc[i]<<endl;
	return 0;
}