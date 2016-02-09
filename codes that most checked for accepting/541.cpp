#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
	//freopen("a.in","r",stdin);
	int matrix[100][100],row[100],col[100];
	int sum,n,help;
	
	for(cin>>n;n!=0;cin>>n)
	{
		sum=0;
		help=0;
		//memset(matrix,0,sizeof(matrix));
		memset(row,0,sizeof(row));
		memset(col,0,sizeof(col));
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>matrix[i][j];
				if(matrix[i][j]==1)
				{
					col[j]+=1;
					help+=1;
				}
			}
			row[i]=help;
			sum+=help;
			help=0;
		}
		if(sum%4==0)
		{
			cout<<"OK"<<endl;
		}
		else if(sum%4==3)
		{
			for(int cnt=0;cnt<n;cnt++)
				if(row[cnt]%2)
					for(int j=0;j<n;j++)
						if(col[j]%2)
						{
							matrix[cnt][j]=1;
							cout<<"Change bit ("<<cnt+1<<","<<j+1<<")\n";
							cnt=n;j=n;
						}
		}
		else if(sum%4==1)
		{
			for(int cnt=0;cnt<n;cnt++)
				if(row[cnt]%2)
					for(int j=0;j<n;j++)
						if(col[j]%2)
						{
							matrix[cnt][j]=0;
							cout<<"Change bit ("<<cnt+1<<","<<j+1<<")\n";
							cnt=n;j=n;
						}
		}
		else	cout<<"Corrupt"<<endl;
	}
	return 0;
}