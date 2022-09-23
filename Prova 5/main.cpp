#include <iostream>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

    float num1, resultado, total, divisao;
    int i;

    cout << "Quantas notas você vai digita?";
    cin >> num1;
    cout << endl << endl;

    for (i = 1; i <= num1; i++)
    {
      cout << "Digite a nota " << i << ":";
      cin >> resultado;
      total += resultado;
      cout << endl << endl;
    }

    divisao = total/num1;

    cout << "A média foi: " << divisao << endl;

    return 0;
}
