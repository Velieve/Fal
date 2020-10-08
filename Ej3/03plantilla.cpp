// Nombre y apellidos del alumno：Wenhui Lin
// Usuario del juez de clase： A40

#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>

// Explicación del algoritmo utilizado

// Coste del algoritmo utilizado



// Función que resuelve el problema
// Recibe un vector con los datos
// Devuelve suma de los valores y número de sumandos de la suma
int resolver(std::vector<int> const& v,int &count) {
    // Inicialización de variables
    int res = 0, min = v[0], aux = 0;
    // Codigo del alumno

    for (int i = 0; i < v.size(); ++i) {
        res += v[i];
        if (min > v[i] ) {
            min = v[i];
            aux = 1;
        }
        else if(min == v[i])
        {
            aux++;
        }
        // Aqui el código del alumno
        // No deben hacerse más bucles

    }
   // std::cout << v.size() - aux << std::endl;;
    count = v.size() - aux;
    res = res - (aux * min);
    return res;
}

// Resuelve un caso de prueba, leyendo de la entrada la
// configuración, y escribiendo la respuesta
void resuelveCaso() {
    // Lectura de los datos
    int numElem,cont=0;
    std::cin >> numElem;
    std::vector<int> v(numElem);
    for (int& i : v) std::cin >> i;
    // LLamar a la función resolver
    int s = resolver(v, cont);
    // Escribir los resultados
    std::cout << s << ' ' << cont << '\n';
}

int main() {
    // Para la entrada por fichero. Comentar para mandar a acepta el reto
#ifndef DOMJUDGE
    std::ifstream in("datos.txt");
    auto cinbuf = std::cin.rdbuf(in.rdbuf()); //save old buf and redirect std::cin to casos.txt
#endif

    int numCasos;
    std::cin >> numCasos;
    for (int i = 0; i < numCasos; ++i) resuelveCaso();

    // Para restablecer entrada. Comentar para mandar a acepta el reto

#ifndef DOMJUDGE // para dejar todo como estaba al principio
    std::cin.rdbuf(cinbuf);
    system("PAUSE");
#endif

    return 0;
}
