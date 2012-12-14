/* 
 * File:   listas.h
 * Author: Victor
 *
 * Created on 14 de Dezembro de 2012, 13:19
 */

#ifndef LISTAS_H
#define    LISTAS_H

#include <iostream>
#include <string>

using namespace std;

template <class tipo>
class No{
    public:
        tipo info;
        No <tipo> *prox;
        No(tipo elem, No <tipo> *p) {
            info = elem;
            prox = p;
        }
};

template <class tipo>
class Lista{
    private:
        No <tipo> *inicio;
    public:
        Lista(){
            inicio = NULL;
        }
        ~Lista() {
            No <tipo> *p;

            while(inicio!=NULL){
                p=inicio;
                inicio=inicio->prox;
                delete p;
            }
        }
        void insere(tipo elem) { //Insere um novo elemento no final da lista
            No <tipo> *atual,*novo;
            novo = new No <tipo>(elem, NULL);

            if(listaVazia())
                inicio = novo;
            else{
                atual = inicio;
                while(atual->prox != NULL){
                    atual = atual->prox;
                }
                atual->prox = novo;
                novo->prox = NULL;
            }
        }
        
        No <tipo> recupera(No <tipo> *recuperado) {
            No <tipo> *busca = inicio;
            while (busca != NULL) {
                if(busca->info == recuperado->info) {
                    return busca;
                }
                busca = busca->prox;
            }
            cout << "Elemento não encontrado na lista" << endl;
            return NULL;
        }
        
        int listaVazia() {
            if(inicio == NULL) {
                return 1;
            }
        return 0;
        }
        
        void remove(No <tipo> *remocao) {
            No <tipo> *busca = inicio;
            No <tipo> *anterior = NULL;
            
            while (busca != NULL) {
                if(busca->info == remocao->info) {
                    if (anterior != NULL)
                        anterior->prox = busca->prox;
                    else
                        inicio = busca->prox;
                    delete busca;
                }
                anterior = busca;
                busca = busca->prox;
            }
            if (busca == NULL)
                cout << "Elemento não encontrado na lista" << endl;
        }
        
};

#endif	/* LISTAS_H */

