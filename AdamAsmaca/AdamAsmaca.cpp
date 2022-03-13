#include <iostream>
#include <string>
using namespace std;

string oyuncu1, oyuncu2, kelime, gizlikelime;
char tahmin;
int yanlis=0;
int main()
{
	cout<<"..........ADAM ASMACA OYUNU.........."<<endl;
	cout<<"1. oyuncunun ismini girin: "<<endl;
	cin>>oyuncu1;
	cout<<"2. oyuncunun ismini girin: "<<endl;
	cin>>oyuncu2;
	
	cout<<oyuncu1<<" lutfen "<<oyuncu2<<" tahmin edebilmesi icin bir kelime giriniz: "<<endl;
	cin>>kelime;
	
	while(gizlikelime.size()!=kelime.size()) //size'da kelimenin harflerine ulaþýr döngü içerisinde de bu kelimelere soru iþareti atanýr
	{
		gizlikelime.push_back('?');
	}
	
	for(int i=0;i<30;i++)
	{//kelimeyi üstte görmemesi için arada boþluk oluþacak
		cout<<endl;
	}
	
	do
	{
		cout<<"Bulunan harfler: "<<gizlikelime;
		cout<<"Tahmin gir: "<<endl;
		cin>>tahmin;
		
		
		for(int i=0;i<kelime.length();i++)
		{
			if(tahmin==kelime[i])
			{
			    gizlikelime[i]=tahmin;
			    yanlis--;
			}
			
		}
		yanlis++;
		
		if(gizlikelime==kelime)
		{
			cout<<"TEBRIKLER, OYUNU KAZANDINIZ..."<<endl;
			break;
		}
		
		if(yanlis==1)
		{
			cout<<"I"<<endl;
			cout<<endl;
		}
		else if(yanlis==2)
		{
			cout<<"I"<<endl;
			cout<<"I"<<endl;
			cout<<endl;
		}
		else if(yanlis==3)
		{
			cout<<"I"<<endl;
			cout<<"I"<<endl;
			cout<<"I"<<endl;
			cout<<endl;
		}
		else if(yanlis==4)
		{
			cout<<"I"<<endl;
			cout<<"I"<<endl;
			cout<<"I"<<endl;
			cout<<"I"<<endl;
			cout<<endl;
		}
		else if(yanlis==5)
		{
			cout<<"I"<<endl;
			cout<<"I"<<endl;
			cout<<"I"<<endl;
			cout<<"I"<<endl;
			cout<<"I"<<endl;
			cout<<endl;
		}
		else if(yanlis==6)
		{
			cout<<"I---"<<endl;
			cout<<"I"<<endl;
			cout<<"I"<<endl;
			cout<<"I"<<endl;
			cout<<"I"<<endl;
			cout<<endl;
		}
		else if(yanlis==7)
		{
			cout<<"I---"<<endl;
			cout<<"I  O"<<endl;
			cout<<"I"<<endl;
			cout<<"I"<<endl;
			cout<<"I"<<endl;
			cout<<endl;
		}
		else if(yanlis==8)
		{
			cout<<"I---"<<endl;
			cout<<"I  O"<<endl;
			cout<<"I  |"<<endl;
			cout<<"I"<<endl;
			cout<<"I"<<endl;
			cout<<endl;
		}
		else if(yanlis==9)
		{
			cout<<"I---"<<endl;
			cout<<"I  O"<<endl;
			cout<<"I -|"<<endl;
			cout<<"I"<<endl;
			cout<<"I"<<endl;
			cout<<endl;
		}
		else if(yanlis==10)
		{
			cout<<"I---"<<endl;
			cout<<"I  O"<<endl;
			cout<<"I -|-"<<endl;
			cout<<"I"<<endl;
			cout<<"I"<<endl;
			cout<<endl;
		}
		else if(yanlis==11)
		{
			cout<<"I---"<<endl;
			cout<<"I  O"<<endl;
			cout<<"I -|-"<<endl;
			cout<<"I /"<<endl;
			cout<<"I"<<endl;
			cout<<endl;
		}
		else if(yanlis==12)
		{
			cout<<"I---"<<endl;
			cout<<"I  O"<<endl;
			cout<<"I -|-"<<endl;
			cout<<"I / /"<<endl;
			cout<<"I"<<endl;
			cout<<endl;
			
			cout<<"...ASILDINIZ..."<<endl;
			cout<<"OYUNU KAYBETTINIZ..  Kelime: "<<kelime<<endl;
		}		
				
	}while(yanlis<12);
	
    return 0;	
}
