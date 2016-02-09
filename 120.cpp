#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

const int n = 50;
int stk[n],
	sor[n],
	flip[2 * n];
//_______________________________________________________________
void rever(int pos, int size, int *arr)
{
	for(int cnt = pos ; cnt < (size + pos)/2 ; cnt++)
		swap(arr[cnt], arr[size - cnt - 1 + pos]);
}
//_______________________________________________________________
int sortStack(int size)
{
	int elm, sign = 0, ite = 0;

	for(int cnt = 0 ; cnt < size ; cnt++)
	{
		elm = sor[cnt];
		for(int i = cnt ; i < size ; i++)
			if(stk[i] == elm)
			{
				if(i == cnt)
					break;
				if(i == size - 1)
				{
					flip[ite++] = cnt;
					rever(cnt, size, stk);
					break;
				}
				else 
				{
					flip[ite++] = i;
					rever(i, size, stk);
					flip[ite++] = cnt;
					rever(cnt, size, stk);
					break;
				}
			}
	}
	return ite;
}
//_______________________________________________________________
int main()
{
	int cnt, ite, num;
	char ch;
	//freopen("a.in","r",stdin);

	while(scanf("%d%c",&num,&ch) && ch == 32)
	{
		cnt = 0;
		flip[0] = -1;
		sor[cnt] = stk[cnt++] = num;
		
		while(ch != '\n')
		{
			scanf("%d%c",&stk[cnt],&ch);
			sor[cnt] = stk[cnt++];
		}
		for(int i = 0 ; i < cnt ; i++)
			cout<<stk[i]<<" ";
		cout<<endl;

		sort(sor, sor + cnt);
		rever(0, cnt, sor);
		rever(0, cnt, stk);
		ite = sortStack(cnt);

		if(flip[0] != -1)
			for(int i = 0 ; i< ite ; i++)
				cout<<flip[i] + 1<<" ";
		cout<<"0"<<endl;
		
	}
	return 0;
}