#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>

using namespace std;

class ascii{
public:
	char ch[1000];
	int count[1000];
}input;


int main()
{
	freopen("a.in","r",stdin);
	string str;
	int rep[1000]={0},cnt;

	while(cin>>str)
	{
		cnt=0;
		for(int i=0;str[i];i++)
			rep[str[i]]++;
		for(int i=0;i<100;i++)
			if(rep[i])
			{
				input.ch[cnt]=i;
				input.count[cnt++]=rep[i];
			}
		for(int i=0;i<cnt-1;i++)
			for(int j=i+1;j<cnt;j++)
				if(input.count[i]>input.count[j])
				{
					swap(input.count[i],input.count[j]);
					swap(input.ch[i],input.ch[j]);
				}
		int j,c;
		for(int i=1;i<cnt;i++)
			if(input.count[i]==input.count[i-1])
			{
				for(j=i;input.count[j]==input.count[j+1];j++);
				sort(input.ch+i,input.ch+j);
			}
		for(int i=0;i<cnt;i++)
			cout<<(c=input.ch[i])<<" "<<input.count[i]<<endl;
		cout<<endl;
		memset(input.ch,0,sizeof(input.ch));
		memset(input.count,0,sizeof(input.count));
		memset(rep,0,sizeof(rep));
	}
	return 0;
}