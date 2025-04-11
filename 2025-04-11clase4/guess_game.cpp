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
*/

#include <iostream>

int main(void) {
    const int NUM = 10;
    int guessed_number = NUM/2;

    while(guessed_number != NUM){  
        std::cout <<"Adivina un número entre 1 y 100:\n";
        std::cin >> guessed_number;
        //std::cout <<"escribiste\n" << guessed_number << "\n";

        if (guessed_number < 1 or 100 < guessed_number){
        std::cout <<"el número no está en el rango\n";
        continue;
    
    }

        if (guessed_number == NUM){
            std::cout << "Adivinaste\n";
            //break;
        } else if(guessed_number > NUM) {
            std::cout << "Te pasaste\n";
        } else if(guessed_number < NUM){
            std::cout << "Te falta\n";
        }
    }
    return 0;
}