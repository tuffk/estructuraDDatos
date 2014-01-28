
//imprimir lso n numeros de la serie de fibonachi

#include<iostream>
#include <cstdlib>
using namespace std;



int fibonachi(int num){
	int fib;
	if (num ==0){
		return 0;
	}else if (num==1){
		return 1;
	}else{

		fib = fibonachi(num -2)+ fibonachi(num -1);
			cout << fib<<endl;
			return fib;
	}

}

int main(){

	int cuantos;
	cin>>cuantos;

	fibonachi(cuantos);

}