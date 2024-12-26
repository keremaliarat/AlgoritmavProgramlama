#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
using namespace std;
int sayiuret(int minimum,int maksimum);
void sayiuret1(int& sonuc, int minimum1, int maksimum1);
int main()
{
int sonuc;
cout<<sayiuret(1,200)<<"\n";
sayiuret1(sonuc,200,400);
cout<<sonuc<<"\n";
	
	
	return 0;
}
int sayiuret(int minimum,int maksimum)
{
	
srand(time(NULL));

return rand()%(maksimum-minimum+1)+minimum;
}
void sayiuret1(int& sonuc , int minimum1, int maksimum1)
{
sonuc=rand()%(maksimum1-minimum1+1)+minimum1;
}
