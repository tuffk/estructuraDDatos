/*
Programe una aplicación que reciba como argumentos el nombre de un archivo TXT y una frase
compuesta por una o más palabras y que imprima como resultado el número de veces que
aparece la frase en el archivo.
*/
/*
Modifique el ejercicio anterior para que, además de mostrar el número de ocurrencias de la frase
en el archivo, imprima las líneas que contienen dicha frase con el número de linea
correspondiente.
*/

#include <cstdlib>
#include <sstream>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <algorithm> 

using namespace std;



int funcion(string c,ifstream &a){ 
	int o=0,p=1;
	string l; 
	

	while(getline(a,l)){ 
		if(l.find(c)!=string::npos){ 
			cout<<"Cadena encontrada en la linea "<<p<<endl; 
			o++;
		} 
		p++;
	} 
	a.close(); 
	return o;
} 
/*
bool CheckWord(char* filename, char* search)
{



    int offset; 
    string line;
    ifstream Myfile;
    Myfile.open ("pruebas.txt");

    if(Myfile.is_open())
    {
        while(!Myfile.eof())
        {
            getline(Myfile,line);
            if ((offset = line.find(search, 0)) != string::npos) 
            {
             cout << "found '" << search << " \n\n"<< line  <<endl;
             return true;
            }
            else
            {

                cout << "Not found \n\n";

            }
        }
        Myfile.close();
    }
    else
    cout<<"Unable to open this file."<<endl;

    return false;
}
*/
/*
int main () 
{

    CheckWord("dictionary.txt", "need");

    return 0;
}
*/

int main() { 
	 string c = "hola";

	int offset; 
    string line;
    ifstream Myfile;
    Myfile.open ("pruebas.txt");
	
	cout <<funcion(c,Myfile) << endl;
	


FILE * pFile;
   char buffer [100];

   pFile = fopen ("pruebas.txt" , "r");
   if (pFile == NULL) perror ("Error opening file");
   else
   {
     while ( ! feof (pFile) )
     {
       if ( fgets (buffer , 100 , pFile) == NULL ) break;
       fputs (buffer , stdout);
	  
     }
     fclose (pFile);
   }
	return 0;
}