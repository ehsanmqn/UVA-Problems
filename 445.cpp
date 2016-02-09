#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<algorithm>

using namespace std;

int main()
{
	//freopen("a.in","r",stdin);
	char str[1000000],ch;
	int cnt,sum,index;

	while(ch=cin.get())
	{
		if(ch<0)
			break;
		if(ch==10 || ch==32)
		{
			cout<<endl;
			continue;
		}
		else
			str[0]=ch;
		cin>>(str+1);
		str[index=strlen(str)]=cin.get();
		str[index+1]='\0';
		sum=0;
		int k=strlen(str);
		for(int i=0;i<strlen(str);i++)
		{
			if(str[i]>='0' && str[i]<='9')
				sum+=(str[i]-'0');
			else if(str[i]>='A' && str[i]<='Z')
			{
				for(int k=0;k<sum;k++)
					cout<<str[i];
				sum=0;
			}
			else if(str[i]=='b')
			{
				for(int k=0;k<sum;k++)
					cout<<" ";
				sum=0;
			}
			else if(str[i]=='!' || str[i]==10)
				cout<<endl;
			else if(str[i]=='*')
			{
				for(int k=0;k<sum;k++)
					cout<<str[i];
				sum=0;
			}
		}
		//if(ch==10)	cout<<endl;
	}
	return 0;
}