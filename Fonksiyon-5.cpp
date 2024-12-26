#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
void esdeger(int& seri, float& paralel, int a, int b, int c);
int esdeger1(float& paralel1, int d, int e, int f);
using namespace std;
int main()
{
int seri;
float paralel1,paralel;
int a,b,c;
cout<<"1. Direnci Giriniz:\n";
cin>>a;
cout<<"2. Direnci Giriniz:\n";
cin>>b;
cout<<"3. Direnci Giriniz:\n";
cin>>c;
cout<<"1. fonksiyon:\n";
esdeger(seri,paralel,a,b,c);
cout<<"Seri="<<seri<<"\n";
cout<<"Paralel="<<paralel<<"\n";
cout<<"2. fonksiyon:\n";
cout<<"Seri="<<esdeger1(paralel1,a,b,c)<<"\n";
cout<<"Paralel="<<paralel1;

	
	return 0;
}

void esdeger(int& seri, float& paralel, int a, int b, int c)
{
seri=a+b+c;
paralel=(float)1/((a)+(b)+(c));

}
int esdeger1(float& paralel1, int d, int e, int f)
{
paralel1=(float)1/((d)+(e)+(f));
return d+e+f;
}
