#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
using namespace std;
long mevcutnufus=67500;
float artisorani=3;
int yil=7;
long nufus(long mevcutnufus,float artisorani,int yil);
int main()
{
cout<<yil<<" Yil Sonraki Nufus="<<nufus(mevcutnufus,artisorani,yil);
	
	return 0;
}

long nufus(long mevcutnufus,float artisorani,int yil)
{
	for (int i=0;i<yil;i++)
	{
	mevcutnufus=mevcutnufus+mevcutnufus*(artisorani/100);
	}
	return mevcutnufus;	
}
