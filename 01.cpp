/*
1-Desenvolva um programa que lê uma temperatura em graus celsius e apresentá-la convertida em graus Fahrenheit. A fórmula de conversão é: F <- (9*C+160)/5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

*/

#include <iostream>

int main() {
  double C, F;

  //solicita  ao usuário a temperatura em graus Celsius
  std::cout << "Digite a temperatura em graus Celsius: ";

  std::cin >>C;

  	// Converte a temperatura para graus Fahrenheit usando a fórmula
    F = (9 * C + 160) / 5;

    // Exibe o resultado
    std::cout << "A temperatura em Fahrenheit é: " << F << std::endl;

    return 0;

}
