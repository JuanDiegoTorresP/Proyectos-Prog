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

else, si if no es cierto se procede al if, si if es verdadero se ignora todo el else
*/

#include <iostream>

int main(void) {
    const int NUM = 10;
    int guessed_number;

    for( ; ; ){  
        std::cout <<"Adivina un número entre 1 y 100:\n";
        std::cin >> guessed_number;

        if (guessed_number == NUM){
            std::cout << "Adivinaste\n";
            break;
        } else if(guessed_number > NUM) {
            std::cout << "Te pasaste\n";
        } else if(guessed_number < NUM){
            std::cout << "Te falta\n";
        }
    }
    return 0;
}