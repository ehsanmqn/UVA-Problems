#include <iostream>
#include <cstdio>
#include <map>
#include <string>
#include <algorithm>
 
using namespace std;

typedef	multimap<string, string>	stringMap;

stringMap smap;
stringMap::iterator pos;
char iDic[100][10];

//_________________________________________________________________
bool isIgnore(char *str, int& count)
{
	for(int i = 0 ; i < count ; i++)
		if(!strcmp(iDic[i], str))
			return true;
	return false;
}
//_________________________________________________________________
const char* wordToUpper(const char str[], int first, int last)
{
	char help[11000];
	strcpy(help, str);
	for(int i = first ; i < last ; i++)
		help[i] -= 32;
	return help;
}
//_________________________________________________________________
void seperateFunction(char *str, int& count)
{
	int ite = 0, cnt;
	char word[15];//, help[15];

	while(1)
	{
		memset(word, 0, 15);
		for(cnt = 0 ; str[ite] != ' ' && str[ite] ; cnt++, ite++)
			word[cnt] = str[ite];

		//strcpy(help, word);
		if(!isIgnore(strlwr(word), count))
			smap.insert(make_pair(word, wordToUpper(strlwr(str), ite - cnt, ite)));
		if(!str[ite])	break;
		else	ite++;
	}
}
//__________________________________________________________________

int main()

{
	char present[11000],
		 word[1000];
	int count = 0;

	//freopen("a.in","r",stdin);
	
	while(cin.getline(word, 1000) && word[0] != ':')
		strcpy(iDic[count++], word);

	while(cin.getline(present, 1000))
		seperateFunction(present, count);

	for(pos = smap.begin() ; pos != smap.end() ; pos++)
		cout<<pos->second<<endl;
	return 0;
}