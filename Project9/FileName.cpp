//ejercicio1
#include <iostream>
#include <string>

using namespace std;

class Jugador {
private:
    string nombre;
    int opcionNumerica;
    int puntaje;

public:
    Jugador() : puntaje(0) {}

    void setOpcion() {
        cout << "Ingrese la opcion para el jugador " << nombre << " (1 para piedra, 2 para papel, 3 para tijera): ";
        cin >> opcionNumerica;
    }

    void setPuntaje(int nuevoPuntaje) {
        puntaje = nuevoPuntaje;
    }

    int getPuntaje() const {
        return puntaje;
    }

    void setNombre(const string& nuevoNombre) {
        nombre = nuevoNombre;
    }

    string getNombre() const {
        return nombre;
    }

    int getOpcionNumerica() const {
        return opcionNumerica;
    }

    // Función para comparar jugadores y determinar cuál tiene una opcion numerica mayor
    void comparar(const Jugador& otroJugador) const {
        if (opcionNumerica > otroJugador.getOpcionNumerica()) {
            cout << nombre << " tiene una opcion numerica mayor." << endl;
        }
        else if (opcionNumerica < otroJugador.getOpcionNumerica()) {
            cout << otroJugador.getNombre() << " tiene una opcion numerica mayor." << endl;
        }
        else {
            cout << "Ambos jugadores tienen la misma opcion numerica." << endl;
        }
    }
};

int main() {
    Jugador jugador1, jugador2;

    // Pedir el nombre y la opcion para cada jugador
    cout << "Ingrese el nombre del jugador 1: ";
    string nombreJugador1;
    cin >> nombreJugador1;
    jugador1.setNombre(nombreJugador1);
    jugador1.setOpcion();

    cout << "Ingrese el nombre del jugador 2: ";
    string nombreJugador2;
    cin >> nombreJugador2;
    jugador2.setNombre(nombreJugador2);
    jugador2.setOpcion();

    // Ejemplo de establecimiento de puntaje
    jugador1.setPuntaje(0);
    jugador2.setPuntaje(0);

    // Comparar jugadores por opcion numérica
    jugador1.comparar(jugador2);

    return 0;
}
