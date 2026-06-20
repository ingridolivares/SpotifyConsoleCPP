#include "Playlist.h"

int main(){
    Playlist playlist;
    
    Song s1("Numb",
            "Linkin Park",
            "lyrics/numb.txt",
            "audio/numb.mp3");

    Song s2("Yellow",
            "Coldplay",
            "lyrics/yellow.txt",
            "audio/yellow.mp3");
    
    playlist.addSong(s1);
    playlist.addSong(s2);
    
    playlist.printSongs();
    
    return 0;
}