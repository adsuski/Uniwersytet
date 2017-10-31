// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int dodaj(int x, int y)
{
	return x + y;
}

int odejmij(int x, int y)
{
	return x - y;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int x=dodaj(5, 3);
	cout << x << endl;
	int y=odejmij(5, 4);
	cout << y << endl;


	cout << "Mama" << endl;
	system("pause");
	
	return 0;
}

