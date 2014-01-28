
//ejercicio 2 tarea recursividad

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include <locale>
#include <sstream>

using namespace std;

int numero;
int rFinal;
int cont =0;

void laFuncion(string str){

	string temp;
	int resul;

	temp = str[cont];

	istringstream convert(temp);// para convertir de string a num la VARIABLE que esta ()
	
	if ( !(convert >> resul) ){// para convertir de string a num la VARIABLE sResul
		resul = 0;
	}

	rFinal += resul;

	cont++;
	if(cont < str.length()){
	laFuncion(str);
	}
}



int main (){

	int resul;
	int num;
	cin>>num;
	string sNum;

	ostringstream Convert;// para convertir de num a string

	Convert << num;// para convertir de num a string

	sNum = Convert.str();// para convertir de num a string

	laFuncion(sNum);



	cout << "el resultado es: " << rFinal << endl;


	return 0;
}