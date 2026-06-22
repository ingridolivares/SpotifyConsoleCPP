#include <iostream>
#include <fstream>
#include "Player.h"
#include "UI.h"

void playSong(Song* song){
    ui::title("REPRODUCIENDO . . . ");
    std::cout << "Titulo: " 
                << song -> getTitle()
                << std::endl;

    std::cout << "Artista: " 
                << song -> getArtist() 
                << std::endl;

    std::cout << "Audio: "
                << song -> getAudioPath()
                << std::endl;

    std::cout << "Letra: ";
        showLyrics(song);
        std::cout << "\n";

    ui::doubleSeparator();

    song -> increasePlayCount();
}

void showLyrics(Song* song){
    std::ifstream file(song -> getLyricsPath());

    if(!file){
        std::cout << "(!) No se pudo abrir la letra\n";
        return;
    }

    std::string line;

    while(getline(file, line)){
        std::cout << line << std::endl;
    }
    file.close();
}