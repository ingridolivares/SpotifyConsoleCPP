#include "UI.h"
#include <iostream>

using namespace std;

void ui::separator(){
    cout << "\n---------------------------------\n";
}

void ui::doubleSeparator(){
    cout << "\n=================================\n";
}

void ui::pause(){
    cout << "\tPresione ENTER para continuar . . .";
    cin.ignore();
    cin.get();
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
    cout << "\t" << text << "\t";
    ui::doubleSeparator();
}

