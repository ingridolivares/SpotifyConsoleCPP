#include <string>
#include "User.h"

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