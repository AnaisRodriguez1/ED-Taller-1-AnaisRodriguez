#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include "CircularListUser.h"
#include "Software.h"
#include "OfficeSuite.h"
#include "Production.h"
#include "Game.h"
#include "Browser.h"
#include "Security.h"
#include "Social.h"
#include "NodeUser.h"

using namespace std;

CircularListUser setListUsers (CircularListUser listUsers){  
    //4 NIÑOS
    NodeUser *u1 = new NodeUser("Karim", "karim1234", 17, "", false);
    NodeUser *u2 = new NodeUser("Amina", "amina5678", 16, "", false);
    NodeUser *u3 = new NodeUser("Ali", "ali9876", 15, "", false);
    NodeUser *u4 = new NodeUser("Mouna", "mouna4321", 14, "", false);

    //1 ADMIN
    NodeUser *u5 = new NodeUser("Juan", "1234", 29, "juanJ@gmail.com", true);
    //10 USUARIOS NORMALES
    NodeUser *u6 = new NodeUser("Carlos", "carlos1234", 18, "carlosR@gmail.com", false);
    NodeUser *u7= new NodeUser("Maria", "maria5678", 25, "mariaS@gmail.com", false);
    NodeUser *u8 = new NodeUser("Pablo", "pablo999", 30, "pabloP@gmail.com", false);
    NodeUser *u9 = new NodeUser("Laura", "laura2021", 22, "lauraM@gmail.com", false);
    NodeUser *u10 = new NodeUser("Pedro", "pedro456", 27, "pedroG@gmail.com", false);
    NodeUser *u11 = new NodeUser("Sofia", "sofia1010", 28, "sofiaB@gmail.com",false);
    NodeUser *u12 = new NodeUser("Ana", "ana789", 35, "anaL@gmail.com", false);
    NodeUser *u13 = new NodeUser("Luis", "luis2022", 19, "luisS@gmail.com", false);
    NodeUser *u14 = new NodeUser("Diego", "diego777", 24, "diegoC@gmail.com", false);
    NodeUser *u15 = new NodeUser("Valeria", "valeria444", 31, "valeriaR@gmail.com", false);

    listUsers.insert(u1);listUsers.insert(u2);listUsers.insert(u3);listUsers.insert(u4);listUsers.insert(u5);
    listUsers.insert(u6);listUsers.insert(u7);listUsers.insert(u8);listUsers.insert(u9);listUsers.insert(u10);
    listUsers.insert(u11);listUsers.insert(u12);listUsers.insert(u13);listUsers.insert(u14);listUsers.insert(u15);
    return listUsers;
}
vector<Software*> setListGames (CircularListUser listUsers,vector<Software*> listGames){
    Game *game1 = new Game("The Legend of Zelda: Breath of the Wild","Nintendo",15,listUsers,58990,"Adventure");
    Game *game2 = new Game("The Legend of Zelda: Tears of the Kingdom","Nintendo",15,listUsers,68790,"Adventure");
    Game *game3 = new Game("Pokemon Violet","The Pokemon Company",15,listUsers,58990,"Role-playing");
    Game *game4 = new Game("Pokemon Scarlet","The Pokemon Company",15,listUsers,58990,"Role-playing");
    Game *game5 = new Game("VALORANT","Riot Games",13,listUsers,0,"Tactical Shooter");
    Game *game6 = new Game("Counter-Strike 2","Valve Corporation",13,listUsers,0,"Tactical Shooter");
    Game *game7 = new Game("Pokemon Unite","Nintendo",15,listUsers,0,"MOBA");
    Game *game8 = new Game("League of Legends","Riot Games",13,listUsers,0,"MOBA");
    Game *game9 = new Game("Fornite","Epic Games",13,listUsers,0,"FPS");
    Game *game10 = new Game("Apex Legends","Respawn Entertainment",16,listUsers,0,"FPS");
    Game *game11 = new Game("FINAL FANTASY XIV","Square Enix",13,listUsers,22990,"MMORPG");
    Game *game12 = new Game("World of Warcraft","Blizzard Entertainment",13,listUsers,15600,"MMORPG");
    Game *game13 = new Game("Ori and the Will of the Wisps","Moon Studios",7,listUsers,24990,"Puzzle");
    Game *game14 = new Game("Hollow Knight","Team Cherry",7,listUsers,8300,"Metroidvania");
    Game *game15 = new Game("ENDER LILIES: Quietus of the Knights","Live Wire",12,listUsers,9500,"Metroidvania");

    //JUEGOS 18+
    Game *game16 = new Game("God of War: Ragnarok","SIE Santa Monica Studio",18,listUsers,64990,"Action");
    Game *game17 = new Game("Catherine Full Body","Atlus",18,listUsers,14500,"Puzzle");
    Game *game18 = new Game("Shadow Warrior","Flying Wild Hog",18,listUsers,15500,"Action");
    Game *game19 = new Game("Grand theft Auto V","Rockstar Games",18,listUsers,27192,"Open World");
    Game *game20 = new Game("The Witcher 3: Wild Hunt","CD PROJEKT RED",18,listUsers,18300,"Open World");

    listGames.push_back(game1);listGames.push_back(game2);listGames.push_back(game3);listGames.push_back(game4);listGames.push_back(game5);
    listGames.push_back(game6);listGames.push_back(game7);listGames.push_back(game8);listGames.push_back(game9);listGames.push_back(game10);
    listGames.push_back(game11);listGames.push_back(game12);listGames.push_back(game13);listGames.push_back(game14);listGames.push_back(game15);
    listGames.push_back(game16);listGames.push_back(game17);listGames.push_back(game18);listGames.push_back(game19);listGames.push_back(game20);
    return listGames;
}
vector<Software*> setListOfficeSuites (CircularListUser listUsers,vector<Software*> listOffices){

    vector<vector<int>> matrix(listUsers.getQtyUsers(),vector<int>(listOffices.size(),0));
    matrix[0][0] = 1000;
    matrix[1][2] = 500;
    matrix[2][3] = 200;
    matrix[2][2] = 500;
    matrix[2][3] = 200;
    matrix[15][0] = 1000;
    matrix[15][3] = 200;

    OfficeSuite *fs1 = new OfficeSuite("Microsoft Word","Microsoft",13,listUsers,139990,matrix);
    OfficeSuite *fs2 = new OfficeSuite("Microsoft Excel","Microsoft",13,listUsers,139990,matrix);
    OfficeSuite *fs3 = new OfficeSuite("Microsoft PowerPoint","Microsoft",13,listUsers,139990,matrix);
    OfficeSuite *fs4 = new OfficeSuite("Microsoft Outlook","Microsoft",13,listUsers,139990,matrix);
    OfficeSuite *fs5 = new OfficeSuite("Microsoft OneNote","Microsoft",13,listUsers,139990,matrix);

    listOffices.push_back(fs1);listOffices.push_back(fs2);listOffices.push_back(fs3);listOffices.push_back(fs4);listOffices.push_back(fs5);
    return listOffices;
}
vector<Software*> setListProductions (CircularListUser listUsers,vector<Software*> listProductions){
    Production *p1 = new Production("Audacity","The Audacity Team",18,listUsers,0,"Audio");
    Production *p2 = new Production("Vegas Pro","Sony Creative Software",18,listUsers,54000,"Video");
    Production *p3 = new Production("OBS Studio","Lain Bailey",18,listUsers,0,"Streaming");
    Production *p4 = new Production("Adobe Photoshop","Adobe Inc",18,listUsers,163200,"Image");
    listProductions.push_back(p1);listProductions.push_back(p2);listProductions.push_back(p3);listProductions.push_back(p4);
    return listProductions;
}
vector<Software*> setListBrowsers (CircularListUser listUsers,vector<Software*> listBrowsers){
    vector<string> history1 = {"https://www.op.gg/summoners/kr/hide%20on%20bush", //1
                            "https://youtu.be/fYwRsJAPfec?si=2wv1GfzPa8RnlXpt", //2
                            "https://www.youtube.com/watch?v=QK7JQl9jNzM", //3
                            "https://www.youtube.com/watch?v=yRYFKcMa_Ek", //4
                            "https://youtu.be/CsHiG-43Fzg?si=vjk-fsDLadZNEpC9", //5
                            "https://www.youtube.com/watch?v=pxAiwZlzSD8", //6
                            "https://www.youtube.com/watch?v=-wPg1tNEWmo", //7
                            "https://youtu.be/mYEA5A0Bjyo?si=GHS8xb3t6ZwznDTd", //8
                            "https://www.youtube.com/watch?v=fuAE3U1NvOs", //9
                            "https://www.youtube.com/watch?v=ZkbDwgH1lQE"}; //10
    Browser *b1 = new Browser("Opera GX","Opera Software",13,listUsers,0,history1);

    vector<string> history2 = {"https://www.artstation.com/artwork/AlaEBq", //1
                            "https://www.artstation.com/artwork/w0PNrg", //2
                            "https://www.artstation.com/artwork/Xg9xWl", //3
                            "https://www.artstation.com/artwork/RyONoW", //4
                            "https://www.artstation.com/artwork/048Z6y", //5
                            "https://www.artstation.com/artwork/8by54E", //6
                            "https://www.artstation.com/artwork/ZaXL2R", //7
                            "https://www.artstation.com/artwork/EvK1wq", //8
                            "https://www.artstation.com/artwork/r9JNdG", //9
                            "https://www.artstation.com/artwork/6bNqdO"};//10
    Browser *b2 = new Browser("Microsoft Edge","Microsoft Corporation",13,listUsers,0,history2);
    listBrowsers.push_back(b1);listBrowsers.push_back(b2);
    return listBrowsers;
}
vector<Software*> setListSecurities (CircularListUser listUsers,vector<Software*> listSecurities){
    Security *s1 = new Security("Malwarebytes Anti-Ransomware","Malwarebytes Corporation",18,listUsers,7000,"Ransomware");
    Security *s2 = new Security("Ad-Aware","Lavasoft",18,listUsers,0,"Spyware");
    Security *s3 = new Security("Symantec Endpoint Protection","Broadcom Inc",18,listUsers,23700,"Botnets");
    Security *s4 = new Security("Sophos Intercept X","Sophos Group plc",18,listUsers,122400,"Rootkits");
    Security *s5 = new Security("Norton 360","Norton",18,listUsers,16000,"Computer Worms");
    Security *s6 = new Security("Kaspersky Total Security","Kaspersky Lab",18,listUsers,29610,"Trojans");

    listSecurities.push_back(s1);listSecurities.push_back(s2);listSecurities.push_back(s3);listSecurities.push_back(s4);listSecurities.push_back(s5);listSecurities.push_back(s6);
    return listSecurities;
}
vector<Software*> setListSocials(CircularListUser listUsers,vector<Software*> listSocials){   
    //lista para amigos mayores a 18 años
    stack<NodeUser*> listFriends18;
    Social *soc1 = new Social("Discord","Electron",18,listUsers,0,listFriends18);

    //lista para amigos menor a 18 años
    stack<NodeUser*> listFriends;
    Social *soc2 = new Social("WhatsApp","Facebook Inc",16,listUsers,0,listFriends);
    return listSocials;
}

