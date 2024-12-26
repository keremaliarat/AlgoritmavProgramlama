#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
void karakterdonustur();
using namespace std;
int main()
{
karakterdonustur();
	
	return 0;
}
void karakterdonustur()
{
	string cumle;
	cout<<"Cumle Giriniz:";
	cin>>cumle;
	for(int i=0;i<cumle.length();i++)
	{
		if(cumle[i]>=65&&cumle[i]<=90)
		cumle[i]=cumle[i]+32;
		else if(cumle[i]>=97&&cumle[i]<=122)
		cumle[i]=cumle[i]-32;
	}
cout<<cumle;
}
