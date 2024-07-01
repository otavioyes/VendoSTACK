#include <iostream>

void Funcao01();
void Funcao02();
void Funcao03();
void Funcao04();
void Funcao05();

int VarGlobal{ 555 };

int main() {
	
	int FuncaoMain{ 00 };
	
	Funcao01();
	

	return 0;
}

void Funcao01(){

	static int VarEstatica = { 111 };

	int Var01{ 01 };
	std::cout << "\nChamando Funcao01\n ";
	std::cout << "\nEndereço de memória " << &Var01 << '\n';

	VarEstatica++;
	std::cout << "Valor da Variavel estatica: " << VarEstatica << std::endl;

	Funcao02();
}


void Funcao02() {
	int Var02{ 02 };
	std::cout << "\nChamando Funcao02\n ";
	std::cout << "\nEndereço de memória " << &Var02 << '\n';

	Funcao03();
}


void Funcao03() {
	int Var03{ 03 };
	std::cout << "\nChamando Funcao03\n ";
	std::cout << "\nEndereço de memória " << &Var03 << '\n';

	Funcao04();
}


void Funcao04() {
	int Var04{ 04 };
	std::cout << "\nChamando Funcao04\n ";
	std::cout << "\nEndereço de memória " << &Var04 << '\n';

	Funcao05();
}


void Funcao05() {
	int Var04{ 04 };
	std::cout << "\nChamando Funcao04\n ";
	std::cout << "\nEndereço de memória " << &Var04 << '\n';
}