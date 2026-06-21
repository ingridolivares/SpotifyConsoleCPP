#include <string>
#include "User.h"

User::User(){
    username = "";
    password = "";
}

User::User(std::string username, std::string password){
    this -> username = username;
    this -> password = password;
}

std::string User::getUsername(){
    return username;
}

std::string User::getPassword(){
    return password;
}

Playlist& User::getLikedSongs(){
    return likedSongs;
}

Playlist& User::getMyMix(){
    return myMix;
}

void loadDefaultPlaylist(User users[], Song catalog[]){
    users[0].getMyMix().addSong(catalog[14]);
    users[0].getMyMix().addSong(catalog[6]);
    users[0].getMyMix().addSong(catalog[20]);
    users[0].getMyMix().addSong(catalog[55]);
    users[0].getMyMix().addSong(catalog[46]);
    users[0].getMyMix().addSong(catalog[39]);
    users[0].getMyMix().addSong(catalog[5]);
    users[0].getMyMix().addSong(catalog[26]);
    users[0].getMyMix().addSong(catalog[32]);
    users[0].getMyMix().addSong(catalog[31]);

    users[0].getLikedSongs().addSong(catalog[26]);
    users[0].getLikedSongs().addSong(catalog[32]);
    users[0].getLikedSongs().addSong(catalog[58]);
    users[0].getLikedSongs().addSong(catalog[31]);
    users[0].getLikedSongs().addSong(catalog[27]);

    users[1].getMyMix().addSong(catalog[48]);
    users[1].getMyMix().addSong(catalog[12]);
    users[1].getMyMix().addSong(catalog[18]);
    users[1].getMyMix().addSong(catalog[54]);
    users[1].getMyMix().addSong(catalog[52]);
    users[1].getMyMix().addSong(catalog[0]);
    users[1].getMyMix().addSong(catalog[58]);
    users[1].getMyMix().addSong(catalog[41]);
    users[1].getMyMix().addSong(catalog[16]);
    users[1].getMyMix().addSong(catalog[45]);

    users[1].getLikedSongs().addSong(catalog[58]);
    users[1].getLikedSongs().addSong(catalog[52]);
    users[1].getLikedSongs().addSong(catalog[12]);
    users[1].getLikedSongs().addSong(catalog[54]);
    users[1].getLikedSongs().addSong(catalog[32]);

    users[2].getMyMix().addSong(catalog[28]);
    users[2].getMyMix().addSong(catalog[44]);
    users[2].getMyMix().addSong(catalog[50]);
    users[2].getMyMix().addSong(catalog[59]);
    users[2].getMyMix().addSong(catalog[21]);
    users[2].getMyMix().addSong(catalog[33]);
    users[2].getMyMix().addSong(catalog[3]);
    users[2].getMyMix().addSong(catalog[2]);
    users[2].getMyMix().addSong(catalog[49]);
    users[2].getMyMix().addSong(catalog[37]);

    users[2].getLikedSongs().addSong(catalog[21]);
    users[2].getLikedSongs().addSong(catalog[59]);
    users[2].getLikedSongs().addSong(catalog[2]);
    users[2].getLikedSongs().addSong(catalog[50]);
    users[2].getLikedSongs().addSong(catalog[19]);

    users[3].getMyMix().addSong(catalog[42]);
    users[3].getMyMix().addSong(catalog[9]);
    users[3].getMyMix().addSong(catalog[4]);
    users[3].getMyMix().addSong(catalog[13]);
    users[3].getMyMix().addSong(catalog[19]);
    users[3].getMyMix().addSong(catalog[36]);
    users[3].getMyMix().addSong(catalog[40]);
    users[3].getMyMix().addSong(catalog[34]);
    users[3].getMyMix().addSong(catalog[30]);
    users[3].getMyMix().addSong(catalog[23]);

    users[3].getLikedSongs().addSong(catalog[19]);
    users[3].getLikedSongs().addSong(catalog[30]);
    users[3].getLikedSongs().addSong(catalog[4]);
    users[3].getLikedSongs().addSong(catalog[32]);
    users[3].getLikedSongs().addSong(catalog[21]);

    users[4].getMyMix().addSong(catalog[35]);
    users[4].getMyMix().addSong(catalog[29]);
    users[4].getMyMix().addSong(catalog[51]);
    users[4].getMyMix().addSong(catalog[56]);
    users[4].getMyMix().addSong(catalog[22]);
    users[4].getMyMix().addSong(catalog[27]);
    users[4].getMyMix().addSong(catalog[38]);
    users[4].getMyMix().addSong(catalog[1]);
    users[4].getMyMix().addSong(catalog[7]);
    users[4].getMyMix().addSong(catalog[10]);

    users[4].getLikedSongs().addSong(catalog[27]);
    users[4].getLikedSongs().addSong(catalog[35]);
    users[4].getLikedSongs().addSong(catalog[22]);
    users[4].getLikedSongs().addSong(catalog[51]);
    users[4].getLikedSongs().addSong(catalog[58]);

    users[5].getMyMix().addSong(catalog[15]);
    users[5].getMyMix().addSong(catalog[47]);
    users[5].getMyMix().addSong(catalog[8]);
    users[5].getMyMix().addSong(catalog[43]);
    users[5].getMyMix().addSong(catalog[57]);
    users[5].getMyMix().addSong(catalog[24]);
    users[5].getMyMix().addSong(catalog[25]);
    users[5].getMyMix().addSong(catalog[11]);
    users[5].getMyMix().addSong(catalog[17]);
    users[5].getMyMix().addSong(catalog[53]);

    users[5].getLikedSongs().addSong(catalog[11]);
    users[5].getLikedSongs().addSong(catalog[15]);
    users[5].getLikedSongs().addSong(catalog[47]);
    users[5].getLikedSongs().addSong(catalog[27]);
    users[5].getLikedSongs().addSong(catalog[58]);
}