<!-- LOGO -->
<br />
<a name="arriba"></a>
<div align="center">
    <img src="imagenes/logo.png" alt="Logo" width="180" height="80">
 <!-- TITULO -->   
  <p align="center">
    Estructura de Datos Taller 1 - Anais Rodriguez
  </p>
</div>
<!-- INDICE -->
<details>
  <summary>Indice</summary>
  <ol>
    <li>
        <a href="#resumen-del-taller">Resumen del Taller</a>
      <ul>
          <li><a href="#consideraciones-extras">Consideraciones Extras</a></li>
      </ul>
    </li>
    <li>
        <a href="#librerías">Librerías</a>
    </li>
    <li>
        <a href="#código">Código</a>
        <ul>
          <li><a href="#setlistusers">setListUsers</a></li>
          <li><a href="#setlistgames">setListGames</a></li>
          <li><a href="#setlistofficesuites">setListOfficeSuites</a></li>
          <li><a href="#setlistproductions">setListProductions</a></li>
          <li><a href="#setlistbrowsers">setListBrowsers</a></li>
          <li><a href="#setlistsecurities">setListSecurities</a></li>
          <li><a href="#setlistsocial">setListSocial</a></li>
          <li><a href="#setlistgamestoadd">setListGamesToAdd</a></li>
          <li><a href="#setlistproductiontoadd">setListProductionsToAdd</a></li>
          <li><a href="#setlistbrowsertoadd">setListBrowsersToAdd</a></li>
          <li><a href="#setlistsecuritiestoadd">setListSecuritiesToAdd</a></li>
          <li><a href="#setlistsocialstoadd">setListSocialsToAdd</a></li>
          <li><a href="#deletesoftware">deleteSoftware</a></li>
          <li><a href="#addsoftware">addSoftware</a></li>
      </ul>
    </li>
  </ol>
</details>

<!-- RESUMEN DEL TALLER -->
## Resumen del Taller
Se desarrolló un programa para el manejo de software según los siguientes requerimiento:

* El usuario debe ser capaz de agregar o eliminar software de su biblioteca.
* Los softwares se deben dividir en tipos. (juegos, ofimática, producción, Navegadores, Seguridad, Comunicación, etc.)
* La biblioteca es compartida en un computador donde hay múltiples usuarios. Por lo tanto, si más de un usuario utiliza un software, se debe tener el permiso de todos los usuarios para borrar el software.
* Los softwares tienen restricciones de edad y niveles de seguridad para acceder a ellos.
* Se debe poder acceder al “log” de cada software (se necesita un nivel de seguridad mínimo para poder acceder al log) para conocer el uso que le están dando los usuarios.

### Consideraciones Extras
* Existen 3 tipos de usuarios, con sus respectivas restricciones
<div align="center">
    <img src="imagenes/consideraciones1.png" alt="Logo" width="800" height="300">
</div>

* Existen 6 tipos de Software
<div align="center">
    <img src="imagenes/consideraciones2.png" alt="Logo" width="800" height="300">
</div>

<p align="right">(<a href="#arriba">Ir a Inicio</a>)</p>

# Librerías
Se están utilizando un total de 13 librerías, las cuales se muestran a continuación.
<div align="center">
    <img src="imagenes/Library.png" alt="Library" width="400" height="200">
    <p>main.cpp</p>
</div>

# Código
A continuación se detallan las funcionas usadas en la creación del taller.

## setListUsers
Función de tipo `CircularListUser`, utilizada para creación de objetos y posteriormente la asignación de cada usuario en una lista circular. 

### Niños:
* niño1: {usuario: "Karim"; contraseña: "karim1234"; edad: "17"; correo: ""; log: "false"}.
* niño2: {usuario: "Amina"; contraseña: "amina5678"; edad: "16"; correo: ""; log: "false"}.
* niño3: {usuario: "Ali"; contraseña: "ali9876"; edad: "15"; correo: ""; log: "false"}.
* niño4: {usuario: "Mouna"; contraseña: "mouna4321"; edad: "14"; correo: ""; log: "false"}.

