/*

Clase 3

Juego de adivinar un número

Tener un número

Preguntar al usuario

informar si adivinó o no

iostream permite mostrar texto a la pantalla

funcion principal main

int define un número entero

const: nunca va a cambiar la variable, quita permisos para que se modifique

definimos cin para que el usuario pueda escribir

cout muestra el texto a pantalla

if (guessed_number = NUM) es un error, a guessed number no le estamos asignando igualdad, lo estamos haciendo 10, para comparar la igualdad usar ==, desigualdad !=, <, >

else, si if no es cierto se procede al if, si if es verdadero se ignora todo el else

hay que inicializar el guessed number po que o si no se van a asignar numeros aleatorios o que no puedo definir

si divido un entero a sobre otro entero >a, toma a como cero

Clase 4

double para cálculos físicos, representa numeros dle orden de 10³⁰⁸

continue es volver a iterar sin tomar las lineas que estan por debajo

escribir una funcion: return_type name (parameter1, parameter2){cuepo}
*/

#include <iostream>
#include <cstdlib>

// declaration
void play(int min_val, int max_val);


int main(void) {
    play(1, 100);
    play(2, 22);
    return 0;
}

// Implementation
void play(int min_val, int max_val)
{
    int a = min_val + rand() % max_val, valor=0;
    std::cout<<valor<<std::endl;
    const int NUM = a;
    int guessed_number = NUM/2;

    const int MIN = min_val;
    const int MAX = max_val;

    std::cout << "\nINICIA EL JUEGO\n";

    while(guessed_number != NUM) {
        std::cout << "Adivina un numero entre  " << MIN << "  y " << MAX << ":\n";
        std::cin >> guessed_number;
        std::cout << "Ecribiste: " << guessed_number << "\n";

        // validacion del rango 
        if (guessed_number < MIN or MAX < guessed_number) {
            std::cout << "El numero no esta en el rango.\n";
            continue; 
        }

        if (guessed_number == NUM) {
            std::cout << "GANASTE!!!!\n";
            //break;
        } else if (guessed_number > NUM){
            std::cout << "Te pasaste.\n";
        } else { // es menor
            std::cout << "Te falta.\n";
        }
    }

}