#include <iostream>
#include <string>

using namespace std;

//FUNCIONES

bool validar_condiciones(string cadena){
	if(cadena.length()%3 == 0){
		
		// devuelve 1
		return true;
	}
	else{
		
		//devuelve 0
		return false;
	 }
}

string formar_compuestos(string cad1){
	
	string compuesto= "";
	
	if ((cad1 == "UUU") || (cad1 == "UUC") || (cad1 == "CCU") || (cad1 == "CCC") || (cad1 == "CCA") || (cad1 == "CCG")){
		
		compuesto= "P";
	}
	
	else if ( (cad1 == "UCU") || (cad1 == "UCC") || (cad1 == "UCA") || (cad1 == "UCG") || (cad1 == "AGU") || (cad1 == "AGC")){
		
		compuesto= "S";
	}
	
	else if( (cad1 == "UAU") || (cad1 == "UAC") || (cad1 == "UGG") || (cad1 == "ACU") || (cad1 == "ACC") || (cad1 == "ACA") || (cad1 == "ACG")){
		
		compuesto= "T";
	}
	
	else if( (cad1 == "UGU") || (cad1 == "UGC")){
		
		compuesto= "C";
	}
	
	else if( (cad1 == "UUA") || (cad1 == "AAA") || (cad1 == "AAG") || (cad1 == "CUG") || (cad1 == "CUA") || (cad1 == "CUC") || (cad1 == "CUU") || (cad1 == "UUG")){
		
		compuesto= "L";
	}
	
	else if( (cad1 == "AUU") || (cad1 == "AUC")){
		
		compuesto="I";
	
	}
	
	else if(cad1=="AUG"){
		
		compuesto="M";
	}
	
	else if( (cad1=="GUU") || (cad1=="GUC") || (cad1=="GUA") || (cad1=="GUC")){
		
		compuesto= "V";
	}
	
	else if( (cad1=="GCU") || (cad1=="GCC") || (cad1=="GCA") || (cad1=="GCG") || (cad1=="AAU") || (cad1=="AAC") || (cad1=="GAU") || (cad1=="GAC") || (cad1=="CGU") || (cad1=="CGC") || (cad1=="CGA") || (cad1=="CGG") || (cad1=="AGA")){
		
		compuesto=="A";
	}
	
	else if((cad1=="UAG") || (cad1=="UAA") || (cad1=="UGA")){
		
		compuesto="|";
		
	}
	
	else if((cad1=="GAA") || (cad1=="GAG") || (cad1=="GGU") || (cad1=="GGC") || (cad1=="GGA") || (cad1=="GGG")){
		
		compuesto="G";
		
	}
	
	else if((cad1=="CAU") || (cad1=="CAC")){
		
		compuesto="H";
		
	}
	return compuesto;

}
			
string unir_compuestos(string cadena, bool validar){
	
	string concatenar_strings="";
	string cad1, cad2, cad3, cad4, cad5, cad6;
	
	if(validar==true){
		
		switch(cadena.length()){
			case 18:
				cad1= cadena.substr(0,3);
				cad2= cadena.substr(3,3);
				cad3= cadena.substr(6,3);
				cad4= cadena.substr(9,3);
				cad5= cadena.substr(12,3);
				cad6= cadena.substr(cadena.length()-3, 3);
				concatenar_strings= formar_compuestos(cad1) + formar_compuestos(cad2) + formar_compuestos(cad3) + formar_compuestos(cad4) + formar_compuestos(cad5) + formar_compuestos(cad6);
				break;
				
			case 15:
			
				cad1= cadena.substr(0,3);
				cad2= cadena.substr(3,3);
				cad3= cadena.substr(6,3);
				cad4= cadena.substr(9,3);
				cad5= cadena.substr(12,3);
				concatenar_strings= formar_compuestos(cad1) + formar_compuestos(cad2) + formar_compuestos(cad3) + formar_compuestos(cad4) + formar_compuestos(cad5);
				break;
			case 12:
				
				cad1= cadena.substr(0,3);
				cad2= cadena.substr(3,3);
				cad3= cadena.substr(6,3);
				cad4= cadena.substr(9,3);
				concatenar_strings= formar_compuestos(cad1) + formar_compuestos(cad2) + formar_compuestos(cad3) + formar_compuestos(cad4);
				break;
			case 9:
				
				cad1= cadena.substr(0,3);
				cad2= cadena.substr(3,3);
				cad3= cadena.substr(6,3);
				concatenar_strings= formar_compuestos(cad1) + formar_compuestos(cad2) + formar_compuestos(cad3);
				break;
			case 6:
				cad1= cadena.substr(0,3);
				cad2= cadena.substr(3,3);
				concatenar_strings= formar_compuestos(cad1) + formar_compuestos(cad2);
				break;
			case 3:
				concatenar_strings= formar_compuestos(cadena);
				break;
		}
		
		
	}
	else{
		concatenar_strings=  "Error, introduzca la cadena de manera correcta";
		
	}
	return concatenar_strings;
	
}	
//MAIN
int main(int argc, char **argv){
	
	//VARIABLES
	
	string aminoacidos= argv[1];//CONTIENE LA CADENA "UAACCUUCUACUACGUAG" U OTRA QUE SE PASE.
	
	//IMPRIMIR EN PANTALLA
	
	cout<< unir_compuestos(aminoacidos, validar_condiciones(aminoacidos))<< endl;
	
	return 0;
}
