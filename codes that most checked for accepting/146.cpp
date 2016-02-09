#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

vector<string> v;
char help[1000];
int cnt=1;

void permutation(char *str,int n,int k)
{
	if(k==n-1)
	{
		
		for(int i=0;i<n;i++)	
			help[i]=str[i];
		v.push_back(help);
		cnt++;
	}
	else
	{
		for(int i=k;i<n;i++)
		{
			swap(str[i],str[k]);
			permutation(str,n,k+1);
			swap(str[i],str[k]);
		}
	}
}

int find_match(char *str1)
{
	int size=v.size();
	string s1,s2;
	for(int i=0;i<size;i++)
	{
		if(v[i]==str1)
		{
			while(v[i]==v[i+1])	i++;
			if(i<size-1)
				return i+1;
			else 
				return 0;
		}
	}
}
int main()
{
	//freopen("a.in","r",stdin);
	v.push_back("0");
	char str1[1000];
	string str2,str3;
	int index;

	cin>>str1;
	while(str1[0]!='#')
	{
		int n=strlen(str1);
		permutation(str1,n,0);
		sort(v.begin(),v.end());
		if(index=find_match(str1))
			cout<<v[index]<<endl;
		else
			cout<<"No Successor"<<endl;
		v.clear();
		cin>>str1;
	}
	return 0;
}