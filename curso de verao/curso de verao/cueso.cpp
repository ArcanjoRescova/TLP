#include <iostream>​
#include <string>​
#include <locale.h>

int main() {
	using namespace std;
	int diasu,grupo, i,total,decimal,valor;
	float  preço=51.50;
	do
	{
		    preço=preço*0.25;
			cout << preço;
			cin >> diasu;
			cin >> grupo;
	} while (preço < 100 && preço>1000);

			if (grupo>4)
			{
				preço=preço-preço* 0.50;
			}
			decimal = ceil(preço) - (preço);
			if (decimal > 0.50)
			{
				valor = ceil(preço) - 0.50;
			}
			else
			{
				valor = ceil(preço);
			}
			cout << valor;
			if (diasu>4||diasu>8)
			{
				 preço = preço - preço * 0.4;
				 cout << preço;
			}
			else if (diasu > 8)
			{
				preço = preço - preço * 0.65;
			}

	
}