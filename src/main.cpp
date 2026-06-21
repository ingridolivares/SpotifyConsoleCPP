#include "Playlist.h"
#include "User.h"

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
    
    Song s3("Selfless",
            "The Strokes",
            "lyrics/selfless.txt",
            "audio/selfless.mp3");

    Song s4("Unintended",
            "Muse",
            "lyrics/unintended.txt",
            "audio/unintended.mp3");

    Song s5("Demolition Lovers",
            "My Chemical Romance",
            "lyrics/demolitionlovers.txt",
            "audio/demolitionlovers.mp3");

    Song s6("Culpa de nadie",
            "Himmers",
            "lyrics/culpadenadie.txt",
            "audio/culpadenadie.mp3");
    
    playlist.addSong(s1);
    playlist.addSong(s2);
    playlist.addSong(s3);
    playlist.addSong(s4);
    playlist.addSong(s5);
    playlist.addSong(s6);
    
    playlist.printSongs();

    playlist.removeSong("Numb");

    playlist.printSongs();

    playlist.removeSong("culpa de nadie");

    playlist.printSongs();

    playlist.removeSong("SELFLESS");

    playlist.printSongs();

    playlist.removeSong("something happend to my heart");

    playlist.printSongs();
    
    return 0;
}