#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
void sifrekontrol();
using namespace std;
int main()
{
sifrekontrol();
	
	return 0;
}
void sifrekontrol()
{
string sifre;
cout<<"Sifre Girin\n";
cin>>sifre;
int kucukharf= 0;
int buyukharf= 0; 
    for (int i=0;i<sifre.length();i++)
{
        
        if (sifre[i] >= 97 && sifre[i] <= 122) {
            kucukharf++;
        }
        
        else if (sifre[i] >= 65 && sifre[i] <= 90) {
            buyukharf++;
        }
    }
if(sifre.length()>8 && buyukharf>0 && kucukharf>0)
{
	cout<<"girdiginiz sifre kurallara uygun";
}
else
cout<<"Girdiginiz sifre kurallara uygun degil";

}

