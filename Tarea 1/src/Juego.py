"""Autoría: Pablo Banzo Prida - A01782031
    (en colaboración con Oswaldo Ilhuicatzi Mendizábal)
"""
import random

class MyGame: 

    def __init__(self): 
        self.turno = 1
        self.dado = Dice()
        self.p1 = Player(1)
        self.p2 = Player(2)
        self.list = []
        self.board = self.generateBoard(self.list)

    def generateBoard(self,board):
        for i in range(24):
            board.append("N")

        for j in range(3): # Snakes and Ladders
            board.append("S")
            board.append("L")
            random.shuffle(board)

        return board
    
    def turn(self,jugador,turn):
        num = self.dado.roll()
        print("------ Turno", turn, "del jugador", jugador.id,"------")
        print("Te encuentras en la casilla", jugador.tile)
        print("Tiraste el dado...")
        print("Obtuviste un", num)
        jugador.move(num,self.board)
        print("Ahora te encuentras en la casilla", jugador.tile)
        print("---------- Fin del Turno ----------")
            
        
    def start(self):
        print("Iniciando Juego...")
        print("Bienvenid@")

        selec = input("Presiona C para continuar con el siguiente turno o T para terminar el juego \n")
        if selec == "C" or selec == "c":
            self.turn(self.p1,self.turno)
            self.turn(self.p2,self.turno)
            self.turno += 1
        elif selec == "T" or selec == "t":
            quit()
        else:
           print("Opción invalida, por favor presiona C para continuar con el siguiente turno o T para terminar el juego \n")

        while self.turno <= 7:
            selec = input("Elija C o T \n")
            if selec == "C" or selec == "c":
                self.turn(self.p1,self.turno)
                self.turn(self.p2,self.turno)
                self.turno += 1
            elif selec == "T" or selec == "t"  or selec == "E":
                print("¡Gracias por jugar!!!")
                break
            else:
                print("Opción invalida \n")
            
            if self.turno > 7:
                print("------------------------------------------------")
                print("|   El número máximo de turnos se ha alcanzado  |")
                print("|                                               |")
                print("|                  GAME OVER                    |")
                print("|                                               |")
                print("------------------------------------------------")

class Player:
    def __init__(self, id):
        self.id = id
        self.tile = 1

    def move(self, no_tile, board):
        self.tile += no_tile
        
        if self.tile >= 30:
            print("------------------------------------------------")
            print("|            El jugador", self.id, "ha ganado             |")
            print("|                                               |")
            print("|                  GAME OVER                    |")
            print("|                                               |")
            print("------------------------------------------------")
            exit()
        else:
            if board[self.tile] == "L":
                print("¡Casilla especial! Escalera ganaste tres posiciones")
                self.tile += 3
            elif board[self.tile] == "S":
                print("¡Casilla especial! Serpiente :( perdiste tres posiciones")
                self.tile -= 3
            if self.tile >= 30:
                print("------------------------------------------------")
                print("|            El jugador", self.id, "ha ganado             |")
                print("|                                               |")
                print("|                  GAME OVER                    |")
                print("|                                               |")
                print("------------------------------------------------")
                exit()
            
class Dice:
    def __init__(self):
        self.sides = 6

    def roll(self):
        num = random.randint(1,self.sides)
        return num

if __name__ == "__main__":
    Juego1 = MyGame()
    Juego1.start()