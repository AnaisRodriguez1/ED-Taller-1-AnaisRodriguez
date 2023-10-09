#ifndef CIRCULARLISTUSER_H
#define CIRCULARLISTUSER_H
#include <iostream>
#include <string>
#include "NodeUser.h"

using namespace std;

class CircularListUser{
    private:
    NodeUser* head;
    int qtyUsers;

    public:
        CircularListUser(){
            head = NULL;
            qtyUsers = 0;
        }

        void insert(NodeUser* _newUser) {
            // Crear un nuevo nodo de usuario
            NodeUser* newUser = _newUser;
            
            // Si la lista está vacía, se designa que la cabeza es el nuevo Nodo
            if (head == NULL) {
                newUser->next = newUser;
                head = newUser;
            } else {
                // Si la lista ya tiene un nodo
                // El siguiente del nuevo nodo será el siguiente de la cabeza
                // El siguiente de la cabeza será el nuevo nodo
                newUser->next = head->next;
                head->next = newUser;
            }
            
            // Aumenta el número de usuarios de la lista
            qtyUsers++;
        }

        NodeUser* getUser(int index){
            NodeUser* actual = head;
            NodeUser* current = head;
            if (head == NULL) {// Si la cabeza es null, la lista está vacía
                cout << "The list is empty";
            } else {
                int currentIndex = 0;
                    do {
                        if (currentIndex == index) {
                            return current;  // Se encontró el nodo con el índice deseado
                        }

                        current = current->next;
                        currentIndex++;
                    } while (current != head && currentIndex <= index);
                    return nullptr;  // No se encontró el nodo con el índice deseado
            }
        }

        void see() {
            NodeUser* actual = head;    

            if (head == NULL) {// Si la cabeza es null, la lista está vacía
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

        int getQtyUsers (){
            return qtyUsers;
        }

        bool agreement() {
            bool agreement = true;   
            NodeUser* actual = head;

            // Si la cabeza es null, la lista está vacía

            if (head == NULL) {
                cout << "The list is empty";
            } else {
                do {
                    int choice = 0;
                    actual = actual->next;
                    cout << actual->user << " are you in agreement?\n[1] Yes\n[2] No\n";
                    cin >> choice;

                    if(choice==2){
                        agreement = false;
                    }
                        
                } while (actual != head);
            }
            return agreement;
        }

};
#endif