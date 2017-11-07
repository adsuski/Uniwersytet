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
	//Alternatywny sposób podany poni¿ej:
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

bool czy_nalezy(vector<int>liczby, int szukana)
{
	for (int i = 0; i < liczby.size(); i++)
	{
		if (liczby[i] == szukana)
		{
			return true;
		}
	}
	return false;
}

bool czy_zawiera(vector<int>zbior, vector<int>podzbior)
{
	for (int i = 0; i < podzbior.size(); i++)
	{
		if (!czy_nalezy(zbior, podzbior[i]))//Robie tylko wtedy gdy czegoœ nie ma
		{
			return false;
		}
	}
	return true;
}

vector<int> unikalnosc(vector<int>zbior)
{
	vector<int>wynik;
	for (int i = 0; i < zbior.size(); i++)
	{
		if (!czy_nalezy(wynik, zbior[i]))
		{
			wynik.push_back(zbior[i]);
		}
	}
	return wynik;
}

int _tmain(int argc, _TCHAR* argv[])
{
	vector<int> liczby;
	liczby.push_back(9); liczby.push_back(8); liczby.push_back(1); liczby.push_back(3); liczby.push_back(5); liczby.push_back(8); liczby.push_back(5);
	vector<int> podliczby;
	podliczby.push_back(8); podliczby.push_back(3); podliczby.push_back(1);
	cout <<"Ile jest liczb w zbiorze: "<< liczby.size() << endl;
	cout << "Jakie sa liczby w zbiorze: "; wyswietl(liczby);
	int wynik = suma(liczby);
	cout <<"Suma: "<< wynik << endl;
	float wynik_s = srednia(liczby);
	cout <<"Srednia: "<< wynik_s << endl;
	int wynik_min = min(liczby);
	cout <<"Najmniejsza liczba: "<< wynik_min << endl;
	int wynik_max = max(liczby);
	cout <<"Najwieksza liczba: "<< wynik_max << endl;
	bool wynik_czy_n = czy_nalezy(liczby, 4);
	cout <<"Czy liczba 4 wystêpuje w zbiorze: "<< wynik_czy_n << endl;
	bool wynik_czy_z = czy_zawiera(liczby, podliczby);
	cout <<"Czy podzbior zawiera siê w zbiorze: "<< wynik_czy_z << endl;
	wyswietl(unikalnosc(liczby));
	//cout << "Nowy zbior zawiera liczby:" <<  << endl; 

	system("pause");
	return 0;
}