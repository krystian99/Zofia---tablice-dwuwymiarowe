#include <iostream>
#include <string> // ci¹gi znaków, wczytywanie i operowanie na nich

using namespace std;


void wyswietl_skrocona_v1(string str)
{
	char pom = str[0];
	int ile = 1;

	for (int i = 1; i < str.size(); i++) 
	{
		if (pom == str[i]) // nadal zliczaj elementy bo nastepny ten sam
		{
			ile++;
		}
		else // wyswietl elementy i ilosc wystepowania poprzedniej litery oraz zrestartuj ilosc i g³ówn¹ literê
		{
			if (ile == 1) cout << pom;
			else if (ile == 2) cout << pom << pom;
			else
				cout << pom << ile;

			ile = 1; // zrestartuj
		}
		pom = str[i];

		if (i == str.size() - 1)
		{
			if (ile == 1) cout << pom;
			else if (ile == 2) cout << pom << pom;
			else
				cout << pom << ile;

			break;
		}
	}
	cout << endl;
}

void wyswietl_skrocona_v2(string str)
{
	char pom = str[0];
	int ile = 1;

	for (int i = 1; i < str.size(); i++)
	{
		if (pom == str[i]) // nadal zliczaj elementy bo nastepny ten sam
		{
			ile++;
		}
		else // wyswietl elementy i ilosc wystepowania poprzedniej litery oraz zrestartuj ilosc i g³ówn¹ literê
		{
			if (ile == 1) cout << pom;
			if (ile == 2) cout << pom << pom;
			else
				cout << pom << ile;

			ile = 1; // zrestartuj
		}
		pom = str[i];
	}

	if (ile == 1) cout << pom;
	if (ile == 2) cout << pom << pom;
	else
		cout << pom << ile;
}

int main()
{
	int t; // iloœc testów

	cin >> t;

	string str;

	while (t--) // pêtla wykona siê t razy
	{
		cin >> str;

		if (str.size() == 1)
			cout << str;

		else 
			wyswietl_skrocona_v1(str);
		//wyswietl_skrocona_v2(str);
	}

	return 0;
}