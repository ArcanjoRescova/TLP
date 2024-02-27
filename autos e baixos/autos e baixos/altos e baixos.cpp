#include <iostream>
#include <locale.h>

int main()
{
    using namespace std;

   
    int k[1000], m[1000], i, ra[1000], Alto, Baixo, Patamar, caminhada = 0;

  
    for (i = 0; i < 1000; i++)
    {
        do {
            cout << "Coloque os Km \n";
            cin >> k[i];
            cout << "Coloque os metros \n";
            cin >> m[i];
        } while ((k[i] > 100 || k[i] < 0) || (m[i] > 999 || m[i] < 0));

       
        if (k[i] == 0 && m[i] == 0 && caminhada > 1)
        {
            break;
        }
        else
            if (k[i] == 0 && m[i] == 0 && caminhada <= 1)
            {
                cout << "Não pode ser \n";
                break;
            }
            else
            {
                caminhada = caminhada + 1;
            }
    }

    for (i = 1; i <= caminhada; i++)
    {
        ra[i - 1] = k[i - 1] * 1000 + m[i - 1];
        ra[i] = k[i] * 1000 + m[i];

        if (ra[i] > ra[i - 1])
        {
            cout << "Alto " << (ra[i] - ra[i - 1]) / 1000 << "km " << (ra[i] - ra[i - 1]) % 1000 << "m.\n";
        }
        else
            if (ra[i] < ra[i - 1])
            {
                cout << "Baixo " << (ra[i - 1] - ra[i]) / 1000 << "km " << (ra[i - 1] - ra[i]) % 1000 << "m.\n";
            }
            else
            {
                cout << "Patamar\n";
            }
    }
    return 0;