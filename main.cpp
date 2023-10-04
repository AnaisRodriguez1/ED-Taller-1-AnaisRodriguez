#include <iostream>
#include <stack>
#include <string>
#include "CircularListUser.h"
#include "Software.h"
#include "OfficeSuite.h"
#include "Production.h"
#include "Game.h"
#include "Browser.h"
#include "Security.h"
#include "Social.h"
#include "NodeUser.h"
#include <vector>

using namespace std;

int main(){

    // CONDICIONES DE ENTREGA 
    CircularListUser listUsers; //lista circular de punteros de  Usuarios
    stack<Software*> listGames; // lista de pila de punteros para Software de Juego
    stack<OfficeSuite*> listOffices; // lista de pila de punteros para Software de Ofimática
    stack<Production*> listProductions; // lista de pila de punteros para Software de Producción
    stack<Browser*> listBrowsers; // lista de pila de punteros para Software de Navegador
    stack<Security*> listSecurities; // lista de pila de punteros para Software de Seguridad
    stack<Social*> listSocials; // lista de pila de punteros para Software de Social

    //POBLAR SOFTWARE DE USUARIOS*************
    //4 NIÑOS
    NodeUser *u1 = new NodeUser("Carlos", "carlos1234", 17,"",false);
    NodeUser *u2 = new NodeUser("Ana", "ana5678", 16,"",false);
    NodeUser *u3 = new NodeUser("Pedro", "pedro9876", 15,"",false);
    NodeUser *u4 = new NodeUser("Maria", "maria4321", 14,"",false);
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

    //POBLAR SOFTWARE DE JUEGOS*************
    
    Game *game1 = new Game("The Legend of Zelda™: Breath of the Wild","Nintendo",15,listUsers,58990,"Adventure");
    Game *game2 = new Game("The Legend of Zelda™: Tears of the Kingdom","Nintendo",15,listUsers,68790,"Adventure");
    Game *game3 = new Game("Pokémon™ Violet","The Pokémon Company",15,listUsers,58990,"Role-playing");
    Game *game4 = new Game("Pokémon™ Scarlet","The Pokémon Company",15,listUsers,58990,"Role-playing");
    Game *game5 = new Game("VALORANT","Riot Games",13,listUsers,0,"Tactical Shooter");
    Game *game6 = new Game("Counter-Strike 2","Valve Corporation",13,listUsers,0,"Tactical Shooter");
    Game *game7 = new Game("Pokémon Unite™","Nintendo",15,listUsers,0,"MOBA");
    Game *game8 = new Game("League of Legends","Riot Games",13,listUsers,0,"MOBA");
    Game *game9 = new Game("Fornite","Epic Games",13,listUsers,0,"FPS");
    Game *game10 = new Game("Apex Legends","Respawn Entertainment",16,listUsers,0,"FPS");
    Game *game11 = new Game("FINAL FANTASY XIV","Square Enix",13,listUsers,22990,"MMORPG");
    Game *game12 = new Game("World of Warcraft","Blizzard Entertainment",13,listUsers,15600,"MMORPG");
    Game *game13 = new Game("Ori and the Will of the Wisps","Moon Studios",7,listUsers,24990,"Puzzle");
    Game *game14 = new Game("Holow Knight","Team Cherry",7,listUsers,8300,"Metroidvania");
    Game *game15 = new Game("ENDER LILIES: Quietus of the Knights","Live Wire",12,listUsers,9500,"Metroidvania");

    //JUEGOS 18+
    Game *game16 = new Game("God of War: Ragnarok","SIE Santa Monica Studio",18,listUsers,64990,"Action");
    Game *game17 = new Game("Catherine Full Body","Atlus",18,listUsers,14500,"Puzzle");
    Game *game18 = new Game("Shadow Warrior","Flying Wild Hog",18,listUsers,15500,"Action");
    Game *game19 = new Game("Grnad theft Auto V","Rockstar Games",18,listUsers,27192,"Open World");
    Game *game20 = new Game("The Witcher 3: Wild Hunt","CD PROJEKT RED",18,listUsers,18300,"Open World");

    listGames.push(game1);listGames.push(game2);listGames.push(game3);listGames.push(game4);listGames.push(game5);
    listGames.push(game6);listGames.push(game7);listGames.push(game8);listGames.push(game9);listGames.push(game10);
    listGames.push(game11);listGames.push(game12);listGames.push(game13);listGames.push(game14);listGames.push(game15);
    listGames.push(game16);listGames.push(game17);listGames.push(game18);listGames.push(game19);listGames.push(game20);

    //POBLAR SOFTWARE DE OFIMATICA*************
    OfficeSuite *fs1 = new OfficeSuite("Microsoft Word","Microsoft",13,listUsers,139990,1000);
    OfficeSuite *fs2 = new OfficeSuite("Microsoft Excel","Microsoft",13,listUsers,139990,200);
    OfficeSuite *fs3 = new OfficeSuite("Microsoft PowerPoint","Microsoft",13,listUsers,139990,700);
    OfficeSuite *fs4 = new OfficeSuite("Microsoft Outlook","Microsoft",13,listUsers,139990,2000);
    OfficeSuite *fs5 = new OfficeSuite("Microsoft OneNote","Microsoft",13,listUsers,139990,100);

    listOffices.push(fs1);listOffices.push(fs2);listOffices.push(fs3);listOffices.push(fs4);listOffices.push(fs5);

    //POBLAR SOFTWARE DE PRODUCCION*************
    Production *p1 = new Production("Audacity","The Audacity Team",18,listUsers,0,"Audio");
    Production *p2 = new Production("Vegas Pro","Sony Creative Software,",18,listUsers,54000,"Video");
    Production *p3 = new Production("OBS Studio","Lain Bailey",18,listUsers,0,"Streaming");
    Production *p4 = new Production("Adobe Photoshop","Adobe Inc",18,listUsers,163200,"Image");

    listProductions.push(p1);listProductions.push(p2);listProductions.push(p3);listProductions.push(p4);

    //POBLAR SOFTWARE DE NAVEGADOR*************
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

    //POBLAR SOFTWARE DE SEGURIDAD*************
    Security *s1 = new Security("Malwarebytes Anti-Ransomware","Malwarebytes Corporation",18,listUsers,7000,"Ransomware");
    Security *s2 = new Security("Ad-Aware","Lavasoft",18,listUsers,0,"Spyware");
    Security *s3 = new Security("Symantec Endpoint Protection","Broadcom Inc",18,listUsers,23700,"Botnets");
    Security *s4 = new Security("Sophos Intercept X","Sophos Group plc",18,listUsers,122400,"Rootkits");
    Security *s5 = new Security("Norton 360","Norton",18,listUsers,16000,"Computer Worms");
    Security *s6 = new Security("Kaspersky Total Security","Kaspersky Lab",18,listUsers,29610,"Trojans");

    listSecurities.push(s1);listSecurities.push(s2);listSecurities.push(s3);listSecurities.push(s4);listSecurities.push(s5);listSecurities.push(s6);

    //POBLAR SOFTWARE DE SOCIAL*************
    stack<NodeUser*> listFriends18;
    listFriends18.push(u15);listFriends18.push(u14);
    Social *soc1 = new Social("Discord","Electron",18,listUsers,0,listFriends18);

    stack<NodeUser*> listFriends;
    listFriends.push(u1);listFriends.push(u2);
    Social *soc2 = new Social("WhatsApp","Facebook Inc",16,listUsers,0,listFriends);

    //listUsers.see();

    string userLog;
    string passLog;

    cout << "WELCOME TO WORKSHOP 1:\n Enter username:";
    cin >> userLog;
    cout << "Enter password:";
    cin >> passLog;

    while (listUsers.searchType(userLog, passLog) == "Not valid") {
        cout << "Invalid username and/or password.:\n Enter username:";
        cin >> userLog;
        cout << "Enter password:";
        cin >> passLog;
    }

    if(listUsers.searchType(userLog,passLog) == "Normal User"){
        cout << "WELCOME NORMAL USER"

    }
    else if(listUsers.searchType(userLog,passLog) == "Administrator"){

    }
    else if(listUsers.searchType(userLog,passLog) == "Children"){

    }



}