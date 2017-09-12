#include <iostream>
#include <string>
#include <cassert>
#include <algorithm>
#include <deque>
#include <list>
#include <vector>
using namespace std;
void aandb(char a[],char b[],int a1,int a2,int b1, int b2,deque<char> list1)
{
	for (int i = 0; i < a2; i++)
	{
		list1.push_back(a[i]);
		std::cout<<a[i]<<endl;
	}
	for (int i = 0; i < b2; i++)
	{
		list1.push_back(b[i]);
		std::cout<<b[i]<<endl;
	}
}
template <typename Container>
Container make(const char s[])
{
	return Container(&s[0], &s[strlen(s)]);
}
void whereadd(vector<char>::iterator where,int length)
{
	char all[10];
	for(int i = 0;i<length;i++)
	{
		all[i]=*(where+i);
	}
	cout<<all<<endl;
}
int main()
{
	std::string alfavit = "abcdefghijklmnop";
	reverse(alfavit.begin(),alfavit.end());
	if(alfavit=="ponmlkjihgfedcba")
	{
		std::cout<<"abcdefghijklmnop"<<endl;
		std::cout<<"perevorot stroki"<<endl;
		std::cout<<"ponmlkjihgfedcba"<<endl;
		system("pause");
	}
	int num[6] = {0,1,2,3,4,5};
	char bild[6] = "adweq";
	char a[5];
	int len = strlen(a);
	a[0] = bild[rand() % num[5]+num[0]];
	a[1] = bild[rand() % num[5]+num[0]];
	a[2] = bild[rand() % num[5]+num[0]];
	a[3] = bild[rand() % num[5]+num[0]];
	a[4] = bild[rand() % num[5]+num[0]];
	char b[5];
	b[0] = bild[rand() % num[5]+num[0]];
	b[1] = bild[rand() % num[5]+num[0]];
	b[2] = bild[rand() % num[5]+num[0]];
	b[3] = bild[rand() % num[5]+num[0]];
	b[4] = bild[rand() % num[5]+num[0]];
	deque<char> list1(10,'x');
	aandb(a,b,0,5,0,5,list1);
	system("pause");
	char s1[] = "http://mytona.com/index.html";
	char s2[] = "https://mytona.com:8080/";
	char s3[] = "mytona.com";
	vector<char> urls = make<vector<char>>(s1);
	vector<char> urls1 = make<vector<char>>(s2);
	vector<char>::iterator where = find(urls.begin(),urls.end(), 'h');
	vector<char>::iterator where1 = find(urls.begin(),urls.end(), 'm');
	vector<char>::iterator where2 = find(urls1.begin(),urls1.end(), '8');
	vector<char>::iterator where3 = find(urls.begin(),urls.end(), 'i');
	assert(*where=='h'&&*(where+1)=='t');
	cout<<"ok"<<endl;
	whereadd(where,4);
	whereadd(where1,10);
	whereadd(where2,4);
	whereadd(where3,10);
	system("pause");
	return 0;
}