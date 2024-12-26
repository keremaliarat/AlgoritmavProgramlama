#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
using namespace std;
int minimum,maksimum;
int denklem1(int a,int b);
int main()
{
cout<<"Minimum deger girin\n";
cin>>minimum;
cout<<"Maksimum deger girin\n";
cin>>maksimum;

denklem1(minimum,maksimum);
	
	
	return 0;
}
int denklem1(int a,int b)
{
int i=0;
srand(time(NULL));
string isim="Kerem \n";
for (;i<rand()%(b-a)+a;i++)
cout<<isim;
cout<<i<<" Adet.";
}
