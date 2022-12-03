#if !defined(BEER_SONG_H)
#define BEER_SONG_H

#include <string>

namespace beer_song {

    const std::string last = "No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, 99 bottles of beer on the wall.\n";
    const std::string verse_1 = "1 bottle of beer on the wall, 1 bottle of beer.\nTake it down and pass it around, no more bottles of beer on the wall.\n";
    const std::string verse_2 = "2 bottles of beer on the wall, 2 bottles of beer.\nTake one down and pass it around, 1 bottle of beer on the wall.\n";

    inline std::string verse(int n) {
        std::string nth_verse;
        if(n == 0)
            nth_verse = last;
        else if(n == 1) 
            nth_verse = verse_1;
        else 
            nth_verse = std::to_string(n) + " bottles of beer on the wall, " + std::to_string(n) + " bottles of beer.\nTake one down and pass it around, " + std::to_string(n-1) + " bottles of beer on the wall.\n";
        
        return nth_verse;
    }

    inline std::string sing(int start = 0, int end = 0) {
        std::string song_from_start_to_end = "";

        for(int i = start; i >= end; i--) {
            if(i < start) song_from_start_to_end += "\n";
            if(i == 0) {
                song_from_start_to_end += last;
            } else if(i == 1) {
                song_from_start_to_end += verse_1;
            } else if(i == 2) {
                song_from_start_to_end += verse_2;
            } else {
                song_from_start_to_end += std::to_string(i) + " bottles of beer on the wall, " + std::to_string(i) + " bottles of beer.\nTake one down and pass it around, " + std::to_string(i-1) + " bottles of beer on the wall.\n";
            }
        }

        return song_from_start_to_end;
    }

}

#endif
