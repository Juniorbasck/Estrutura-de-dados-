#include <iostream>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int total, ouro, prata, bronze;

    cout << "Digite o n�mero de medalhas de OURO que o Brasil ganhou nas Olimp�adas:  ";
    cin >> ouro;
    cout << endl;
    cout << "Digite o n�mero de medalhas de PRATA que o Brasil ganhou nas Olimp�adas:  ";
    cin >> prata;
    cout << endl;
    cout << "Digite o n�mero de medalhas de BRONZE que o Brasil ganhou nas Olimp�adas:  ";
    cin >> bronze;
    cout << endl << endl << endl;
    total = ouro + prata + bronze;

    cout << "O Brasil ganhou " << total << " medalhas nas Olimp�adas." << endl;

    return 0;
}