### Administradores:
* admin1: {usuario: "Juan"; contraseña: "1234"; edad: "29"; correo: "juanJ@gmail.com"; log: "false"}.

### Normales:
* usuarioNormal1: {usuario: "Carlos"; contraseña: "carlos1234"; edad: "18"; correo: "carlosR@gmail.com"; log: "false"}.
* usuarioNormal2: {usuario: "Maria"; contraseña: "maria5678"; edad: "25"; correo: "mariaS@gmail.com"; log: "false"}.
* usuarioNormal3: {usuario: "Pablo"; contraseña: "pablo999"; edad: "30"; correo: "pabloP@gmail.com"; log: "false"}.
* usuarioNormal4: {usuario: "Laura"; contraseña: "laura2021"; edad: "22"; correo: "lauraM@gmail.com"; log: "false"}.
* usuarioNormal5: {usuario: "Pedro"; contraseña: "pedro456"; edad: "27"; correo: "pedroG@gmail.com"; log: "false"}.
* usuarioNormal6: {usuario: "Sofia"; contraseña: "sofia1010"; edad: "28"; correo: "sofiaB@gmail.com"; log: "false"}.
* usuarioNormal7: {usuario: "Ana"; contraseña: "ana789"; edad: "35"; correo: "anaL@gmail.com"; log: "false"}.
* usuarioNormal8: {usuario: "Luis"; contraseña: "luis2022"; edad: "19"; correo: "luisS@gmail.com"; log: "false"}.
* usuarioNormal9: {usuario: "Diego"; contraseña: "diego777"; edad: "24"; correo: "diegoC@gmail.com"; log: "false"}.
* usuarioNormal10: {usuario: "Valeria"; contraseña: "valeria444"; edad: "31"; correo: "valeriaR@gmail.com"; log: "false"}.
<div align="center">
    <img src="imagenes/setListUsers.png" alt="Usuarios" width="800" height="350">
    <p>main.cpp</p>
</div>

Para insertar cada usuario en un nodo se realiza una validación inicial para determinar si la lista está vacía, y asignar un usuario al primer nodo, caso contrario se agregará al nodo siguiente.

<div align="center">
    <img src="imagenes/CircularListUser.png" alt="CircularListUser" width="700" height="450">
    <p>CircularListUser.h</p>
</div>
<p align="right">(<a href="#arriba">Ir a Inicio</a>)</p>

## setListGames

Función de tipo `vector<Software*>`, utilizada para creación de objetos y posteriormente la asignación de los juegos en un vector. 

