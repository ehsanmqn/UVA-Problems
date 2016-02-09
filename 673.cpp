#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<stack>

using namespace std;

stack<char> s;

int main()
{
	freopen("a.in","r",stdin);
	int n;
	char str[1000];
	bool flag;

	cin>>n;
	cin.getline(str,1000);
	for(int cnt=0;cnt<n;cnt++)
	{
		flag=true;
		cin.getline(str,1000);
		if(!str[0])
			cout<<"Yes"<<endl;
		else
		{
			for(int i=0;str[i] && flag;i++)
			{
				switch(str[i])
				{
				case '(':
					s.push(str[i]);
					break;
				case ')':
					if(s.size() && s.top()=='(')
						s.pop();
					else{	cout<<"No"<<endl;
					flag=false;}
					break;
				case '[':
					s.push(str[i]);
					break;
				case ']':
					if(s.size() && s.top()=='[')
						s.pop();
					else{	cout<<"No"<<endl;
					flag=false;}
					break;
				}

				/*if(str[i]=='(' || str[i]=='[')
					s.push(str[i]);
				else if(str[i]==')' || str[i]==']')
					if(s.size())
						s.pop();
					else
					{		
						flag=false;
						cout<<"No"<<endl;
					}
					//break;*/
			}
			if(flag && !s.size())
				cout<<"Yes"<<endl;
		}
	}
	return 0;
}