#include <iostream>

int main(void) {

    std::string name;

    std::cout << "Escribe tu nombre: ";

    std::getline(std::cin, name);

    std::cout << "Hello, " << name << "!\n";

    return 0;

}

/*Corrección del profesor

#include <iostream>
#include <string>

int main(void)
{

std::string name;
std::cout <<"Hello, whats your name)\n";
//std::cin >> name; //lee hasta el primer espacio
std::getline(std::cin, name)
std::cout << "Hello, " << name << "\n" ;

return 0;
}

*/

//incluir el return si se tiene que debe retornar un entero

// \n sirve para que despues de ejecutar haya un enter en la consola, getline es una funcion que lee algo en su primer y segundo argumento