vector<Software*> setListGamesToAdd(CircularListUser listUsers,vector<Software*> listGamesToAdd){
    Game *game = new Game("Assassin's Creed Valhalla","Ubisoft",18,listUsers,4999,"Action-Adventure");
    listGamesToAdd.push_back(game);
    game = new Game("The Elder Scrolls V: Skyrim","Bethesda",17,listUsers,3999,"Action-RPG");
    listGamesToAdd.push_back(game);
    game = new Game("Call of Duty: Warzone","Activision",18,listUsers,0,"Battle Royale");
    listGamesToAdd.push_back(game);
    game = new Game("Among Us","InnerSloth",10,listUsers,499,"Social Deduction");
    listGamesToAdd.push_back(game);
    game = new Game("Genshin Impact","miHoYo",12,listUsers,0,"Action-RPG");
    listGamesToAdd.push_back(game);
    game = new Game("Terraria","Re-Logic",10,listUsers,1499,"Sandbox");
    listGamesToAdd.push_back(game);
    game = new Game("Overwatch","Blizzard Entertainment",13,listUsers,1999,"First-Person Shooter");
    listGamesToAdd.push_back(game);
    game = new Game("Animal Crossing: New Horizons","Nintendo",3,listUsers,5999,"Life Simulation");
    listGamesToAdd.push_back(game);
    game = new Game("Hades","Supergiant Games",12,listUsers,1999,"Roguelike");
    listGamesToAdd.push_back(game);
    game = new Game("Celeste","Maddy Makes Games",10,listUsers,999,"Platformer");
    listGamesToAdd.push_back(game);
    return listGamesToAdd;
}
vector<Software*> setListProductionsToAdd(CircularListUser listUsers,vector<Software*> listProductionsToAdd){
    Production *p5 = new Production("Logic Pro X", "Apple Inc", 18, listUsers, 199.99, "Audio");
    Production *p6 = new Production("Premiere Pro", "Adobe Inc", 18, listUsers, 239.88, "Video");
    Production *p7 = new Production("Streamlabs OBS", "Streamlabs", 18, listUsers, 0, "Streaming");
    Production *p8 = new Production("GIMP", "The GIMP Team", 18, listUsers, 0, "Image");
    listProductionsToAdd.push_back(p5);listProductionsToAdd.push_back(p6);listProductionsToAdd.push_back(p7);listProductionsToAdd.push_back(p8);
    return listProductionsToAdd;
}
vector<Software*> setListBrowsersToAdd(CircularListUser listUsers,vector<Software*> listBrowsersToAdd){
    vector<string> history = {""};
    Browser *b3 = new Browser("Mozilla Firefox", "Mozilla Foundation", 13, listUsers, 0, history);
    Browser *b4 = new Browser("Google Chrome", "Google LLC", 13, listUsers, 0, history);
    Browser *b5 = new Browser("Safari", "Apple Inc", 13, listUsers, 0, history);
    Browser *b6 = new Browser("Opera", "Opera Software", 13, listUsers, 0, history);
    listBrowsersToAdd.push_back(b3);listBrowsersToAdd.push_back(b4);listBrowsersToAdd.push_back(b6);
    return listBrowsersToAdd;
}
vector<Software*> setListSecuritiesToAdd(CircularListUser listUsers,vector<Software*> listSecuritiesToAdd){
    Security *s7 = new Security("Avast Antivirus", "Avast Software", 18, listUsers, 0, "Viruses");
    Security *s8 = new Security("McAfee Total Protection", "McAfee LLC", 18, listUsers, 2999, "Malware");
    Security *s9 = new Security("Bitdefender Antivirus Plus", "Bitdefender", 18, listUsers, 1999, "Phishing");
    Security *s10 = new Security("ESET NOD32 Antivirus", "ESET", 18, listUsers, 2995, "Spyware");
    listSecuritiesToAdd.push_back(s7);listSecuritiesToAdd.push_back(s8);listSecuritiesToAdd.push_back(s9);listSecuritiesToAdd.push_back(s10);
    return listSecuritiesToAdd;
}
vector<Software*> setListSocialsToAdd(CircularListUser listUsers,vector<Software*> listSocialsToAdd){
    //lista para amigos mayores a 18 años
    stack<NodeUser*> listFriends18;
    Social *soc2 = new Social("Facebook", "Meta Platforms, Inc.", 18, listUsers, 0, listFriends18);
    listFriends18.push(listUsers.getUser(15));listFriends18.push(listUsers.getUser(14));
    //lista para amigos menor a 18 años
    stack<NodeUser*> listFriends;
    listFriends.push(listUsers.getUser(1));listFriends.push(listUsers.getUser(2));
    Social *soc4 = new Social("Instagram", "Meta Platforms, Inc.", 17, listUsers, 0, listFriends);
    listSocialsToAdd.push_back(soc2);listSocialsToAdd.push_back(soc4);
    return listSocialsToAdd;
}

