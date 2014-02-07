
/*
Programe una aplicaci�n que permita llevar el control de libros en una biblioteca. De cada libro
se conoce el t�tulo, autor, n�mero de p�ginas, edici�n, editorial y a�o de publicaci�n. La
aplicaci�n debe permitir:
� Adicionar libros
� Eliminar libros
� Mostrar los libros que se hayan publicado antes de una fecha dada.
� Mostrar los libros que se hayan publicado despu�s de una fecha dada.
� Mostrar los libros que se hayan publicado en un per�odo de tiempo determinado.
� Mostrar los libros escritos por un autor
� Mostrar los libros publicados por una editorial
*/

#include<cstdlib>
#include<iostream>
#include<string>
#define N 3
#include"Libro.h"
Libro * biblioteca[N];

using namespace std;

void agregar(int &pos)
{

	string autor; string titulo; int pag; int edicion; string editorial; int anio;

	cout << "inserte titulo"<<endl; cin>>titulo;
	cout << "inserte autor"<<endl; cin>>autor;
	cout << "inserte numero de paginas"<<endl; cin>>pag;
	cout << "inserte numero de edicion"<<endl; cin>>edicion;
	cout << "inserte editorial"<<endl; cin>>editorial;
	cout << "inserte a�o de publicacion"<<endl; cin>>anio;

	biblioteca[pos] = new Libro(autor,titulo,pag,edicion,editorial,anio);

	pos++;
	return;
}

void eliminar()
{
	int pos =0;
	cout << "que libro desea eliminar (su posision)"<<endl; cin>>pos;
	biblioteca [pos] = NULL;
	return;
}

int askChoice() {
	cout << endl;
	cout << "1) agregar libro" << endl; //creat libro
	cout << "2) borrar libro" << endl; //delet libro
	cout << "3) muestra lso libros de la biblioteca" << endl; //list libros
	cout << "4) buscar por fecha anterior a un aa�o de publicacion" << endl; //mprime los libros que fueron publicados antes de X a�o
	cout << "5) buscar por fecha posterior a un aa�o de publicacion" << endl; //imprime los libros que fueron publicados despues de X a�o
	cout << "6) buscar lso libros que que se publicaron entre 2 a�os" << endl; //imprime los libros que fueron publicados entre X a�o y Y a�o
	cout << "7) buscar por editoreal" << endl; //transfer
	cout << "8) buscar por autor" << endl; //whitdraw
	cout << "0) salir" << endl;// te trea una limonanda a tu computadora

	int choice;
	cin >> choice;
	return choice;
}

int main(){

	int pos=0;
	int choice =0;
	int n;
	n=N;
	int fecha;
	int ini;
	int fin;
	string zain;

	//Libro * biblioteca[N];
	//agregar(pos);
	//biblioteca[0]->imprime();
	do{
		choice= askChoice();
		switch(choice){
		case 1:
			agregar(pos);
			break;
		case 2:
			eliminar();
			break;
		case 3://iimprime la biblioteca
			biblioteca[pos]->listar(n,biblioteca);
			break;
		case 4:// imprime los libros que fueron publicados antes de X a�o
			cout << " antes de que fecha desea buscar" << endl; cin >> fecha;
			biblioteca[pos]->iAntes(fecha,n,biblioteca);
			break;
		case 5:// imprime los libros que fueron publicados despues de X a�o
			cout << " despues de que fecha desea buscar" << endl; cin >> fecha;
			biblioteca[pos]->iDespues(fecha,n,biblioteca);
			break;
		case 6:// imprime los libros que fueron publicados entre X a�o y Y a�o
			cout << " primera fecha para buscar" << endl; cin >> ini;
			cout << " ultima fecha para buscar" << endl; cin >> fin;
			biblioteca[pos]->iEntreFechas(ini,fin,n,biblioteca);
			break;
		case 7:// busca por editorial
			cout << "que editoreal deasea buscar" <<endl; cin>> zain;
			biblioteca[pos]->iEditorial(zain,n,biblioteca);

			break;
		case 8: //busca por autores
			cout << "que autora deasea buscar" <<endl; cin>> zain;
			biblioteca[pos]->iAutor(zain,n,biblioteca);
			break;
		default: cout << " opcion invalida " << endl; break; // NEIN 

		}//fin switchy
	}while( choice !=0);//fin whille

	return 0;
}