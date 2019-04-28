#include<iostream>
using namespace std;

 typedef struct Compromisso{
    string descricao;
    int horario;
    Compromisso *prox;
}Compromisso;

typedef struct Lista_Compromissos{
    Compromisso *inicio;
    Compromisso *fim;
    int num_compromissos;
}Lista_Compromissos;

typedef struct Conj_dias{
     Lista_Compromissos* dias ;
 }Conj_dias;

typedef struct Mes{
    int mes;
    Mes *prox;
    Conj_dias dias;
}Mes;


void Iniciar_Lista(Lista_Compromissos *lista);
void Inserir_Compromisso(Lista_Compromissos *lista, string descricao, int horario);
void Editar_Compromisso (int mes, int dia, int comp);
void Iniciar(Conj_dias *conjunto_dias,int dias);
void Imprimir(Lista_Compromissos lista);

