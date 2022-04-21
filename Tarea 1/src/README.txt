Código fuente del juego "serpientes y escaleras" creado por Pablo Banzo Prida
A01782031@tec.mx (en colaboración con Oswaldo Ilhuicatzi Mendizábal) para la clase TC1030
con el profesor Jesús Leopoldo Llano García.

Para ejecutar el código es necesario instalar la librería "random" mediante la 
instrucción "pip install random", o bien, "pip3 install random" según la configuración
que se tenga de python 3.

El código está escrito siguiendo el paradigma de programación orientada a objetos (POO),
por lo cual las funciones necesarias para la ejecución se encuentran contenidas dentro
de clases respectivas a los objetos. Existen tres tipos de objetos: MyGame, Player y
Dice, cada uno con sus correspondientes métodos y atributos según fue requerido para la 
implementación del juego. Cabe agregar que por simplicidad de diseño, todas las clases
se mantuvieron sin modificadores de acceso para preservar el default de Python, es decir,
clases públicas las cuales pueden ser accesadas desde cualquier parte del programa.

Las dos instancias de la clase Player modelan a dos jugadores inicializados con una
casilla (1) de partida sobre el tablero y un identificador númerico (1 o 2). Esta decición de
diseño se realizó con el propósito de poder acceder a la ubicación de cada jugador en cualquier
etapa del juego. 

El método move() de esta clase es el que efectua todas las acciones que realizan los jugadores 
después de que se tira el dado, que es un objeto (instancia única) de clase Dice cuyo método 
roll() regresa un entero aleatorio utilizado como parámetro en la llamada al método move()
de los jugadores.

La utilización de los dos objetos previamente descritos permite llamadas sencillas a sus
métodos mediante una tercer clase que realiza la ejecución del juego con su método start().
La instancia de clase MyGame se inicializa automáticamente con un tablero dentro de ella con el 
método generateBoard(), por lo que no se vió necesario crear una clase "tablero".

Las impresiones de texto del juego suceden principalmente durante la llamada al método turn() de
la clase MyGame, esta sección del programa se estructuró así dado que es necesario que lo contenido
dentro de este método se ejecute para cada uno de los jugadores del juego (en este caso 2).