### Software de tipo Juego
* juego1: {nombre: "The Legend of Zelda: Breath of the Wild"; developer: "Nintendo"; clasificacionEdad: "15"; listaUsuarios: "listUsers"; precio: "58990"; tipo: "Adventure"}.
* juego2: {nombre: "The Legend of Zelda: Tears of the Kingdom"; developer: "Nintendo"; clasificacionEdad: "15"; listaUsuarios: "listUsers"; precio: "68790"; tipo: "Adventure"}.
* juego3: {nombre: "Pokemon Violet"; developer: "The Pokemon Company"; clasificacionEdad: "15"; listaUsuarios: "listUsers"; precio: "58990"; tipo: "Role-playing"}.
* juego4: {nombre: "Pokemon Scarlet"; developer: "The Pokemon Company"; clasificacionEdad: "15"; listaUsuarios: "listUsers"; precio: "58990"; tipo: "Role-playing"}.
* juego5: {nombre: "VALORANT"; developer: "Riot Games"; clasificacionEdad: "13"; listaUsuarios: "listUsers"; precio: "0"; tipo: "Tactical Shooter"}.
* juego6: {nombre: "Counter-Strike 2"; developer: "Valve Corporation"; clasificacionEdad: "13"; listaUsuarios: "listUsers"; precio: "0"; tipo: "Tactical Shooter"}.
* juego7: {nombre: "Pokemon Unite"; developer: "Nintendo"; clasificacionEdad: "15"; listaUsuarios: "listUsers"; precio: "0"; tipo: "MOBA"}.
* juego8: {nombre: "League of Legends"; developer: "Riot Games"; clasificacionEdad: "13"; listaUsuarios: "listUsers"; precio: "0"; tipo: "MOBA"}.
* juego9: {nombre: "Fornite"; developer: "Epic Games"; clasificacionEdad: "13"; listaUsuarios: "listUsers"; precio: "0"; tipo: "FPS"}.
* juego10: {nombre: "Apex Legends"; developer: "Respawn Entertainment"; clasificacionEdad: "16"; listaUsuarios: "listUsers"; precio: "0"; tipo: "FPS"}.
* juego11: {nombre: "FINAL FANTASY XIV"; developer: "Square Enix"; clasificacionEdad: "13"; listaUsuarios: "listUsers"; precio: "22990"; tipo: "MMORPG"}.
* juego12: {nombre: "World of Warcraft"; developer: "Blizzard Entertainment"; clasificacionEdad: "13"; listaUsuarios: "listUsers"; precio: "15600"; tipo: "MMORPG"}.
* juego13: {nombre: "Ori and the Will of the Wisps"; developer: "Moon Studios"; clasificacionEdad: "7"; listaUsuarios: "listUsers"; precio: "24990"; tipo: "Puzzle"}.
* juego14: {nombre: "Hollow Knight"; developer: "Team Cherry"; clasificacionEdad: "7"; listaUsuarios: "listUsers"; precio: "8300"; tipo: "Metroidvania"}.
* juego15: {nombre: "ENDER LILIES: Quietus of the Knights"; developer: "Live Wire"; clasificacionEdad: "12"; listaUsuarios: "listUsers"; precio: "9500"; tipo: "Metroidvania"}.

### Software de tipo Juego 18+
* juego16: {nombre: "God of War: Ragnarok"; developer: "SIE Santa Monica Studio"; clasificacionEdad: "18"; listaUsuarios: "listUsers"; precio: "64990"; tipo: "Action"}.
* juego17: {nombre: "Catherine Full Body"; developer: "Atlus"; clasificacionEdad: "18"; listaUsuarios: "listUsers"; precio: "14500"; tipo: "Puzzle"}.
* juego18: {nombre: "Shadow Warrior"; developer: "Flying Wild Hog"; clasificacionEdad: "18"; listaUsuarios: "listUsers"; precio: "15500"; tipo: "Action"}.
* juego19: {nombre: "Grand theft Auto V"; developer: "Rockstar Games"; clasificacionEdad: "18"; listaUsuarios: "listUsers"; precio: "27192"; tipo: "Open World"}.
* juego20: {nombre: "The Witcher 3: Wild Hunt"; developer: "CD PROJEKT RED"; clasificacionEdad: "18"; listaUsuarios: "listUsers"; precio: "18300"; tipo: "Open World"}.
<div align="center">
    <img src="imagenes/setListGames.png" alt="Juegos" width="800" height="400">
    <p>main.cpp</p>
</div>
<div align="center">
    <img src="imagenes/vectorGame.png" alt="vectorGame" width="800" height="400">
    <p>Game.h</p>
</div>
<p align="right">(<a href="#arriba">Ir a Inicio</a>)</p>

## setListOfficeSuites

Función de tipo `vector<Software*>`, utilizada para creación de matrices, objetos y posteriormente la asignación de los software de ofimática en un vector. 

