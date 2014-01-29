
/*
Programe un algoritmo recursivo que permita resolver el cuadro latino para una matriz de
dimensión n. Ejemplo de cuadro latino para n = 5:
0 0 0 0 1
0 0 0 1 2
0 0 1 2 3
0 1 2 3 4
1 2 3 4 5
*/

#include<iostream>
#include<cstdlib>

using namespace std;
int  a[10][10],i,j,s=0;

int I;
int J;
int n;
int cont;

void kuz(){

	if(I < n){
	if(J < n){

		if( n-J <=I){
		cont++;
		a[I][J] = cont;
		}
		cout<< a[I][J];
		J++;
		//resul += a[i][j] + kuz();
		kuz();
	}
	J=0;
	I++;
	 cout << endl;
	 cont=0;
	kuz();
	}
	//return ;

}


int main(){

	cout<<" dame n"<<endl;
	
	cin>>n;

for(i=0; i<n; i++)
for(j=0; j<n; j++)
a[i][j] =0;

kuz();


for(i=0; i<n; i++){
	for(j=0; j<n; j++){

		cout << a[i][j]<<"|";
		//resul+=a[i][j];
	}
	cout <<endl;
}


	return 0;
}
