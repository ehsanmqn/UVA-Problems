#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

void sorting(int *help,char *let,int cnt)
{
	for(int i=0;i<cnt-1;i++)
		for(int j=i+1;j<cnt;j++)
			if(help[j]>help[i])
			{
				swap(help[j],help[i]);
				swap(let[j],let[i]);
			}
}

void initial(int *rep,int *help,char *let,int &cnt)
{
	for(int i=0;i<150;i++)
			if(rep[i]!=0)
			{
				help[cnt]=rep[i];
				let[cnt++]=i;
			}
}

int main()
{
	freopen("a.in","r",stdin);
	char ch,str[1000],let[150];
	int cnt,k,help[150],max;

	while(cin.getline(str,1000))
	{
		cnt=0;
		max=0;
		int rep[150]={0};
		for(int i=0;str[i];i++)	
			if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
				rep[str[i]]++;
		initial(rep,help,let,cnt);
		sorting(help,let,cnt);
		cout<<let[0];
		for(k=1;k<cnt;k++)
			if(help[k]==help[k-1])
				cout<<(ch=let[k]);
			else
				break;
		cout<<" "<<help[0]<<endl;
	}

	return 0;
}