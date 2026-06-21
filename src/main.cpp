#include <iostream>
#include "Playlist.h"
#include "User.h"
#include "UI.h"
#include "Authentication.h"
#include "Catalog.h"

void additionalMenu(User*, Song*);

int main(){
        loadCatalog();

std::cout << catalog[55].getTitle();
        Playlist playlist;

        for(int i = 0; i < 60; i++){
                playlist.addSong(catalog[i]);
        }

        User users[6] = {
                User("Abigail Brooks", "1234"),
                User("Grant Best", "2345"),
                User("Leeroy Mateo", "9876"),
                User("Riley Verselis", "3456"),
                User("Zoey Raghavan", "7890"),
                User("Suzie Jay Ackerman", "8901")
        };

        loadDefaultPlaylist(users, catalog);

        User* currentUser = login(users, 6);
        if(currentUser == nullptr){
                return 0;
        }
        int option;
        std::string title, artist;
        Song* foundSong = nullptr;
        ui::clear();
        ui::separator();
        std::cout << "¡Bienvenid@ " << currentUser -> getUsername() << "!";
        ui::separator();
        while(1){
                ui::title("OPCIONES");
                std::cout << "♥  ♡" << std::endl;
                std::cout << "1. Mostrar canciones\n";
                std::cout << "2. Buscar cancion\n";
                std::cout << "3. Buscar artista\n";
                std::cout << "4. Reproducir cancion\n";
                std::cout << "5. Reproduccion aleatoria\n";
                std::cout << "6. Reproducir todas\n";
                std::cout << "7. Me gusta ♥\n";
                std::cout << "8. " << currentUser -> getUsername() << " MIX\n";
                std::cout << "9. Eliminar cancion\n";
                std::cout << "0. Salir\n";
                std::cout << "Seleccione una opcion: ";
                std::cin >> option;

                switch(option){
                        case 0:
                                ui::clear();
                                ui::separator();
                                std::cout << "\tHasta Luego !";
                                ui::separator();
                                return 0;
                        break;

                        case 1:
                                ui::clear();
                                ui::title("LISTA DE CANCIONES: ");
                                playlist.printSongs();
                                std::cout << "\n";
                                std::cin.ignore(1000, '\n');
                                ui::pause();
                                ui::clear();
                        break;

                        case 2:
                                ui::clear();
                                ui::title("BUSQUEDA DE CANCIÓN");
                                std::cin.ignore(1000, '\n');
                                std::cout << "Ingrese el titulo: ";
                                getline(std::cin, title);
                                foundSong = playlist.searchSong(title);
                                if(foundSong != nullptr){
                                        std::cout << foundSong -> getTitle()
                                                << " - "
                                                << foundSong -> getArtist()
                                                << std::endl;
                                        additionalMenu(currentUser, foundSong);
                                        std::cin.ignore(1000, '\n');
                                        ui::pause();
                                }
                                else{
                                        std::cout << "(!) La cancion no fue encontrada\n";
                                }
                        break;

                        case 3:
                                ui::clear();
                                ui::title("BUSQUEDA POR ARTISTA");
                                std::cin.ignore(1000, '\n');
                                std::cout << "Ingrese el numbre del artista: ";
                                getline(std::cin, artist);
                                playlist.searchArtist(artist);
                                std::cin.ignore(1000, '\n');
                                ui::pause();
                        break;

                        case 4:
                        break;

                        case 5:
                        break;

                        case 6:
                        break;

                        case 7:
                                ui::clear();
                                ui::title("ME GUSTA");
                                currentUser -> getLikedSongs().printSongs();
                                std::cin.ignore(1000, '\n');
                                ui::pause();
                        break;

                        case 8:
                                ui::clear();
                                ui::doubleSeparator();
                                std::cout << "\t" << currentUser -> getUsername() << " MIX\t";
                                ui::doubleSeparator();
                                currentUser -> getMyMix().printSongs();
                                std::cin.ignore(1000, '\n');
                                ui::pause();
                                ui::clear();
                        break;

                        case 9:
                        break;
                }
        };
        return 0;
}

void additionalMenu(User* currentUser, Song* foundSong){
        int option;
        while(1){
                ui::title("OPCIONES");
                std::cout << "1. Reproducir\n";
                std::cout << "2. Agregar a My Mix\n";
                std::cout << "3. Me gusta ♥\n";
                std::cout << "0. Volver\n";
                std::cout << "Selecciona una opcion\n";
                std::cin >> option;

                switch(option){
                        case 1:
                                std::cout << "Reproduciendo: "
                                        << foundSong -> getTitle()
                                        << std::endl;
                        break;
                        case 2:
                                currentUser -> getMyMix().addSong(*foundSong);
                                std::cout << "Cancion agregada a Mi MIX\n";
                        break;
                        case 3:
                                currentUser -> getLikedSongs().addSong(*foundSong);
                                std::cout << "Cancion agregada a Me Gusta ♥\n";
                        break;
                        case 0:
                                return;
                        break;
                        default:
                                std::cout << "(!) Opcion invalida\n";
                                return;
                        break;
                }
        }
}