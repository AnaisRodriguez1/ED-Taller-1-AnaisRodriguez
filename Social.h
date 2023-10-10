#ifndef SOCIAL_H
#define SOCIAL_H
#include "Software.h"
#include "NodeUser.h"
#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Social : public Software{
    private:
        stack<NodeUser*> listFriends;
    public:
        Social(string _name, string _dev, int _age, CircularListUser _list, int _price, stack<NodeUser*> _listFriends) : Software(_name, _dev, _age, _list, _price),listFriends(_listFriends){
            this->listFriends=_listFriends;
        }
        virtual void printName() override {
            cout << name <<"\n";
        }

        stack<NodeUser*> getList(){
            return listFriends;
        }

};

#endif