#include<iostream>
#include<locale.h>
void main() {
	using namespace std;
	int ano;
	cout << "diz um ano";
	cin >> ano;
	if (ano % 100==0)
	{
		if(ano%400==0){
			cout << ano << " e um ano bissexto";
		}
		else
		{
			cout << ano << " nao e bissexto";
		}
	}
	else if ( ano % 4 == 0)
	{
		cout << ano << " e bissexto";
	}
}