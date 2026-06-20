#ifndef SONG_H
#define SONG_H

#include <string>

class Song{
    private:
        std::string title;
        std::string artist;

        std::string lyricsPath;
        std::string audioPath;

        int playCount;
        bool liked;
    public:
        Song();
        Song(
            std::string title,
            std::string artist,
            std::string lyricsPath,
            std::string audioPath
        );

        std::string getTitle();
        std::string getArtist();

        bool isLiked();

        void setLiked(bool liked);

        void increasePlayCount();
};

#endif