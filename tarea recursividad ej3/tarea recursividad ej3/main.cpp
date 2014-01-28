
// ejerciocio 3 de la tarea de recursividad
// sumar lso elementos de una matriz

#include<iostream>
#include<cstdlib>
#include<time.h>
#include <stdio.h>      
#include <stdlib.h>

using namespace std;

int a[4][4],i,j,s=0;

int resul;
int prueba;
int J=0;
int I=0;

void laFuncion(){

	

	if(I < 4){
	if(J < 4){

		
		prueba += a[I][J];
		J++;
		//resul += a[i][j] + laFuncion();
		laFuncion();
	}
	J=0;
	I++;
	laFuncion();
	}
	//return ;
}


int main(){

srand(time(NULL));// con esto creo el rand

//cout<<"Enter the elements of the matrix"<<endl;
for(i=0; i<4; i++)
for(j=0; j<4; j++)
a[i][j] = rand()%2; //aqui utilizo el random creado

laFuncion();
//cout << "el resultado es: \n"<< resul << " LA MATRIZ" << endl;
cout << "el resultado es: \n"<< prueba << " LA MATRIZ 2" << endl;

for(i=0; i<4; i++){
	for(j=0; j<4; j++){

		cout << a[i][j]<<"|";
		//resul+=a[i][j];
	}
	cout <<endl;
}
//cout << "el resultado es: \n"<< resul << " LA MATRIZ" << endl;
	return 0;
}


/*
for (y=0 ;y < tam ;y++ )
    {
        mat1[y]=[];
        mat2[y]=[];
        mat3[y]=[];
        for (x=0 ;x < tam ;x++ )
        {
            mat1[y][x]=1
            mat2[y][x]=2
            mat3[y][x]=0
        }// cierre x

    }//cierre y

*/

/*
int a[4][4],i,j,s=0;
cout<<"Enter the elements of the matrix"<<endl;
for(i=0; i<4; i++)
for(j=0; j<4; j++)
cin>>a[i][j];

cout<<"The sum of the elements of the matrix=";
for(i=0; i<4; i++)
for(j=0; j<4; j++)
s=s+a[i][j];
cout<<s;
*/
