/*
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
*/

#include <iostream>

int main(void) {
    const int NUM = 10;
    int guessed_number;
    std::cout <<"Adivina un número entre 1 y 100:\n";
    std::cin >> guessed_number;

    if (guessed_number == NUM){
        std::cout << "Adivinaste\n";
    } else {
        std::cout << "No adivinaste\n";
    }

    return 0;
}