### Software de tipo Ofimatica
* ofimatica1: {nombre: "Microsoft Word"; developer: "Microsoft"; clasificacionEdad: "13"; listaUsuarios: "listUsers"; precio: "139990"; cantidadarchivos: "1000"}.
* ofimatica2: {nombre: "Microsoft Excel"; developer: "Microsoft"; clasificacionEdad: "13"; listaUsuarios: "listUsers"; precio: "139990"; cantidadarchivos: "200"}.
* ofimatica3: {nombre: "Microsoft PowerPoint"; developer: "Microsoft"; clasificacionEdad: "13"; listaUsuarios: "listUsers"; precio: "139990"; cantidadarchivos: "700"}.
* ofimatica4: {nombre: "Microsoft Outlook"; developer: "Microsoft"; clasificacionEdad: "13"; listaUsuarios: "listUsers"; precio: "139990"; cantidadarchivos: "2000"}.
* ofimatica5: {nombre: "Microsoft OneNote"; developer: "Microsoft"; clasificacionEdad: "13"; listaUsuarios: "listUsers"; precio: "139990"; cantidadarchivos: "100"}.
<div align="center">
    <img src="imagenes/setListOfficeSuites.png" alt="Ofimatica" width="800" height="300">
    <p>main.cpp</p>
</div>
<div align="center">
    <img src="imagenes/vectorOfficeSuite.png" alt="vectorOfficeSuite" width="800" height="300">
    <p>OfficeSuite.h</p>
</div>
<p align="right">(<a href="#arriba">Ir a Inicio</a>)</p>

## setListProductions

Función de tipo `vector<Software*>`, utilizada para creación de objetos y posteriormente la asignación de los software de producción en un vector. 

### Software de tipo Produccion
* produccion1: {nombre: "Audacity"; developer: "The Audacity Team"; clasificacionEdad: "18"; listaUsuarios: "listUsers"; precio: "0"; tipo: "Audio"}.
* produccion2: {nombre: "Vegas Pro"; developer: "Sony Creative Software"; clasificacionEdad: "18"; listaUsuarios: "listUsers"; precio: "54000"; tipo: "Video"}.
* produccion3: {nombre: "OBS Studio"; developer: "Lain Bailey"; clasificacionEdad: "18"; listaUsuarios: "listUsers"; precio: "0"; tipo: "Streaming"}.
* produccion4: {nombre: "Adobe Photoshop"; developer: "Adobe Inc"; clasificacionEdad: "18"; listaUsuarios: "listUsers"; precio: "163200"; tipo: "Image"}.
<div align="center">
    <img src="imagenes/setListProductions.png" alt="Produccion" width="850" height="250">
    <p>main.cpp</p>
</div>
<div align="center">
    <img src="imagenes/vectorProduction.png" alt="vectorProduction" width="800" height="250">
    <p>Production.h</p>
</div>
<p align="right">(<a href="#arriba">Ir a Inicio</a>)</p>

## setListBrowsers

Función de tipo `vector<Software*>`, utilizada para creación de objetos, relacionar el historial con un navegador y posteriormente la asignación de los navegadores en un vector. 

### Software de tipo Navegador
* historial1: {"https://www.op.gg/summoners/kr/hide%20on%20bush",
                            "https://youtu.be/fYwRsJAPfec?si=2wv1GfzPa8RnlXpt",
                            "https://www.youtube.com/watch?v=QK7JQl9jNzM",
                            "https://www.youtube.com/watch?v=yRYFKcMa_Ek",
                            "https://youtu.be/CsHiG-43Fzg?si=vjk-fsDLadZNEpC9",
                            "https://www.youtube.com/watch?v=pxAiwZlzSD8",
                            "https://www.youtube.com/watch?v=-wPg1tNEWmo",
                            "https://youtu.be/mYEA5A0Bjyo?si=GHS8xb3t6ZwznDTd",
                            "https://www.youtube.com/watch?v=fuAE3U1NvOs",
                            "https://www.youtube.com/watch?v=ZkbDwgH1lQE"}.
