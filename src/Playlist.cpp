#include <iostream>
#include "Playlist.h"
#include "UI.h"

Playlist::Playlist(){
    head = nullptr;
    tail = nullptr;
}

void Playlist::addSong(Song song){
    Node* newNode = new Node;
    newNode -> data = song;
    newNode -> next = nullptr;
    newNode -> prev = tail;

    if(head == nullptr){
        head = newNode;
        tail = newNode;
    }
    else{
        tail -> next = newNode;
        tail = newNode;
    }
}

void Playlist::printSongs(){
    Node *aux = head;
    int songnumber = 1;

    if(aux == nullptr){
        std::cout << "(!) No hay canciones para mostrar" << std::endl;
    }
    else{
        while(aux != nullptr){
            std::cout << songnumber << ". " << aux -> data.getTitle() << " - " << aux -> data.getArtist() << std::endl;
            aux = aux -> next;
            songnumber ++;
        }
    }
}

void Playlist::removeSong(std::string title){
    Node *aux = head, *aux2, *aux3;
    
    if(aux == nullptr){
        std::cout << "(!) No hay canciones para eliminar" << std::endl;
    }
    else{
        while(aux != nullptr){
            if(
                utils::toLower(aux -> data.getTitle())
                ==
                utils::toLower(title)
                )
                {
                    if(head == tail){
                        delete head;
                        head = nullptr;
                        tail = nullptr;
                        return;
                    }
                    else{
                        if(aux == head)
                        {
                            head = head -> next;
                            head -> prev = nullptr;
                            aux -> next = nullptr;
                            delete aux;
                            return;
                        }
                        else{
                            if(aux == tail)
                            {
                                tail = tail -> prev;
                                tail -> next = nullptr;
                                aux -> prev = nullptr;
                                delete aux;
                                return;
                            }
                            else{
                                aux2 = aux -> prev;
                                aux3 = aux -> next;
                                aux2 -> next = aux3;
                                aux3 -> prev = aux2;
                                aux -> next = nullptr;
                                aux -> prev = nullptr;
                                delete aux;
                                return;
                            }
                        }
                    }
                }
                aux = aux -> next;
        }
        std::cout << "(!) No se encontro la cancion a eliminar" << std::endl;
    }
}

void Playlist::searchArtist(std::string artist){
    Node *aux = head;
    bool found = false;

    while(aux != nullptr){
        if(
            utils::toLower(aux -> data.getArtist())
            ==
            utils::toLower(artist)
        )
        {
            found = true;
            std::cout << aux -> data.getTitle() << " - " << aux -> data.getArtist() << std::endl;
        }
        aux = aux -> next;
    }
    if(!found){
        std::cout << "(!) No se encontraron canciones del artista." << std::endl;
    }
}

Song* Playlist::searchSong(std::string title){
    Node *aux = head;

    while(aux != nullptr){
        if(
            utils::toLower(aux -> data.getTitle())
            == 
            utils::toLower(title)
        )
        {
            return &(aux->data);
        }
        aux = aux -> next;
    }
    return nullptr;
}