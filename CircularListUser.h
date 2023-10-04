#ifndef CIRCULARLISTUSER_H
#define CIRCULARLISTUSER_H
#include <iostream>
#include <string>
#include "NodeUser.h"

using namespace std;

class CircularListUser{
    private:
    NodeUser* head;
    int cantUsers;

    public:
        CircularListUser(){
            head = NULL;
            cantUsers = 0;
        }

        void insert(NodeUser* _newUser){
            NodeUser* newUser = newUser;
            
            //Si la lista está vacía se designa que la cabeza es el nuevo Nodo
            if(head == NULL){
                newUser -> next = _newUser;
                head = newUser;
            //Si la lista ya tiene un nodo
            // el siguiente del nuevo nodo será el siguiente de la cabeza
            // el siguiente de la cabeza será el nuevo nodo
            }else{
                newUser -> next = head -> next;
                head -> next = newUser;

            }
            //aumenta el numero de usuarios de la lista
            cantUsers++;
        }

        void see() {
            NodeUser* actual = head;
            // Si la cabeza es null, la lista está vacía

            if (head == NULL) {
                cout << "The list is empty";
            } else {
                do {
                    actual = actual->next;
                    cout << actual->user << " ";
                        
                } while (actual != head);
            }
            cout << endl;
        }
        
        //Encontrar el usuario y contraseña para ver si son válidas, además retorna el tipo de usuario que es.
        string searchType(string user,string pass){
            NodeUser* actual = head;
            bool founded = false;
            string type= "Not valid";

            if (head == NULL) {
                    cout << "The list is empty";
            } else {
                do {
                    //condicion para encontrar a el usuario
                    if(user == actual->user && actual->pass == pass){
                        founded = true;
                        type = actual->type;
                    }
                    actual = actual->next;        
                } while (actual != head);
            }
            if(!founded){
                }
            cout << endl;
            return type;
        }

};
#endif