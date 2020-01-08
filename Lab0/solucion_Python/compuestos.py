import sys

#FUNCIONES
def validar_condiciones(cadena):
	"""
	Valida las condiciones de la entrada por linea de comando.

    Args:
        cadena: cadena de texto con aminoacidos.

    Returns:
        Si se cumplen o no las condiciones; verdadero o falso.
	"""

	if(len(cadena)%3==0):
		return True
	else:
		return False

def tranformar(cadena, booleano):
	"""
	Transforma la cadena en los compuestos equivalentes.

    Args:
        cadena: cadena de texto con aminoacidos.
        booleano: verdadero o falso.

    Returns:
        El compuesto formado.
	"""
	if booleano== False:
		return "Error, introduzca la cadena de manera correcta"
	else:
		diccionario= { 
					"UUU": "P", "UCU": "S", "UAU": "T", "UGU": "C",
					"UUC": "P", "UCC": "S", "UAC": "T", "UGC": "C",
					"UUA": "L", "UCA": "S", "UAA": "|", "UGA": "|",
					"UUG": "L", "UCG": "S", "UAG": "|", "UGG": "T",
					"CUU": "L", "CCU": "P", "CAU": "H", "CGU": "A",
					"CUC": "L", "CCC": "P", "CAC": "H", "CGC": "A",
					"CUA": "L", "CCA": "P", "CAA": "G", "CGA": "A",
					"CUG": "L", "CCG": "P", "CAG": "G", "CGG": "A",
					"AUU": "I", "ACU": "T", "AAU": "A", "AGU": "S",
					"AUC": "I", "ACC": "T", "AAC": "A", "AGC": "S",
					"AUA": "I", "ACA": "T", "AAA": "L", "AGA": "A",
					"AUG": "M", "ACG": "T", "AAG": "L", "AGG": "A",
					"GUU": "V", "GCU": "A", "GAU": "A", "GGU": "G",
					"GUC": "V", "GCC": "A", "GAC": "A", "GGC": "G",
					"GUA": "V", "GCA": "A", "GAA": "G", "GGA": "G",
					"GUC": "V", "GCG": "A", "GAG": "G", "GGG": "G",
				}
		proteinas= ""
		for i in range(0, len(cadena), 3):
			compuesto= cadena[i:i+3]
			proteinas+= diccionario[compuesto]
		return proteinas
			
#MAIN
if __name__== "__main__":

	#Argumentos por linea de comandos, sys.argv[0] es el nombre de programa
	cadena= sys.argv[1]
	
	#COMPOSICION DE FUNCIONES
	print(tranformar(cadena, validar_condiciones(cadena)))