* navegador1: {nombre: "Opera GX"; developer: "Opera Software"; clasificacionEdad: "13"; listaUsuarios: "listUsers"; precio: "0"; historial: "historial1"}.
* historial2: {"https://www.artstation.com/artwork/AlaEBq",
                            "https://www.artstation.com/artwork/w0PNrg",
                            "https://www.artstation.com/artwork/Xg9xWl",
                            "https://www.artstation.com/artwork/RyONoW",
                            "https://www.artstation.com/artwork/048Z6y",
                            "https://www.artstation.com/artwork/8by54E",
                            "https://www.artstation.com/artwork/ZaXL2R",
                            "https://www.artstation.com/artwork/EvK1wq",
                            "https://www.artstation.com/artwork/r9JNdG",
                            "https://www.artstation.com/artwork/6bNqdO"}.
* navegador2: {nombre: "Microsoft Edge"; developer: "Microsoft Corporation"; clasificacionEdad: "13"; listaUsuarios: "listUsers"; precio: "0"; historial: "historial2"}.
<div align="center">
    <img src="imagenes/setListBrowsers.png" alt="Navegador" width="800" height="400">
    <p>main.cpp</p>
</div>
<div align="center">
    <img src="imagenes/vectorBrowser.png" alt="vectorBrowser" width="800" height="250">
    <p>Browser.h</p>
</div> 
<p align="right">(<a href="#arriba">Ir a Inicio</a>)</p>

## setListSecurities

Función de tipo `vector<Software*>`, utilizada para creación de objetos y posteriormente la asignación de los software de seguridad en un vector. 

### Software de tipo Seguridad
* seguridad1: {nombre: "Malwarebytes Anti-Ransomware"; developer: "Malwarebytes Corporation"; clasificacionEdad: "18"; listaUsuarios: "listUsers"; precio: "7000"; tipo: "Ransomware"}.
* seguridad2: {nombre: "Ad-Aware"; developer: "Lavasoft"; clasificacionEdad: "18"; listaUsuarios: "listUsers"; precio: "0"; tipo: "Spyware"}.
* seguridad3: {nombre: "Symantec Endpoint Protection"; developer: "Broadcom Inc"; clasificacionEdad: "18"; listaUsuarios: "listUsers"; precio: "23700"; tipo: "Botnets"}.
* seguridad4: {nombre: "Sophos Intercept X"; developer: "Sophos Group plc"; clasificacionEdad:18""; listaUsuarios: "listUsers"; precio: "122400"; tipo: "Rootkits"}.
* seguridad5: {nombre: "Norton 360"; developer: "Norton"; clasificacionEdad: "18"; listaUsuarios: "listUsers"; precio: "16000"; tipo: "Computer Worms"}.
* seguridad6: {nombre: "Kaspersky Total Security"; developer: "Kaspersky Lab"; clasificacionEdad: "18"; listaUsuarios: "listUsers"; precio: "29610"; tipo: "Trojans"}.
<div align="center">
    <img src="imagenes/setListSecurities.png" alt="Seguridad" width="850" height="300">
    <p>main.cpp</p>
</div>
<div align="center">
    <img src="imagenes/vectorSecurity.png" alt="vectorSecurity" width="800" height="250">
    <p>Security.h</p>
</div> 
<p align="right">(<a href="#arriba">Ir a Inicio</a>)</p>

## setListSocial

Función de tipo `vector<Software*>`, utilizada para creación de objetos, relacionar la lista de amigos con el software y posteriormente la asignación de los software sociales en un vector. 

### Software de tipo Social
* social1: {nombre: "Discord"; developer: "Electron"; clasificacionEdad: "18"; listaUsuarios: "listUsers"; precio: "0"; usuarios: "listfriends18"}.
* social2: {nombre: "WhatsApp"; developer: a"Facebook Inc"; clasificacionEdad: "16"; listaUsuarios: "listUsers"; precio: "0"; usuarios: "listfriends"}.
<div align="center">
    <img src="imagenes/setListSocials.png" alt="Social" width="800" height="300">
    <p>main.cpp</p>
</div>
<div align="center">
    <img src="imagenes/vectorSocial.png" alt="vectorSocial" width="800" height="250">
    <p>Social.h</p>
</div> 
<p align="right">(<a href="#arriba">Ir a Inicio</a>)</p>

