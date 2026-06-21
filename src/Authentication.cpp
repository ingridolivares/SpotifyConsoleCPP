#include <iostream>
#include <string>
#include "Authentication.h"
#include "UI.h"

User *login(User users[], int size){
    User *currentUser = nullptr;
    std::string username;
    std::string password;
    int attempts = 0;
    while(attempts < 3){
        ui::title("INICIO DE SESION");
        std::cout << "Usuario: ";
        getline(std::cin, username);
        std::cout << "Contrasenia: ";
        std::cin >> password;
        std::cin.ignore(1000, '\n');
        for(int i = 0; i < size; i++){
            if(
                username == users[i].getUsername()
                &&
                password == users[i].getPassword()
            ){
                currentUser = &users[i];
                return currentUser;
            }
        }
        attempts ++;
        std::cout << "(!) Usuario o contrasenia inválidos" << std::endl;
        std::cout << "Quedan " << 3 - attempts << " intentos para iniciar sesion" << std::endl;
        ui::pause();
    }
    if(attempts == 3){
        std::cout << "(!) Se ha excedido el numero de intentos máximo de inicio de sesion" << std::endl;
    }
    return nullptr;
}