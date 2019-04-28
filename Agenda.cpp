#include<iostream>
#include "Agenda.hpp"
using namespace std;

void Iniciar_Lista(Lista_Compromissos *lista){
    lista->inicio= nullptr;
    lista->fim = nullptr;
}

void Inserir_Compromisso(Lista_Compromissos *lista, string descricao, int horario){
    Compromisso *novo = new Compromisso();
    novo->descricao=descricao;
    novo->horario=horario;
    novo->prox=nullptr;
    if (lista->inicio==nullptr){
        lista->inicio=novo;
        lista->fim=novo;
    }else{
        lista->fim->prox=novo;
        lista->fim=novo;
    }
    lista->num_compromissos++;
}

void Imprimir(Lista_Compromissos lista){
    Compromisso *aux= lista.inicio;
    while(aux!=nullptr){
        aux=aux->prox;
    }
}

void Iniciar(Conj_dias *conjunto_dias,int dias){
    int i=0;
    conjunto_dias->dias=new Lista_Compromissos[dias];
    for(i=0;i<dias;i++){
        Iniciar_Lista(&conjunto_dias->dias[i]);
    }
}

void Editar_Compromisso (int mes, int dia, int comp){
    int contaMes, contaDia, ContaHorario;

    for (contaMes = 1; contaMes <= 12; contaMes++){
        if (contaMes = *Mes->mes){
            for(contaDia = 1; contaDia <= 31; contaDia++)
            {
                if(contaDia = *Mes->dias->dias[ContaDia])
                {
                    for(contaHorario = 1; contaHorario <=23; contaHorario++)
                    {
                        if( *Mes->dias->dias[ContaDia]->num_compromissos = contaHorario)
                        {
                            cout<<"\nInsira o novo nome do compromisso: ";
                            cin>> *Compromisso->horario;

                        }


                }
            }
        }
    }



}
