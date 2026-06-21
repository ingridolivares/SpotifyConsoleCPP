#include <string>
#include <iostream>
#include "User.h"
#include "UI.h"

User::User(){
    username = "";
    password = "";
}

User::User(std::string username, std::string password){
    this -> username = username;
    this -> password = password;
}

std::string User::getUsername(){
    return username;
}

std::string User::getPassword(){
    return password;
}

User *login(User users[], int size){
    User *currentUser = nullptr;
    std::string username;
    std::string password;
    int attempts = 0;
    bool loginSucces = false;
    while(attempts < 3 && !loginSucces){
        ui::title("INICIO DE SESION");
        std::cout << "Usuario: ";
        getline(std::cin, username);
        std::cout << "Contrasenia: ";
        std::cin >> password;
        std::cin.ignore(1000, '\n');
        loginSucces = false;
        for(int i = 0; i < size; i++){
            if(
                username == users[i].getUsername()
                &&
                password == users[i].getPassword()
            ){
                loginSucces = true;
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