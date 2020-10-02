// Nombre del alumno Wenhui Lin
// Usuario del Juez A40


#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>

using namespace std;


// función que resuelve el problema
//Buscamos el max de la derecha y lo comparamos con el minimo de la derecha
bool resolver(vector<int> vector, int pos) {
    if (pos == vector.size() - 1)
        return true;

    int max_left, min_right;
    max_left = vector[0];
    for (unsigned int i = 1; i <= pos; i++)
    {
        if (vector[i] > max_left){
            max_left = vector[i];
        }
    }

    min_right = vector[pos + 1];
    for (unsigned int i = pos + 2; i < vector.size(); i++)
    {
        if (vector[i] < min_right){
            min_right = vector[i];
        }
    }

    return (max_left < min_right);
}

// Resuelve un caso de prueba, leyendo de la entrada la
// configuración, y escribiendo la respuesta
void resuelveCaso() {
    // leer los datos de la entrada
    int num_elem, pos, elem;
    cin >> num_elem >> pos;

    //Creamos el vector
    vector<int> vectorInt;
    for (unsigned int i = 0; i < num_elem; i++)
    {
        //Leemos el elemnto con un cin y lo ponemos al final del vector
        cin >> elem;
        vectorInt.push_back(elem);
    }

    // escribir sol
    if (bool sol = resolver(vectorInt, pos)){
        cout << "SI" << endl;
    }
    else {
        cout << "No" << endl;
    }


}

int main() {
    // Para la entrada por fichero.
    // Comentar para acepta el reto
#ifndef DOMJUDGE
    std::ifstream in("datos.txt");
    auto cinbuf = std::cin.rdbuf(in.rdbuf()); //save old buf and redirect std::cin to casos.txt
#endif 


    int numCasos;
    std::cin >> numCasos;
    for (int i = 0; i < numCasos; ++i)
        resuelveCaso();


    // Para restablecer entrada. Comentar para acepta el reto
#ifndef DOMJUDGE // para dejar todo como estaba al principio
    std::cin.rdbuf(cinbuf);
    system("PAUSE");
#endif

    return 0;
}