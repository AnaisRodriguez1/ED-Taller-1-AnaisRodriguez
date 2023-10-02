#include <iostream>
#include "CircularListUser.h"

using namespace std;

int main(){
    CircularListUser listUsers;

    //USUARIOS
    //4 NIÑOS
    listUsers.insert("Carlos", "carlos1234", 17,"",false);
    listUsers.insert("Ana", "ana5678", 16,"",false);
    listUsers.insert("Pedro", "pedro9876", 15,"",false);
    listUsers.insert("Maria", "maria4321", 14,"",false);
    //1 ADMIN
    listUsers.insert("Juan", "1234", 29, "juanJ@gmail.com", true);
    //10 USUARIOS NORMALES
    listUsers.insert("Carlos", "carlos1234", 18, "carlosR@gmail.com", false);
    listUsers.insert("Maria", "maria5678", 25, "mariaS@gmail.com", false);
    listUsers.insert("Pablo", "pablo999", 30, "pabloP@gmail.com", false);
    listUsers.insert("Laura", "laura2021", 22, "lauraM@gmail.com", false);
    listUsers.insert("Pedro", "pedro456", 27, "pedroG@gmail.com", false);
    listUsers.insert("Ana", "ana789", 35, "anaL@gmail.com", false);
    listUsers.insert("Luis", "luis2022", 19, "luisS@gmail.com", false);
    listUsers.insert("Sofia", "sofia1010", 28, "sofiaB@gmail.com",false);
    listUsers.insert("Diego", "diego777", 24, "diegoC@gmail.com", false);
    listUsers.insert("Valeria", "valeria444", 31, "valeriaR@gmail.com", false);

    //listUsers.see();

    string userLog;
    string passLog;

    cout << "BIENVENIDO A TALLER 1:\n Ingrese usuario:";
    cin >> userLog;
    cout << "Ingrese contraseña:";
    cin >> passLog;

    while(listUsers.searchUser(userLog,passLog)=="Not valid"){
        cout << "Usuario y/o contraseña inválidos.:\n Ingrese usuario:";
        cin >> userLog;
        cout << "Ingrese contraseña:";
        cin >> passLog;
    }

    string type = listUsers.searchUser(userLog,passLog);
    cout << type;
    if(type == "Normal User"){

    }
    else if(type == "Administrator"){

    }
    else if(type == "Children"){

    }



}