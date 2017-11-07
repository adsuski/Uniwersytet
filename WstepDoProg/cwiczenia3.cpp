// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<vector>

using namespace std;

void wyswietl(vector<int>liczby)
{
for (int i = 0; i < liczby.size(); i++)
{
cout << liczby[i] << ", ";
}
cout << endl;
}

int suma(vector<int>liczby)
{
	int wynik = 0;
	for (int i = 0; i < liczby.size(); i++)
	{
		wynik += liczby[i];
	}
	return wynik;
}

float srednia(vector<int> liczby)
{
	int wynik = suma(liczby);
	return (float)wynik / liczby.size();
	//Alternatywny sposób podany poniżej:
	//float wynik = suma(liczby);
	//return wynik / liczby.size();
}

int min(vector<int>liczby)
{
	int wynik = liczby[0];
	for (int i = 1; i < liczby.size(); i++)
	{
		if (liczby[i]<wynik)
		{
			wynik = liczby[i];
		}
	}
	return wynik;
}

int max(vector<int>liczby)
{
	int wynik = liczby[0];
	for (int i = 1; i < liczby.size(); i++)
	{
		if (liczby[i]>wynik)
		{
			wynik = liczby[i];
		}
	}
	return wynik;
}

bool czyNalezy(vector<int>liczby,int wartosc)
{
	for (int i = 0; i < liczby.size(); i++)
	{
		if (liczby[i] == wartosc)
		{
			return true;
		}
	}
	return false;
}

int _tmain(int argc, _TCHAR* argv[])
{
	vector<int> liczby;
	liczby.push_back(9);	liczby.push_back(8);	liczby.push_back(1);	liczby.push_back(3);	liczby.push_back(5);
	cout << liczby.size() << endl;
	wyswietl(liczby);
	int wynik = suma(liczby);
	cout << wynik << endl;
	float wyniks = srednia(liczby);
	cout << wyniks<<endl;
	int wynikmin = min(liczby);
	cout << wynikmin << endl;
	int wynikmax = max(liczby);
	cout << wynikmax << endl;
	bool wynikczy = czyNalezy(liczby, 4);
	cout << wynikczy << endl;

	system("pause");
	return 0;
}

