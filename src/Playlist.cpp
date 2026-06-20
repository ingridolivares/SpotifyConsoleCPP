#include <iostream>
#include "Playlist.h"

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