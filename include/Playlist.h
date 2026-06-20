#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "Node.h"

class Playlist{
    private:
        Node* head;
        Node* tail;
    public:
        Playlist();
        void addSong(Song song);
        void printSongs();
};


#endif