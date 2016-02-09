#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	vector<string> v;
	//freopen("a.in","r",stdin);
	int total,n;
	char str[100];
	string str1,help;//str,help;
	bool flag;

	cin>>total;
	for(int cnt=0;cnt<total;cnt++)
	{
		flag=true;
		scanf("%d",&n);
		for(int k=0;k<n;k++)
		{
			scanf("%s",str);
			v.push_back(str);
		}
		sort(v.begin(),v.end());
		for(int i=1;i<v.size();i++)
		{
			str1=v[i-1];
			help=v[i].substr(0,str1.size());
			if(help==str1)
			{
				flag=false;
				cout<<"NO"<<endl;
				break;
			}
		}
		if(flag)	cout<<"YES"<<endl;
		v.clear();
	}

	return 0;
}