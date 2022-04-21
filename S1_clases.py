class Perritos: #Defino una clase
   
   especie = "Canis familiaris"
   
   def hablar(self): #Método para que ladre el perro
        return "Woof"

   def __init__(self, nombre="", edad="", raza=""): # Método mágico para definir constructor (init es inicialización). Self es la clase misma, además de ella se deben definir parámetros para el constructor. Constructor por default
        self.nombre = nombre #Crear una variable exclusiva del objeto (self se cambia por el nombre del objeto que yo voy a crear cuando llame a la clase) 
        self.edad = edad
        self.raza = raza
        
    