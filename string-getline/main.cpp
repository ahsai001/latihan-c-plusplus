#include <iostream>
#include <string>

int main(){
    std::cout << "Enter your fullname: ";
    std::string name;
    //std::cin >> name;
    std::getline(std::cin, name);

    std::cout << "Enter your age: ";
    std::string age;
    //std::cin >> age;
    std::getline(std::cin, age);

    std::cout << "Your name is " << name << " and your age is " << age << std::endl;
    return 0;
}