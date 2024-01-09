#include <iostream>
#include <locale.h>
#include <ctime>
#include <cstdlib>
void main() {
	using namespace std;
	setlocale(LC_ALL, "Portuguese");
	int alt,a;
	srand(time(0));
	alt = rand() % 99 + 1;
	
		do
		{
			cout << "tente adivinhar o numero escolhido: ";
			cin >> a;
			if (a<alt)
			{
				cout << "o numero digitado é menor \n";
			}
			else if (a > alt)
			{
				cout << "O numero digitado é mair \n";
			}
		} while (a != alt);
		cout << "acerte o numero escolhido era o" << alt << ".";
	
	
}