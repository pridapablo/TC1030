class Base:

	def __secreto(self):
		return "Secreto"

	def muestraSecreto(self):
		print(self.__secreto())

b = Base()
b.muestraSecreto()

class SubClase(Base):
    pass

a = SubClase()

print(vars(a)) # atributos de a

print(dir(a)) 
print(dir(b)) 
print(a._Base__secreto()) #Esto no debe de suceder