vector<Software*> deleteSoftware (vector<Software*> list, CircularListUser listUsers){
    cout<<"\n";
    for(size_t i=0;i<list.size();i++){
        cout << "["<<i<<"] ";
        list[i]->printName();
    }
    int index;
    cout << "Enter the index of the software to delete:";
    cin >> index;

    cout << "To delete the software, it is necessary to ask all users if they agree. Do you want to proceed?\n[1] Yes\n[2] No\n";
    int choice;
    cin >>choice;

    if(choice == 1){
        bool agreement = listUsers.agreement();

        if(agreement==true){
            list.erase(list.begin() + index);
            cout<<"\nThese are the games within the software:";
            for(size_t i=0;i<list.size();i++){
                cout << "["<<i<<"] ";
                list[i]->printName();
            }
            
            cout << "The software has been successfully deleted.\n";
        }
        else{
            cout << "The software was not deleted as approval from all users was not obtained.\n";
        }
    }
    else{
    }
    return list;
}
vector<Software*> addSoftware (vector<Software*> list,vector<Software*> listToAdd,CircularListUser listUsers){
    cout<<"\n";
    for(size_t i=0 ; i<listToAdd.size() ; i++){
        cout << "["<<i<<"] ";
        listToAdd[i]->printName();    
    }
    cout << "Choose the index of the software you want to add:";
    int indexChoice;
    cin >> indexChoice;
    list.push_back(listToAdd[indexChoice]);
    
    cout<<"\nThese are the games within the software:";
    for(size_t i=0 ; i<list.size() ; i++){
        cout << "["<<i<<"] ";
        list[i]->printName();    
    }
    return list;
}

