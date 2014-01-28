
//Programe un algoritmo recursivo que permita invertir un número. Ejemplo: Entrada: 123 Salida: 321


#include <cstdlib>
#include <iostream>
#include<string>

#include <iomanip>
#include <locale>
#include <sstream>
using namespace std;


int num;
string sNum;
int cont=0;
int lStr;
string hola;

string  reverse(int cont){

	string reversed;


		if(cont<(lStr )){

			//reversed += sNum[lStr -1 - cont];
			hola += sNum[lStr -1 - cont];
			cont++;
			reverse(cont);
		}

		
		return hola;
}


int main(){

	string sResul;
	int resul;
	cin>> num;

	ostringstream Convert;// para convertir de num a string

	Convert << num;// para convertir de num a string

	sNum = Convert.str();// para convertir de num a string

	lStr = sNum.length();
	
	sResul= reverse(cont);

	istringstream convert(hola);// para convertir de string a num la VARIABLE sResul
	

	if ( !(convert >> resul) ){// para convertir de string a num la VARIABLE sResul
		resul = 0;
	}// para convertir de string a num la VARIABLE sResul // si el string no es convertible regresa 0


/*
cout << sResul << endl;
cout << resul + resul << endl;
cout<< hola + hola<<endl;
*/
	cout << resul + resul << endl;
}