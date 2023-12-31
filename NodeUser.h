#ifndef NODEUSER_H
#define NODEUSER_H

#include <iostream>
#include <string>

using namespace std;

class NodeUser {
    public:
        string user, pass, email;
        bool logAcc;
        int age;
        NodeUser *next;
        string type;

        NodeUser(string _user, string _pass, int _age, string _email, bool _logAcc){
            this->user = _user;
            this->pass = _pass;
            this->age = _age;
            this->email = _email;
            this->logAcc = _logAcc;
            next = NULL;

            if (age < 18) {
                type = "Children";
            } else if (_logAcc == false) {
                type = "Normal User";
            } else if (_logAcc == true) {
                type = "Administrator";
            }
        }

        string getType (){
            return type;
        }

        int getAge(){
            return age;
        }
};
#endif