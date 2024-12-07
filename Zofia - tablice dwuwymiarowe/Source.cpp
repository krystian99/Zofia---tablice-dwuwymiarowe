#include <iostream>

using namespace std;

//const int MAX_W = 3, MAX_K = 4;

const int MAX_W = 1001, MAX_K = 1001;

char tab[MAX_W][MAX_K]; // tablica zostala automatycznie wyzerowana -> '\0'

void wyzeruj(int w, int k) // wstaw spacje
{
	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < k; j++)
			tab[i][j] = ' ';
	}
}

void wypisz(int w, int k)
{
	cout << "Wyswietlam elementy tablicy: " << endl;

	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < k; j++)
			cout << tab[i][j];
		cout << endl;
	}
}

void boki_k(int w, int k)
{
	for (int j = 0; j < k; ++j)
		tab[0][j] = '*';

	for (int j = 0; j < k; ++j)
		tab[w-1][j] = '*';

	for (int i = 0; i < w; ++i)
		tab[i][0] = '*';

	for (int i = 0; i < w; ++i)
		tab[i][k-1] = '*';
}

void przekatna_1(int w, int k)
{
	int start_kolumna = 1;

	for (int i = w - 2; i >= 1; i--) // petla glowna - leci po wierszach
	{
		tab[i][start_kolumna] = '#';

		start_kolumna++;
	}
}
void przekatna_2(int w, int k)
{
	int start_wiersz = 1;

	for (int j = 1; j < k - 1; j++)
	{
		tab[start_wiersz][j] = 'O';
		start_wiersz++;
	}

}

void przekatna_2_v2(int w, int k)
{
	for (int j = 1; j < k - 1; j++)
	{
		tab[j][j] = 'O';
	}
}

int main()
{
	int n;

	cout << "Podaj dlugosc boku kwadratu: ";

	cin >> n;

	wyzeruj(n, n);

	boki_k(n, n);
	przekatna_1(n, n);
	przekatna_2(n, n);


	wypisz(n, n);

	return 0;
}