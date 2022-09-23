#include <iostream>
#include <locale>

using namespace std;

float  area (float numA, int numB)
{
    int resultado;
    resultado = numA*numB;
    return resultado;
}

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int num1, total, quanti, result, resul2;
    int i;

    cout << "Quantos comodos têm no Imóvel: ";
    cin >> quanti;
    cout << endl << endl;

    for (i = 1; i <= quanti; i++)
    {
       cout << "Digite a largura do cômodo " << i << ":";
       cin >> result;
       cout << "Digite o comprimento do cômodo " << i << ":";
       cin >> resul2;
       cout << endl << endl;
       total = area(result, resul2);
       cout << "O cômodo possui " << total << " de construção" << endl << endl << endl;
    }
    return 0;
}
