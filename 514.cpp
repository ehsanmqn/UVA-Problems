#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<stack>
#include<vector>
#include<queue>

using namespace std;

stack<int>	s;
queue<int> q;

bool sign[1000000];
bool train(int *arr,int *ord,int n)
{
	int num,j,index=0,con;
	for(int i=0;i<n;i++)
	{
		num=ord[i];
		if(sign[num])
		{
			for(index;arr[index]!=num;index++)
			{
				s.push(arr[index]);
				sign[arr[index]]=false;
			}
			s.push(arr[index]);
			sign[arr[index++]]=false;
			s.pop();
			//index++;
		}
		else
		{
			bool flag=true;
			while(flag)
				if(s.top()==num)
				{
					s.pop();
					flag=false;
				}
				else
					return false;
				/*{
					sign[s.top()]=true;
					index--;
					arr[index]=s.top();
					s.pop();
				}*/
		}
	}
	if(con=s.empty()) return true;
	else return false;
		
}
int main()
{
	freopen("a.in","r",stdin);
	int arr[1000],ord[1000],cnt=0,n;

	cin>>n;
	while(n)
	{
		memset(sign,0,sizeof(sign));
		cin>>ord[0];
		while(ord[0])
		{
			sign[ord[0]]=true;
			for(cnt=1;cnt<n;cnt++)
			{
				cin>>ord[cnt];
				sign[ord[cnt]]=true;
			}
			int size=s.size();
			for(int i=0;i<size;s.pop(),i++);
			for(int i=0;i<cnt;arr[i]=(i+1),i++);
			if(train(arr,ord,cnt))	cout<<"yes"<<endl;
			else	cout<<"no";
			cout<<endl;
			cin>>ord[0];
		}
		cin>>n;
	}
		
	return 0;
}