int main(){

    // CONDICIONES DE ENTREGA 
    CircularListUser listUsers; //lista circular de punteros de Usuarios
    vector<Software*> listGames; // lista de vector de punteros para Software de Juego
    vector<Software*> listOffices; // lista de vector de punteros para Software de Ofimática
    vector<Software*> listProductions; // lista de vector de punteros para Software de Producción
    vector<Software*> listBrowsers; // lista de vector de punteros para Software de Navegador
    vector<Software*> listSecurities; // lista de vector de punteros para Software de Seguridad
    vector<Software*> listSocials; // lista de vector de punteros para Software de Social

    //POBLAR SOFTWARE DE USUARIOS*************
    listUsers = setListUsers (listUsers);

    //POBLAR SOFTWARE DE JUEGOS*************   
    listGames = setListGames(listUsers,listGames);   
    vector<Software*> listGamesToAdd;
    listGamesToAdd = setListGamesToAdd(listUsers,listGamesToAdd);

    //POBLAR SOFTWARE DE OFIMATICA*************ERROR AL DESCOMENTAR POR INICIALIZACIÓN
    //listOffices = setListOfficeSuites(listUsers,listOffices); 

    //POBLAR SOFTWARE DE PRODUCCION*************
    listProductions = setListProductions(listUsers,listProductions);
    vector<Software*>listProductionsToAdd;
    listProductionsToAdd = setListProductionsToAdd(listUsers,listProductionsToAdd);

    //POBLAR SOFTWARE DE NAVEGADOR*************
    listBrowsers = setListProductions(listUsers,listBrowsers);
    vector<Software*>listBrowsersToAdd;
    listBrowsersToAdd = setListBrowsersToAdd(listUsers,listBrowsersToAdd);

    //POBLAR SOFTWARE DE SEGURIDAD*************
    listSecurities = setListSecurities(listUsers,listSecurities);
    vector<Software*>listSecuritiesToAdd;
    listSecuritiesToAdd = setListSecuritiesToAdd(listUsers,listSecuritiesToAdd);

    //POBLAR SOFTWARE DE SOCIAL*************
    listSocials = setListSocials(listUsers, listSocials);
    vector<Software*>listSocialsToAdd;
    listSocialsToAdd = setListSocialsToAdd(listUsers,listSocialsToAdd);

    //LOGICA PARA CREAR BUCLE ENTRE EL LOGIN, LOGOUT Y EXIT DEL PROGRAMA
    int exitProgram;
    bool logIn = false;
    int loginChoice;
    bool back = false;
    int methodChoice;
    string userLog;
    string passLog;

    do {
        cout << " - WELCOME - \n" << endl;
        cout << "[1] Log In" << endl;
        cout << "[2] Exit the Program" << endl;
        cin >> exitProgram;

        switch (exitProgram) {
            case 1:
                cout << "Enter username: ";
                cin >> userLog;
                cout << "Enter password: ";
                cin >> passLog;

                //BUCLE SI EL USUARIO Y/O CONTRASEÑA SON INVALIDOS HASTA INGRESAR UNO CORRECTO
                while (listUsers.searchType(userLog, passLog) == "Not valid") {
                    cout << "Invalid username and/or password. Please enter valid credentials." << endl;
                    cout << "Enter username: ";
                    cin >> userLog;
                    cout << "Enter password: ";
                    cin >> passLog;
                }

                cout << "Logging In..." << endl;
                logIn = true;  // SE INICIA SESIÓN Y ENTREA AL BUCLE WHILE
                break;
            case 2:
                cout << "Exiting the program..." << endl;
                return 0;  // SE TERMINA EL PROGRAMA, YA QUE SOLO SE CUMPLE ESTE BUCLE SI ES VERDADERO
        }

        // SI EL USUARIO HA INICIADO SESIÓN, ENTRA AL BUCLE DE LOGIN
        while (logIn) {
            back=false;
            //SI EL TIPO DEL USUARIO COINCIDE CON EL USUARIO NORMAL ENTRA A ESTE BUCLE, SINO...
            if (listUsers.searchType(userLog, passLog) == "Normal User") {
                cout << "WELCOME USER\n" << endl;
                cout << "SOFTWARES:" << endl;
                cout << "[1] Games" << endl;
                cout << "[2] Office Suites" << endl;
                cout << "[3] Productions" << endl;
                cout << "[4] Browsers" << endl;
                cout << "[5] Socials" << endl;
                cout << "[6] Log Out" << endl;
                cout << "Choose an option (1-6): ";
                cin >> loginChoice;
                
                switch (loginChoice) {
                    case 1:
                        while(!back){                     
                            cout << "\nPerforming Games...\n" << endl;
                            cout << "[1] Delete game" << endl;
                            cout << "[2] Add game" << endl;
                            cout << "[3] Change gender" << endl;
                            cout << "[4] Go back" << endl;
                            cout << "Choose an option (1-4): ";
                            cin >> methodChoice;
                            Game* gameSelect = new Game("", "", 0, listUsers, 0, "");

                            switch(methodChoice){ 
                                case 1: 
                                    listGames = deleteSoftware (listGames,listUsers);
                                break;

                                case 2:
                                    listGames = addSoftware(listGames,listGamesToAdd,listUsers);
                                break; 

                                case 3:                                    
                                    cout << "\n";
                                    for (size_t i = 0; i < listGames.size(); i++) {
                                        cout << "[" << i << "] ";
                                        Game* gamePtr = dynamic_cast<Game*>(listGames[i]);
                                        gamePtr->printName();
                                        cout << " Gender: " << gamePtr->getGender() << endl;
                                    }
                                    // Solicitar al usuario seleccionar un índice y género
                                    size_t selectedIndex;
                                    cout << "Select an index to change the gender: ";
                                    cin >> selectedIndex;

                                    if (selectedIndex < listGames.size()) {
                                        Game* selectedGame = dynamic_cast<Game*>(listGames[selectedIndex]);
                                        string newGender;
                                        cout << "Enter the new gender: ";
                                        cin >> newGender;
                                        selectedGame->setGender(newGender);
                                        cout << "Gender changed successfully.\n" << endl;

                                        for (size_t i = 0; i < listGames.size(); i++) {
                                            cout << "[" << i << "] ";
                                            Game* gamePtr = dynamic_cast<Game*>(listGames[i]);
                                            gamePtr->printName();
                                            cout << " Gender: " << gamePtr->getGender() << endl;
                                        }
                                    } else {
                                        cout << "Index out of range." << endl;
                                    }
                                break;

                                case 4:
                                back=true;
                                break;

                                default:
                                cout << "Invalid option. Please choose a valid option." << endl;
                                break;
                            }
                        }
                        break;

                    case 2:
                    /*
                    while(!back){  
                        cout << "Performing Office Suites..." << endl;

                        for (size_t i = 0; i < listOffices.size(); i++) {
                            cout << "[" << i << "] ";
                            listOffices[i]->printName();
                        }
                        int selectedIndex;
                        cout << "Enter the index to get the pointer: ";
                        cin >> selectedIndex;
                        OfficeSuite* selectedOffice = dynamic_cast<OfficeSuite*>(listOffices[selectedIndex]);

                        cout << "[1] Delete Office Suites" << endl;
                        cout << "[2] Add Office Suites" << endl;
                        cout << "[3] Delete user files" << endl;
                        cout << "[4] Go back" << endl;
                        cout << "Choose an option (1-4): ";
                        cin >> methodChoice;

                        switch(methodChoice){
                            case 1:

                            break;
                            
                            case 2:
                            break;

                            case 3:
                            break;
                            
                            case 4:
                            back=true;
                            break;

                            default:
                            cout << "Invalid option. Please choose a valid option." << endl;
                            break;
                            
                        }
                    }*/
                        break;
                    case 3:
                        while(!back){  
                            cout << "Performing Productions..." << endl;
                            cout << "[1] Delete Productions Software" << endl;
                            cout << "[2] Add Productions Software" << endl;
                            cout << "[3] " << endl;
                            cout << "[4] Go back" << endl;
                            cout << "Choose an option (1-4): ";
                            cin >> methodChoice;

                            switch(methodChoice){
                                case 1:
                                    listProductions = deleteSoftware(listProductions,listUsers);
                                break;   
                                case 2:
                                break;
                                    listProductions = addSoftware (listProductions,listProductionsToAdd,listUsers);
                                case 3:
                                break;
                                
                                case 4:
                                back=true;
                                break;

                                default:
                                cout << "Invalid option. Please choose a valid option." << endl;
                                break;
                                
                                }
                        }
                        break;
                    case 4:
                        while(!back){  
                            cout << "Performing Browsers..." << endl;
                            cout << "[1] Delete Browsers Software" << endl;
                            cout << "[2] Add Browsers Software" << endl;
                            cout << "[3] " << endl;
                            cout << "[4] Go back" << endl;
                            cout << "Choose an option (1-4): ";
                            cin >> methodChoice;

                            switch(methodChoice){
                                case 1:
                                    listBrowsers = deleteSoftware(listBrowsers,listUsers);
                                break;
                                case 2:
                                    listBrowsers = addSoftware(listBrowsers,listBrowsersToAdd,listUsers);
                                break;

                                case 3:
                                break;
                                
                                case 4:
                                back=true;
                                break;

                                default:
                                cout << "Invalid option. Please choose a valid option." << endl;
                                break;
                                
                            }
                        }
                            break;
                    case 5:
                        while(!back){  
                            cout << "Performing Socials..." << endl;
                            cout << "[1] Delete Socials Software" << endl;
                            cout << "[2] Add Socials Software" << endl;
                            cout << "[3] " << endl;
                            cout << "[4] Go back" << endl;
                            cout << "Choose an option (1-4): ";
                            cin >> methodChoice;

                            switch(methodChoice){
                                case 1:
                                    listSocials = deleteSoftware(listSocials,listUsers);
                                break;
                                    listSocials = addSoftware(listSocials,listSocialsToAdd,listUsers);
                                case 2:
                                break;

                                case 3:
                                break;
                                
                                case 4:
                                back=true;
                                break;

                                default:
                                cout << "Invalid option. Please choose a valid option." << endl;
                                break;
                                
                            }
                        }
                        break;
                    case 6:
                        cout << "Logging Out." << endl;
                        logIn = false;  // Sale del ciclo y vuelve al while anterior
                        break;
                    default:
                        cout << "Invalid option. Please choose a valid option." << endl;
                        break;
                }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            //SI EL TIPO DEL USUARIO COINCIDE CON EL ADMINISTRADOR ENTRA A ESTE BUCLE, SINO...
            } else if (listUsers.searchType(userLog, passLog) == "Administrator") {
                back=false;
                cout << " - WELCOME ADMINISTRATOR - " << endl;
                cout << "SOFTWARES:" << endl;
                cout << "[1] Games" << endl;
                cout << "[2] Office Suites" << endl;
                cout << "[3] Productions" << endl;
                cout << "[4] Browsers" << endl;
                cout << "[5] Socials" << endl;
                cout << "[6] Securities" << endl;
                cout << "[7] Log Out" << endl;
                cout << "Choose an option (1-7): ";
                cin >> loginChoice;
                
                switch (loginChoice) {
                    case 1:
                        while(!back){                     
                            cout << "\nPerforming Games...\n" << endl;
                            cout << "[1] Delete game" << endl;
                            cout << "[2] Add game" << endl;
                            cout << "[3] Change gender" << endl;
                            cout << "[4] Go back" << endl;
                            cout << "Choose an option (1-4): ";
                            cin >> methodChoice;
                            Game* gameSelect = new Game("", "", 0, listUsers, 0, "");

                            switch(methodChoice){ 
                                case 1: 
                                    listGames = deleteSoftware (listGames,listUsers);
                                break;

                                case 2:
                                    listGames = addSoftware(listGames,listGamesToAdd,listUsers);
                                break; 

                                case 3:                                    
                                    cout << "\n";
                                    for (size_t i = 0; i < listGames.size(); i++) {
                                        cout << "[" << i << "] ";
                                        Game* gamePtr = dynamic_cast<Game*>(listGames[i]);
                                        gamePtr->printName();
                                        cout << " Gender: " << gamePtr->getGender() << endl;
                                    }
                                    // Solicitar al usuario seleccionar un índice y género
                                    size_t selectedIndex;
                                    cout << "Select an index to change the gender: ";
                                    cin >> selectedIndex;

                                    if (selectedIndex < listGames.size()) {
                                        Game* selectedGame = dynamic_cast<Game*>(listGames[selectedIndex]);
                                        string newGender;
                                        cout << "Enter the new gender: ";
                                        cin >> newGender;
                                        selectedGame->setGender(newGender);
                                        cout << "Gender changed successfully.\n" << endl;

                                        for (size_t i = 0; i < listGames.size(); i++) {
                                            cout << "[" << i << "] ";
                                            Game* gamePtr = dynamic_cast<Game*>(listGames[i]);
                                            gamePtr->printName();
                                            cout << " Gender: " << gamePtr->getGender() << endl;
                                        }
                                    } else {
                                        cout << "Index out of range." << endl;
                                    }
                                break;

                                case 4:
                                back=true;
                                break;

                                default:
                                cout << "Invalid option. Please choose a valid option." << endl;
                                break;
                            }
                        }
                        break;

                    case 2:
                        break;
                    case 3:
                        while(!back){  
                        cout << "Performing Productions..." << endl;
                        cout << "[1] Delete Productions Software" << endl;
                        cout << "[2] Add Productions Software" << endl;
                        cout << "[3] " << endl;
                        cout << "[4] Go back" << endl;
                        cout << "Choose an option (1-4): ";
                        cin >> methodChoice;

                        switch(methodChoice){
                            case 1:
                                listProductions = deleteSoftware(listProductions,listUsers);
                            break;   
                            case 2:
                            break;
                                listProductions = addSoftware (listProductions,listProductionsToAdd,listUsers);
                            case 3:
                            break;
                            
                            case 4:
                            back=true;
                            break;

                            default:
                            cout << "Invalid option. Please choose a valid option." << endl;
                            break;
                            
                        }
                    }
                        break;
                    case 4:
                        while(!back){  
                            cout << "Performing Browsers..." << endl;
                            cout << "[1] Delete Browsers Software" << endl;
                            cout << "[2] Add Browsers Software" << endl;
                            cout << "[3] " << endl;
                            cout << "[4] Go back" << endl;
                            cout << "Choose an option (1-4): ";
                            cin >> methodChoice;

                            switch(methodChoice){
                                case 1:
                                    listBrowsers = deleteSoftware(listBrowsers,listUsers);
                                break;
                                case 2:
                                    listBrowsers = addSoftware(listBrowsers,listBrowsersToAdd,listUsers);
                                break;

                                case 3:
                                break;
                                
                                case 4:
                                back=true;
                                break;

                                default:
                                cout << "Invalid option. Please choose a valid option." << endl;
                                break;
                                
                            }
                        }
                            break;
                    case 5:
                        while(!back){  
                            cout << "Performing Socials..." << endl;
                            cout << "[1] Delete Socials Software" << endl;
                            cout << "[2] Add Socials Software" << endl;
                            cout << "[3] " << endl;
                            cout << "[4] Go back" << endl;
                            cout << "Choose an option (1-4): ";
                            cin >> methodChoice;

                            switch(methodChoice){
                                case 1:
                                    listSocials = deleteSoftware(listSocials,listUsers);
                                break;
                                    listSocials = addSoftware(listSocials,listSocialsToAdd,listUsers);
                                case 2:
                                break;

                                case 3:
                                break;
                                
                                case 4:
                                back=true;
                                break;

                                default:
                                cout << "Invalid option. Please choose a valid option." << endl;
                                break;
                                
                            }
                        }
                        break;
                    case 6:
                    while(!back){  
                            cout << "Performing Securities..." << endl;
                            cout << "[1] Delete Securities Software" << endl;
                            cout << "[2] Add Securities Software" << endl;
                            cout << "[3] " << endl;
                            cout << "[4] Go back" << endl;
                            cout << "Choose an option (1-4): ";
                            cin >> methodChoice;

                            switch(methodChoice){
                                case 1:
                                    listSecurities = deleteSoftware(listSecurities,listUsers);
                                break;
                                    listSecurities = addSoftware(listSecurities,listSecuritiesToAdd,listUsers);
                                case 2:
                                break;

                                case 3:
                                break;
                                
                                case 4:
                                back=true;
                                break;

                                default:
                                cout << "Invalid option. Please choose a valid option." << endl;
                                break;
                                
                            }
                        }
                        break;
                    case 7:
                        cout << "Logging Out." << endl;
                        logIn = false;  // Sale del ciclo y vuelve al while anterior
                        break;
                    default:
                        cout << "Invalid option. Please choose a valid option." << endl;
                        break;
                }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            //SI EL TIPO DEL USUARIO COINCIDE CON "NIÑO" ENTRA A ESTE BUCLE.
            } else if (listUsers.searchType(userLog, passLog) == "Children") {
                back=false;
                cout << " - WELCOME CHILDREN - " << endl;
                cout << "SOFTWARES:" << endl;
                cout << "[1] Games" << endl;
                cout << "[2] Office Suites" << endl;
                cout << "[3] Browsers" << endl;
                cout << "[4] Socials" << endl;
                cout << "[5] Log Out" << endl;
                cout << "Choose an option (1-5): ";
                cin >> loginChoice;
                
                switch (loginChoice) {
                    case 1:
                        while(!back){                     
                            cout << "\nPerforming Games...\n" << endl;
                            cout << "[1] Delete game" << endl;
                            cout << "[2] Add game" << endl;
                            cout << "[3] Change gender" << endl;
                            cout << "[4] Go back" << endl;
                            cout << "Choose an option (1-4): ";
                            cin >> methodChoice;
                            Game* gameSelect = new Game("", "", 0, listUsers, 0, "");

                            switch(methodChoice){ 
                                case 1: 
                                    listGames = deleteSoftware (listGames,listUsers);
                                break;

                                case 2:
                                    listGames = addSoftware(listGames,listGamesToAdd,listUsers);
                                break; 

                                case 3:                                    
                                    cout << "\n";
                                    for (size_t i = 0; i < listGames.size(); i++) {
                                        cout << "[" << i << "] ";
                                        Game* gamePtr = dynamic_cast<Game*>(listGames[i]);
                                        gamePtr->printName();
                                        cout << " Gender: " << gamePtr->getGender() << endl;
                                    }
                                    // Solicitar al usuario seleccionar un índice y género
                                    size_t selectedIndex;
                                    cout << "Select an index to change the gender: ";
                                    cin >> selectedIndex;

                                    if (selectedIndex < listGames.size()) {
                                        Game* selectedGame = dynamic_cast<Game*>(listGames[selectedIndex]);
                                        string newGender;
                                        cout << "Enter the new gender: ";
                                        cin >> newGender;
                                        selectedGame->setGender(newGender);
                                        cout << "Gender changed successfully.\n" << endl;

                                        for (size_t i = 0; i < listGames.size(); i++) {
                                            cout << "[" << i << "] ";
                                            Game* gamePtr = dynamic_cast<Game*>(listGames[i]);
                                            gamePtr->printName();
                                            cout << " Gender: " << gamePtr->getGender() << endl;
                                        }
                                    } else {
                                        cout << "Index out of range." << endl;
                                    }
                                break;

                                case 4:
                                back=true;
                                break;

                                default:
                                cout << "Invalid option. Please choose a valid option." << endl;
                                break;
                            }
                        }
                        break;

                    case 2:
                        break;
                    case 3:
                        while(!back){  
                            cout << "Performing Browsers..." << endl;
                            cout << "[1] Delete Browsers Software" << endl;
                            cout << "[2] Add Browsers Software" << endl;
                            cout << "[3] " << endl;
                            cout << "[4] Go back" << endl;
                            cout << "Choose an option (1-4): ";
                            cin >> methodChoice;

                            switch(methodChoice){
                                case 1:
                                    listBrowsers = deleteSoftware(listBrowsers,listUsers);
                                break;
                                case 2:
                                    listBrowsers = addSoftware(listBrowsers,listBrowsersToAdd,listUsers);
                                break;

                                case 3:
                                break;
                                
                                case 4:
                                back=true;
                                break;

                                default:
                                cout << "Invalid option. Please choose a valid option." << endl;
                                break;
                                
                            }
                        }
                            break;
                    case 4:
                        while(!back){  
                            cout << "Performing Socials..." << endl;
                            cout << "[1] Delete Socials Software" << endl;
                            cout << "[2] Add Socials Software" << endl;
                            cout << "[3] " << endl;
                            cout << "[4] Go back" << endl;
                            cout << "Choose an option (1-4): ";
                            cin >> methodChoice;

                            switch(methodChoice){
                                case 1:
                                    listSocials = deleteSoftware(listSocials,listUsers);
                                break;
                                    listSocials = addSoftware(listSocials,listSocialsToAdd,listUsers);
                                case 2:
                                break;

                                case 3:
                                break;
                                
                                case 4:
                                back=true;
                                break;

                                default:
                                cout << "Invalid option. Please choose a valid option." << endl;
                                break;
                                
                            }
                        }
                        break;
                    case 5:
                        cout << "Logging Out." << endl;
                        logIn = false;  // Sale del ciclo y vuelve al while anterior
                        break;
                    default:
                        cout << "Invalid option. Please choose a valid option." << endl;
                        break;
                }
            }
        }
    }while(true);
    
    return 0;
}