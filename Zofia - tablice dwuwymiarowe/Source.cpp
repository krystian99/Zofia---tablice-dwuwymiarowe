#include <iostream>
#include <cstdlib>

using namespace std;

const int MAX = 1001;
int tab[MAX];

void wczytaj(int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << "tab[" << i << "]= ";
        cin >> tab[i];
    }

}

void wyswietl(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << tab[i] << endl;
    }
}

void zamiana(int n)
{
    int j = n - 1;

    for (int i = 0; i < n/2; i++)
    {
        swap(tab[i], tab[j]);
        j--;
    }
}
void zamiana_v2(int n)
{
    int j = n - 1;

    for (int i = 0; i < n / 2; i++)
    {
        int temp = tab[i];

        tab[i] = tab[j];
        tab[j] = temp;

        j--;
    }
}


int main()
{
    int n;

    cin >> n;

    wczytaj(n);
    wyswietl(n);
    zamiana(n);
    wyswietl(n);
    zamiana_v2(n);
    wyswietl(n);

    return 0;
}