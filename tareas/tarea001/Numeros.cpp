#include <iostream>

int main() {
    
    int num1;
    std::cout << "Ingrese el primer numero: ";
    std::cin >> num1;
    
    int num2;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> num2;
    
    // Calcular la suma y la multiplicación
    int suma = num1 + num2;
    int multiplicacion = num1 * num2;
    
    // Mostrar los resultados
    std::cout << "La suma de los numeros es: " << suma << std::endl;
    std::cout << "La multiplicación de los numeros es: " << multiplicacion << std::endl;
    
    return 0;
}