#include <iostream>
#include <list>
#include <windows.h>

using namespace std;

void menu(){
    cout<<"\nmenu: \n";
    cout<<"1- adicionar valor a lista.\n";
    cout<<"2- exibir lista.\n";
    cout<<"3- consultar um elemento na lista.\n";
    cout<<"\n0- encerrar operação.\n";
};

int main(){
    
    int numVal, insertLista, TAM, valorProcurado,qtdVAL;
    list<int> Lista;
    TAM=Lista.size();


    while (true){
        menu();

        cout<<"\ndigite o valor da opreção desejada: ";
        cin>>numVal;
        switch(numVal){
        case 1:
            cout<<"\nquantos valores deseja inserir? ";
            cin>>qtdVAL;
            cout<<endl;
            for(int i=0; i<qtdVAL ;i++){
                cout<<"digite o valor que deseja inserir: ";
                cin>>insertLista;
                Lista.push_back(insertLista);
            }
            system("cls");
            break;

        case 2:
            system("cls");
            cout<<"valores na lista: \n\n";
            for (const auto& elemento : Lista) {
            cout << elemento << " ";
            }
            cout<<"\n\ncontinuando em 5 segundo..."<<endl;
            Sleep(5000);
            system("cls");
            cout<<"continuando...\n\n\n";
            break;

        case 3:
            cout << "\nDigite o valor que deseja procurar: ";
            cin >> valorProcurado;
            bool encontrado;
            encontrado = false;
            for (const auto& elemento : Lista) {
                if (elemento == valorProcurado) {
                    encontrado = true;
                    break;
                }
            }
            system("cls");
            if (encontrado) {
                cout << "\n\nO valor " << valorProcurado << " foi encontrado na lista.\n\n" <<endl;
            } else {
                cout << "\n\nO valor " << valorProcurado << " não foi encontrado na lista.\n\n" <<endl;
            }
            cout<<"continuando em 5 segundo...";
            Sleep(4000);
            system("cls");
            cout<<"continuando...\n\n\n";
            break;

        case 0:
            system("cls");
            cout<<"programa encerrado...";
            return 0;
        
        default:
            system("cls");
            cout<<"\n\nINSIRA UM VALOR DE OPERAÇÃO VÁLIDO.\n\n";
            break;
        }
    }

    return 0;
}