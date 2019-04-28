#include <iostream>
#include "Agenda.hpp"

using namespace std;

int Agenda(){
    int Opcao;
    cout <<"Escolha uma opcao:\n\n";
    cout <<"1-Editar Compromisso\n";
    cout <<"2-Inserir Compromisso\n";
    cout <<"3-Remover Compromisso\n";
    cout <<"4-Listar os Compromissos\n";
    cout <<"5-Verificar Compromisso\n";
    cout <<"6-Fechar Agenda\n";

    cin >>Opcao;
    return Opcao;
}

int main(){
    int Op, _mes, _dia, _hora;
    Op=Agenda();
        switch(Op){
            case 1:
                cout << "\nInsira o mes do compromisso (1 - 12): ";
                cin >> _mes;
                cout <<"\nInsira o dia do compromisso (1 - 31): ";
                cin >> _dia;
                cout << "\nInsira a hora do compromisso: (0 - 23): ";
                cin >> _hora;

                Editar_Compromisso(_mes, _dia, _hora);

        case 2:

            break;


        }


    return 0;
}
