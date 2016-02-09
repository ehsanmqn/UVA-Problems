#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>

#define int64 long long int

using namespace std;

int64	m, n, 
		w[100][100], 
		path[100][100],
		trend[100][100];

//_________________________________________________________________________
int64 minPath(int i, int j)
{
	int row, col;
	int64 min = 2147483648;
	
	row = i-1;
	col = j-1;
	
	for(int cnt=0 ; cnt < 3 ; cnt++, row = (row + 1)%m)
	{
		if(row == -1)	row = m-1;
		else if(row == m)	row = 0;
	
		if(path[row][col] <= min)	
		{
			if(path[row][col] == min && row < trend[i][j-1])
			{
				min = path[row][col];
				trend[i][j-1] = row;
			}
			else if(path[row][col] != min)
			{
				min = path[row][col];
				trend[i][j-1] = row;
			}
		}
	}

	return min;
}

//_________________________________________________________________________
void rowTrend(int i, int j)
{
	if(i >= 0 && j >= 0)
	{
		rowTrend(trend[i][j], j-1);
		cout<<trend[i][j] + 1<<" ";
	}
}
//_________________________________________________________________________
int main()
{
	int x, y;

	freopen("a.in","r",stdin);

	while(cin>>m>>n)
	{
		//initialization
		for(int i = 0 ; i < m ; i++)
			for(int j = 0 ; j < n ; j++)
				cin>>w[i][j];

		/*if(!flag)
			for(int i = 0 ; i < m ; i++)
				for(int j = 0 ; j < n ; j++)
					w[i][j] += 2147483648;*/
			
		for(int i = 0 ; i < m ; i++)
			path[i][0] = w[i][0];

		//constracting paths
		for(int j = 1 ; j < n ; j++)
			for(int i = 0 ; i < m ; i++)
				path[i][j] = w[i][j] + minPath(i,j);

		//finding minimum path
		int64 min = 2147483648;
		for(int i = 0 ; i < m ; i++)
			if(path[i][n-1] < min)	
			{
				min = path[i][n-1];
				x = i;
			}

		//printing output
		rowTrend(x, n-2);
		cout<<x + 1<<endl;
		cout<<min<<endl;
	}

	return 0;
}