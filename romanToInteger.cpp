//primeira solução de 2026!! Feliz ano Novo :)
//Transformar um romano em inteiro

#include<iostream>
#include<map>
#include<string>
using namespace std;

const int I = 1;
const int V = 5;
const int X = 10;
const int L = 50;
const int C = 100;
const int D = 500;
const int M = 1000;

//


int romanToInt(string s) {
	int i = 0;
	int numeroConvertido = 0;
	int quantidadeI = 0;
	const int limiteI = 3;

	if(s.size() == 1){
		switch(s[0]){
			case 'I': return I;
			case 'V': return V;
			case 'X': return X;
			case 'L': return L;
			case 'C': return C;
			case 'D': return D; 
			case 'M': return M;
			default: return -1;
		}
	}

	while(i < s.size()){
		if(s[i]=='I'){
			if(s[i+1]=='V'){
				numeroConvertido += V - I;
				break;

			} else if(s[i+1]=='X'){
				numeroConvertido += X - I;
				break;

			} else if(quantidadeI < limiteI){
				numeroConvertido += I;
				quantidadeI++;
				i++;	
			}
		}

		if(s[i]=='V'){
			numeroConvertido += V;
			i++;
		}

		if(s[i]=='X'){
			if(s[i+1]=='L'){
				numeroConvertido += L - X;
				i++;
				i++;

			} else if(s[i+1]=='C'){
				numeroConvertido += C - X;
				i++;
				i++;

			} else{
				numeroConvertido += X;
				i++;
			}
		}

		if(s[i]=='L'){
			numeroConvertido += L;
			i++;
		}

		if(s[i]=='C'){
			if(s[i+1]=='D'){
				numeroConvertido += D - C;
				i++;
				i++;

			} else if(s[i+1]=='M'){
				numeroConvertido += M - C;
				i++;
				i++;

			} else {
				numeroConvertido += C;
				i++;
			}

		}

		if(s[i]=='D'){
			numeroConvertido += D;
			i++;
		}

		if(s[i]=='M'){
			numeroConvertido += M;
			i++;
		}
	}

	return numeroConvertido;
}

int main(){
	string test = "XIV";

	cout <<romanToInt(test)<< endl;

	return 0;
}

/*
I pode ser colocado antes de V(5) e X(10) para formar 4 e 9. 
X pode ser colocado antes de L(50) e C(100) para formar 40 e 90. 
C pode ser colocado antes de D(500) e M(1000) para formar 400 e 900.
*/