
// Nombre y apellidos del alumno: Wenhui Lin
// Usuario del juez de clase: A40

#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>

using namespace std;
// Explicaci¨®n del algoritmo utilizado
//Un if en la que va leyendo cada entrada en el cin y  comparando con la variable max que guarda el maximo
//y un contador que va contando cuantas veces ha aparecido

// Coste del algoritmo utilizado
//A¨²n no lo s¨¦ , espero saberlo despu¨¦s de las clases

// Funcion que lee de la entrada, resuelve el problema y escribe la salida
bool resuelveCaso() {
	int n;
	std::cin >> n;

	// Declaraci¨®n de variables
	// Codigo del alumn: creamos el max y el contador del max
	//contador es 0 porque se le asigna el primer elemento al max y siempre har¨¢ count ++
	int max = n, count = 0;

	while (n != 0) {
		// Aqui codigo del alumno
		if (n > max){
			max = n;
			//cada vez que encuentra un nuevo max, se resetea el contador a 1
			count = 1;
		}
		else{
			if (n == max) {
				count++;
			}
		}

		std::cin >> n;
	}

	// Escribir el resultado
	// Codigo del alumno
	cout << max << " " << count<< endl;

	return true;

}

int main() {
	// Para la entrada por fichero.
	// Comentar para acepta el reto
/*#ifndef DOMJUDGE
	std::ifstream in("datos.txt");
	auto cinbuf = std::cin.rdbuf(in.rdbuf()); //save old buf and redirect std::cin to casos.txt
#endif */

	int numCasos;
	std::cin >> numCasos;
	for (int i = 0; i < numCasos; ++i) resuelveCaso();


	// Para restablecer entrada. Comentar para acepta el reto
/*#ifndef DOMJUDGE // para dejar todo como estaba al principio
	std::cin.rdbuf(cinbuf);
	system("PAUSE");
#endif*/

	return 0;
}
