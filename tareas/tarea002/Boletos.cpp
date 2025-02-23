#include<iostream>

int main() {
    const int precio_base = 100;
    int edad;
    char boleto;
    double precio_final;

    std::cout << "Ingrese su edad (en numeros): ";
    std::cin >> edad;

    if (edad < 5) {
        std::cout << "El boleto es gratuito." << std::endl;
        return 0;
    } 
    else if (edad >= 5 && edad < 60) {
        std::cout << "Elija el tipo de boleto: (N) Normal (E) Estudiante (S) Senior: ";
        std::cin >> boleto;
        
        if (boleto == 'N' || boleto == 'n') {
            precio_final = precio_base;
            std::cout << "El precio de su boleto seria de " << precio_final << "$" << std::endl;
            return 0;
        }
        else if (boleto == 'E' || boleto == 'e') {
            precio_final = precio_base - (precio_base * 0.5);
            std::cout << "El precio de su boleto seria de " << precio_final << "$" << std::endl;
            return 0;
        }
        else if (boleto == 'S' || boleto == 's') {
            std::cout << "Para esta opcion necesita al menos 60 años, por favor elija otra opcion" << std::endl;
        }
        else {
            std::cout << "Por favor elija una opcion del menu" << std::endl;
        }
    } else {
        std::cout << "Elija el tipo de boleto: (N) Normal (E) Estudiante (S) Senior: ";
        std::cin >> boleto;
        
        if (boleto == 'N' || boleto == 'n') {
            precio_final = precio_base;
            std::cout << "El precio de su boleto seria de " << precio_final << "$" << std::endl;
            return 0;
        }
        else if (boleto == 'E' || boleto == 'e') {
            precio_final = precio_base - (precio_base * 0.5);
            std::cout << "El precio de su boleto seria de " << precio_final << "$" << std::endl;
            return 0;
        }
        else if (boleto == 'S' || boleto == 's') {
            precio_final = precio_base - (precio_base * 0.3);
            std::cout << "El precio de su boleto seria de " << precio_final << "$" << std::endl;
            return 0;
        }
        else {
            std::cout << "Por favor elija una opcion del menu" << std::endl;
        }
    }
    return 0;
}
