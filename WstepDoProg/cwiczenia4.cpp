// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<vector>

using namespace std;

void wyswietl(vector<int>liczby) //Wyswietla wszystkie liczby zbioru
{
	for (int i = 0; i < liczby.size(); i++)
	{
		cout << liczby[i] << ", ";
	}
	cout << endl;
}

int suma(vector<int>liczby) //wyswietla sume liczb w zbiorze
{
	int wynik = 0;
	for (int i = 0; i < liczby.size(); i++)
	{
		wynik += liczby[i];
	}
	return wynik;
}

float srednia(vector<int> liczby) //Wyswietla srednia liczb w zbiorze
{
	int wynik = suma(liczby);
	return (float)wynik / liczby.size();
	//Alternatywny sposób podany poniżej:
	//float wynik = suma(liczby);
	//return wynik / liczby.size();
}

int min(vector<int>liczby) //Pokazuje najmniejszą wartość w zbiorze
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

int max(vector<int>liczby) //Pokazuje najwieksza wartość w zbiorze
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

bool czy_nalezy(vector<int>liczby, int szukana) //Sprawdza czy dana liczba znajduej się w zbiorze
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

bool czy_zawiera(vector<int>zbior, vector<int>podzbior) //Sprawdza czy inny podzbiór znajduje się w zbiorze
{
	for (int i = 0; i < podzbior.size(); i++)
	{
		if (!czy_nalezy(zbior, podzbior[i]))//Robie tylko wtedy gdy czegoś nie ma
		{
			return false;
		}
	}
	return true;
}

vector<int> unikalnosc(vector<int>zbior) //Tworzy zbiór z innego  zbioru ale bez powtórzeń
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
	cout <<"Czy liczba 4 występuje w zbiorze: "<< wynik_czy_n << endl;
	bool wynik_czy_z = czy_zawiera(liczby, podliczby);
	cout <<"Czy podzbior zawiera się w zbiorze: "<< wynik_czy_z << endl;
	cout <<"Liczby w nowym zbiorze to: "; wyswietl(unikalnosc(liczby));
	

	system("pause");
	return 0;
}
