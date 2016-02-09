#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;
int mat[3][3];
int con[10]={0};

void initial(int *arr,int *row,int *col)
{
	int cnt=0;
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
		{
			mat[i][j]=arr[cnt];
			row[cnt]=i;
			col[cnt++]=j;
		}
}

void find_index(int val,int &x,int &y)
{
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			if(val==mat[i][j])
			{
				x=i;
				y=j;
				return;
			}
}
void sorting(int *help,int *row,int *col)
{
	for(int i=0;i<8;i++)
		for(int j=i+1;j<9;j++)
			if(help[i]<help[j])
			{
				swap(help[i],help[j]);
				swap(row[i],row[j]);
				swap(col[i],col[j]);
			}
}

bool sumation()
{
	for(int j=0;j<3;j++)
		for(int i=0;i<3;i++)
			con[j]+=mat[i][j];
	int taf=con[1]-con[0];
	for(int i=0;i<3;i++)
		con[i]%=taf;
	for(int i=0;i<2;)
		if(con[i]==con[i+1])	i++;
		else	return false;
	return true;
}
int main()
{
	freopen("a.in","r",stdin);
	int n=3,help[10],row[10],col[10];
	int cnt=0,num,x,y,s,t;
	char str[10];

	while(cin>>help[cnt++])
	{
		bool checkx[3]={0};
		bool checky[3]={0};
		for(cnt;cnt<9;cin>>help[cnt++]);
		initial(help,row,col);
		sorting(help,row,col);
		
		bool sign=sumation();
		for(int i=0,k=0;i<cnt;i++)
		{
			if(!checkx[row[i]] && !checky[col[i]])
			{
				mat[row[i]][col[i]]=-1;
				checkx[row[i]]=1;
				checky[col[i]]=1;
			}
		}
		int k=0,sum=0;
		for(int i=0;i<3;i++)
			for(int j=0;j<3;j++)
			{
				if(mat[i][j]<0)
				{
					if(j==0)	str[k++]='B';
					else if(j==1)	str[k++]='G';
					else if(j==2)	str[k++]='C';
				}
				else	sum+=mat[i][j];
			}
		
		if(sign)
			sort(str,str+3);
		for(int i=0;str[i]>='A' && str[i]<='Z';i++)	cout<<str[i];
		cout<<" "<<sum<<endl;
		cnt=0;
	
	}
	return 0;
}