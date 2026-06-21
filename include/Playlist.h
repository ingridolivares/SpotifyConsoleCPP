#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <string>
#include "Node.h"

class Playlist{
    private:
        Node *head;
        Node *tail;
    public:
        Playlist();
        void addSong(Song song);
        void printSongs();
        void removeSong(std::string title);
        void searchArtist(std::string artis);
        Song* searchSong(std::string title);
};

#endif