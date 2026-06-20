#include "UI.h"
#include <iostream>
#include <cctype>

using namespace std;

void ui::separator(){
    std::cout << "\n---------------------------------\n";
}

void ui::doubleSeparator(){
    std::cout << "\n=================================\n";
}

void ui::pause(){
    std::cout << "\tPresione ENTER para continuar . . .";
    std::cin.ignore();
    std::cin.get();
}

void ui::clear(){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void ui::title(const string& text){
    ui::doubleSeparator();
    std::cout << "\t" << text << "\t";
    ui::doubleSeparator();
}

std::string utils::toLower(std::string text){
    for(char& c : text){
        c = std::tolower(c);
    }
    return text;
}

