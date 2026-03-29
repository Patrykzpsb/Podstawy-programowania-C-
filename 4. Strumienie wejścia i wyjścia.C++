#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;
    
    std::cout << "Podaj swoje imie: ";
    std::getline(std::cin, name);
    
    std::cout << "Podaj swoj wiek: ";
    std::cin >> age;
    
    std::cout << "Witaj " << name << "! Masz " << age << " lat." << std::endl;
    
    return 0;
}