## setListGamesToAdd

Función de tipo `vector<Software*>`, utilizada para creación de objetos y posteriormente agregar nuevos juegos en un vector. 

* juego1: {nombre: "Assassin's Creed Valhalla"; developer: "Ubisoft"; clasificacionEdad: "18"; listaUsuarios: "listUsers"; precio: "4999"; tipo: "Action-Adventure"}.
* juego2: {nombre: "The Elder Scrolls V: Skyrim"; developer: "Bethesda"; clasificacionEdad: "17"; listaUsuarios: "listUsers"; precio: "3999"; tipo: "Action-RPG"}.
* juego3: {nombre: "Call of Duty: Warzone"; developer: "Activision"; clasificacionEdad: "18"; listaUsuarios: "listUsers"; precio: "0"; tipo: "Battle Royale"}.
* juego4: {nombre: "Among Us"; developer: "InnerSloth"; clasificacionEdad: "10"; listaUsuarios: "listUsers"; precio: "499"; tipo: "Social Deduction"}.
* juego5: {nombre: "Genshin Impact"; developer: "miHoYo"; clasificacionEdad: "12"; listaUsuarios: "listUsers"; precio: "0"; tipo: "Action-RPG"}.
* juego6: {nombre: "Terraria"; developer: "Re-Logic"; clasificacionEdad: "10"; listaUsuarios: "listUsers"; precio: "1499"; tipo: "Sandbox"}.
* juego7: {nombre: "Overwatch"; developer: "Blizzard Entertainment"; clasificacionEdad: "13"; listaUsuarios: "listUsers"; precio: "1999"; tipo: "First-Person Shooter"}.
* juego8: {nombre: "Animal Crossing: New Horizons"; developer: "Nintendo"; clasificacionEdad: "3"; listaUsuarios: "listUsers"; precio: "5999"; tipo: "Life Simulation"}.
* juego9: {nombre: "Hades"; developer: "Supergiant Games"; clasificacionEdad: "12"; listaUsuarios: "listUsers"; precio: "1999"; tipo: "Roguelike"}.
* juego10: {nombre: "Celeste"; developer: "Maddy Makes Games"; clasificacionEdad: "10"; listaUsuarios: "listUsers"; precio: "999"; tipo: "Platformer"}.
<div align="center">
    <img src="imagenes/setListGamesToAdd.png" alt="setListGamesToAdd" width="800" height="300">
    <p>main.cpp</p>
</div>
<p align="right">(<a href="#arriba">Ir a Inicio</a>)</p>

## setListProductionsToAdd

Función de tipo `vector<Software*>`, utilizada para creación de objetos y posteriormente agregar nuevos software de producción en un vector. 

* produccion5: {nombre: "Logic Pro X"; developer: "Apple Inc"; clasificacionEdad: "18"; listaUsuarios: "listUsers"; precio: "199.99"; tipo: "Audio"}.
* produccion6: {nombre: "Premiere Pro"; developer: "Adobe Inc"; clasificacionEdad: "18"; listaUsuarios: "listUsers"; precio: "239.88"; tipo: "Video"}.
* produccion7: {nombre: "Streamlabs OBS"; developer: "Streamlabs"; clasificacionEdad: "18"; listaUsuarios: "listUsers"; precio: "0"; tipo: "Streaming"}.
* produccion8: {nombre: "GIMP"; developer: "The GIMP Team"; clasificacionEdad: "18"; listaUsuarios: "listUsers"; precio: "0"; tipo: "Image"}.
<div align="center">
    <img src="imagenes/setListProductionsToAdd.png" alt="setListProductionsToAdd" width="800" height="200">
    <p>main.cpp</p>
</div>
<p align="right">(<a href="#arriba">Ir a Inicio</a>)</p>

## setListBrowsersToAdd

Función de tipo `vector<Software*>`, utilizada para creación de objetos, relacionar el historial con un navegador y posteriormente agregar nuevos navegadores en un vector. 

