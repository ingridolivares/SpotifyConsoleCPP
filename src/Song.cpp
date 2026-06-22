#include "Song.h"

Song::Song(){
    title = "";
    artist = "";
    lyricsPath = "";
    audioPath = "";

    playCount = 0;
    liked = false;
}

Song::Song(
    std::string title,
    std::string artist,
    std::string lyricsPath,
    std::string audioPath
){
    this -> title = title;
    this -> artist = artist;

    this -> lyricsPath = lyricsPath;
    this -> audioPath = audioPath;

    playCount = 0;
    liked = false;
}

std::string Song::getTitle(){
    return title;
}

std::string Song::getArtist(){
    return artist;
}

bool Song::isLiked(){
    return liked;
}

void Song::setLiked(bool liked){
    this -> liked = liked;
}

void Song::increasePlayCount(){
    playCount++;
}

int Song::getPlayCount(){
    return playCount;
}

std::string Song::getLyricsPath(){
    return lyricsPath;
}

std::string Song::getAudioPath(){
    return audioPath;
}