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

    while(aux != nullptr){
        std::cout << aux -> data.getTitle() << " - " << aux -> data.getArtist() << std::endl;
        aux = aux -> next;
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