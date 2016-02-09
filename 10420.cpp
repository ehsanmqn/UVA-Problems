#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

vector<string> vname;
int vcount[10000];

int findmatch(string str,int n)
{
	for(int i=0;i<n;i++)
		if(str==vname[i])
			return	i;
	return -1;
}

void sorting(int n)
{
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(vname[j]<vname[i])
			{
				swap(vname[j],vname[i]);
				swap(vcount[j],vcount[i]);
			}
}

void output(int n)
{
	for(int i=0;i<n;i++)
		cout<<vname[i]<<" "<<vcount[i]<<endl;
}

int main()
{
	freopen("a.in","r",stdin);
	int n,index,cnt=0;
	string str;
	char s[1000];

	cin>>n;
	cin.getline(s,1000);
	for(int i=0;i<n;i++)
	{
		cin>>str;
		index=findmatch(str,cnt);
		if(index>-1)
			vcount[index]++;
		else
		{
			vname.push_back(str);
			vcount[cnt++]++;
		}
		cin.getline(s,1000);
	}
	sorting(cnt);
	output(cnt);
	
	return 0;
}