#include <iostream>

using namespace std; //retira a necessidade de colocar std::

int main() {
	//declara��o de vari�veis
	int a, b, c;
	
	/*
	Podemos utilizar indicadores antes da declara��o de vari�veis int, 'char' e float, por exemplo:
	1) 'short' diminui os bits (int) por exemplo 'short int'.
	2) 'unsigned' aumenta as possibilidades de n�meros positivos e zera os negativos (int, char).
	3) 'long' aumenta o n�mero de bits em certos sistemas que diminuem o n�mero de bytes disponivel para a vari�vel, por serem menos potentes em harware (int).
	4) 'double' utiliza 64bits, sendo 1 para o 'sinal', 11 para o 'expoente' e 52 para a 'mantissa' (float) 'quando precisar de precis�o em floats'.
    */
    
    /*
    O endere�o de uma vari�vel:
    1) n�o temos controle sobre a aloca��o do endere�o de uma vari�vel, por�m podemos saber onde ela est� localizada com o comando '&x' onde x � uma vari�vel qualquer.
    2) podemos pegar o endere�o e inserir em outras vari�veis, as quais s�o apelidadas de 'ponteiros ou apontadores'.
    3) para criar uma vari�vel ponteiro � necess�rio usar '*' , por exemplo 'int *addr' que guarda o endere�o de vari�veis inteiras.
    */
    
    //Nota��o cientifica em c++ � feita usando a letra 'e' por exemplo 2e2 === 2x10^2 = 200.0 (usado em float!!!).
    
    /*
    Aspas:
    1) 'simples' para strings comuns 'hello'.
    2) "duplas" para "Hello World".
    */
    
    /*
    1) soma === '+'
    2) sub === '-'
    3) mult === '*'
    4) divis�o === '/'
    5) resto === '%'
    6) inverter sinal 'a = -b'
    7) incremento e decremento '++' e '--' onde c++ � diferente de ++c na hora de dar print por exemplo no c++ tem que printar 2x pra aparecer os dois valores (antigo e novo).
    8) a = a + b === a += b e funciona com todos os outros, tirando as opera��es de incremento e decremento.
    
    Ordem de import�ncia:
    1) '*' e '/'
    2) '%'
    3) '+' e '-'
    */
    
    /*
	convers�o de tipo
    1) int a; short int b; a = b
    2) int a; a = (int) ((float)b) a vari�vel b se torna uma float aq dentro e logo depois o (int) transforma o resultado em int, CUIDADO n�o modifica a vari�vel em scopo global.
    */
    
    //'>>' leitura, '<<' print
	 
    cout << "Digite o primeiro termo";
    cin >> a;
    
    cout << "digite o segundo termo";
    cin >> b;
    
    c = (a + b) / 2;
    cout << "A medida e:" << c << endl;
    
    return 0;
    
}

