#include <iostream>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int total, ouro, prata, bronze;

    cout << "Digite o número de medalhas de OURO que o Brasil ganhou nas Olimpíadas:  ";
    cin >> ouro;
    cout << endl;
    cout << "Digite o número de medalhas de PRATA que o Brasil ganhou nas Olimpíadas:  ";
    cin >> prata;
    cout << endl;
    cout << "Digite o número de medalhas de BRONZE que o Brasil ganhou nas Olimpíadas:  ";
    cin >> bronze;
    cout << endl << endl << endl;
    total = ouro + prata + bronze;

    cout << "O Brasil ganhou " << total << " medalhas nas Olimpíadas." << endl;

    return 0;
}