* historial3: {""}.
* navegador1: {nombre: "Mozilla Firefox"; developer: "Mozilla Foundation"; clasificacionEdad: "13"; listaUsuarios: "listUsers"; precio: "0"; historial: "historial3"}.
 * navegador2: {nombre: "Google Chrome"; developer: "Google LLC"; clasificacionEdad: "13"; listaUsuarios: "listUsers"; precio: "0"; historial: "historial3"}.
 * navegador3: {nombre: "Safari"; developer: "Apple Inc"; clasificacionEdad: "13"; listaUsuarios: "listUsers"; precio: "0"; historial: "historial3"}.
 * navegador4: {nombre: "Opera"; developer: "Opera Software"; clasificacionEdad: "13"; listaUsuarios: "listUsers"; precio: "0"; historial: "historial3"}.
<div align="center">
    <img src="imagenes/setListBrowsersToAdd.png" alt="setListBrowsersToAdd" width="800" height="300">
    <p>main.cpp</p>
</div>
<p align="right">(<a href="#arriba">Ir a Inicio</a>)</p>

## setListSecuritiesToAdd

Función de tipo `vector<Software*>`, utilizada para creación de objetos y posteriormente agregar nuevos software de seguridad en un vector. 

* seguridad1: {nombre: "Avast Antivirus"; developer: "Avast Software"; clasificacionEdad: "18"; listaUsuarios: "listUsers"; precio: "0"; tipo: "Viruses"}.
* seguridad2: {nombre: "McAfee Total Protection"; developer: "McAfee LLC"; clasificacionEdad: "18"; listaUsuarios: "listUsers"; precio: 2999"; tipo: "Malware"}.
* seguridad3: {nombre: "Bitdefender Antivirus Plus"; developer: "Bitdefender"; clasificacionEdad: "18"; listaUsuarios: "listUsers"; precio: "1999"; tipo: "Phishing"}.
* seguridad4: {nombre: "ESET NOD32 Antivirus"; developer: "ESET"; clasificacionEdad: "18"; listaUsuarios: "listUsers"; precio: "2995"; tipo: "Spyware"}.
<div align="center">
    <img src="imagenes/setListSecuritiesToAdd.png" alt="setListSecuritiesToAdd" width="800" height="300">
    <p>main.cpp</p>
</div>
<p align="right">(<a href="#arriba">Ir a Inicio</a>)</p>

## setListSocialsToAdd

Función de tipo `vector<Software*>`, utilizada para creación de objetos, relacionar la lista de amigos con el software y posteriormente agregar nuevos software sociales en un vector.

* social3: {nombre: "Facebook"; developer: "Meta Platforms, Inc."; clasificacionEdad: "18"; listaUsuarios: "listUsers"; precio: "0"; usuarios: "listfriends18"}.
* social4: {nombre: "Instagram"; developer: "Meta Platforms, Inc."; clasificacionEdad: "17"; listaUsuarios: "listUsers"; precio: "0"; usuarios: "listfriends"}.
<div align="center">
    <img src="imagenes/setListSocialsToAdd.png" alt="setListSocialsToAdd" width="800" height="300">
    <p>main.cpp</p>
</div>
<p align="right">(<a href="#arriba">Ir a Inicio</a>)</p>

## deleteSoftware

Función de tipo `vector<Software*>`, utilizada para eliminar un software de la biblioteca, con la condición de que es necesaria la aprobación de todos los usuarios. 
<div align="center">
    <img src="imagenes/deleteSoftware.png" alt="deleteSoftware" width="800" height="350">
    <p>main.cpp</p>
</div>
<p align="right">(<a href="#arriba">Ir a Inicio</a>)</p>

## addSoftware

Función de tipo `vector<Software*>`, utilizada para agregar un software de la biblioteca. 
<div align="center">
    <img src="imagenes/addSoftware.png" alt="addSoftware" width="800" height="300">
    <p>main.cpp</p>
</div>
<p align="right">(<a href="#arriba">Ir a Inicio</a>)</p>
