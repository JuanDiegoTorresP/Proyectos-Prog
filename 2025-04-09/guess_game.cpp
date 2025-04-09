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
*/

#include <iostream>

int main(void) {
    const int NUM = 10;
    int guessed_number;
    std::cout <<"Adivina un número entre 1 y 100:\n";
    std::cin >> guessed_number;

    return 0;
}