#ifndef USER_H
#define USER_H

#include <string>

class User{
    private:
        std::string username;
        std::string password;
    public:
        User();
        User(std::string userName, std::string password);

        std::string getUsername();
        std::string getPassword();
};

#endif