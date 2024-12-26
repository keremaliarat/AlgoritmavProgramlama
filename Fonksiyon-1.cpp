#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
using namespace std;
void yaz();
int main()
{
yaz();
	
	
	return 0;
}
void yaz()
{
int i=0;
srand(time(NULL));
string isim="Kerem \n";
for (;i<rand()%(100-1)+1;i++)
cout<<isim;
cout<<i<<" Adet.";
}
