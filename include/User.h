#ifndef USER_H
#define USER_H

#include <string>
#include "Playlist.h"

class User{
    private:
        std::string username;
        std::string password;

        Playlist likedSongs;
        Playlist myMix;
    public:
        User();
        User(std::string userName, std::string password);

        std::string getUsername();
        std::string getPassword();

        Playlist& getLikedSongs();
        Playlist& getMyMix();
};

void loadDefaultPlaylist(User users[], Song catalog[]);

#endif