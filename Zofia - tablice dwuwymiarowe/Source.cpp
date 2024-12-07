#include <iostream>

using namespace std;

//const int MAX_W = 3, MAX_K = 4;

const int MAX_W = 2, MAX_K = 2;

int tab[MAX_W][MAX_K]; // tablica zostala automatycznie wyzerowana - tablica globalna

void wczytaj()
{
	cout << "Podaj elementy tablicy: " << endl;

	for (int i = 0; i < MAX_W; i++)
	{
		for (int j = 0; j < MAX_K; j++)
			cin >> tab[i][j];
	}

	/*for (int j = 0; j < MAX_K; j++)
	{
		for (int i = 0; i < MAX_W; i++)
			cin >> tab[i][j];
	}*/
}

void wypisz()
{
	cout << "Wyswietlam elementy tablicy: " << endl;

	for (int i = 0; i < MAX_W; i++)
	{
		for (int j = 0; j < MAX_K; j++)
			cout << tab[i][j] << " ";
		cout << endl;
	}
}

void iloczyn()
{
	int pom = 1;

	// 5 % 2 -> 1
	// 5 % 3 -> 2

	for (int i = 0; i < MAX_W; i++)
	{
		for (int j = 0; j < MAX_K; j++)
			if (tab[i][j] % 7 != 0) 
			{
				pom *= tab[i][j];
				//pom = pom * tab[i][j];
			}

	}

	cout << "Iloczyn liczb niepodzielnych prezez 7 = " << pom << endl;
}

void ilosc()
{
	int pom2 = 0;

	for (int i = 0; i < MAX_W; i++)
	{
		for (int j = 0; j < MAX_K; j++)
		{
			if (i * j != 0)
				pom2++;
		}

	}

	cout << "Ilosc elementow ktorych iloczyn ideksow jest dodatni: " << pom2 << endl;
}

void sprawdzenie4()
{
	int pom3=0;
	
	for (int i = 0; i < MAX_W; i++)
	{
		for (int j = 0; j < MAX_K; j++)
		{
			if (tab[i][j] > 4)
				pom3++;
		}

	}
	if (pom3 == 0)
		cout << "Nie ma liczby wiekszej od 4\n";
	else
		cout << "Jest liczba wieksza od 4\n";
}

void sprawdzenie4_v2()
{
	int pom3 = 0;

	for (int i = 0; i < MAX_W; i++)
	{
		for (int j = 0; j < MAX_K; j++)
		{
			if (tab[i][j] > 4)
			{
				cout << "Jest liczba wieksza od 4\n";
				return;
			}
		}

	}
	cout << "Nie ma liczby wiekszej od 4\n";
}

void ilossuma_nieparxystych()
{
	int pom2 = 0;
	bool jest_w_nieparzystymW = false;

	for (int i = 0; i < MAX_W; i++)
	{
		for (int j = 0; j < MAX_K; j++)
		{
			if (i % 2 == 1) {
				pom2 += tab[i][j];
				jest_w_nieparzystymW = true;
			}
		}

	}

	if (jest_w_nieparzystymW)
	{
		cout << "Suma elementow z wierszy nieparzystych:  " << pom2 << endl;
	}
	else
		cout << "Suma z wierszy nieparzystych nie istnieje" << endl;
	//cout << "Suma elementow z wierszy nieparzystych:  " << pom2 << endl;

}

void zmniejszanie()
{
	for (int i = 0; i < MAX_W; i++)
	{
		for (int j = 0; j < MAX_K; j++)
		{
			if (tab[i][j]<0)
			{
				tab[i][j] -= 2;
			}
		}

	}

	wypisz();
}

void sprawdzenie10()
{
	int pom3 = 0;

	for (int i = 0; i < MAX_W; i++)
	{
		for (int j = 0; j < MAX_K; j++)
		{
			if (tab[i][j] >10)
			{
				cout << "Nie wszystkie liczby sa mniejsze od 10\n";
				return;
			}
		}

	}
	cout << "Wszystkie liczby sa mniejsze od 10\n";
}

int main()
{
	wczytaj();
	wypisz();

	iloczyn();
	ilosc();
	sprawdzenie4();
	sprawdzenie4_v2();
	ilossuma_nieparxystych();
	zmniejszanie();

	sprawdzenie10();

	return 0;
}