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

int main()
{
	vector<int> liczby;
	liczby.push_back(9);	liczby.push_back(8);	liczby.push_back(1);	liczby.push_back(3);	liczby.push_back(5);
	cout << liczby.size() << endl;
	
	wyswietl(liczby);

	int wynik = suma(liczby);
	cout << wynik << endl;
	
	system("pause");
    return 0;
}

