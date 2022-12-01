#if !defined(BEER_SONG_H)
#define BEER_SONG_H

#include <string>


/* Initial idea for the solution 
 * for verse if n == 1
 * use the n bottles of beer on the wall, n bottles of beer.
 * and then add the unique string after Take it down and pass it around, no more bottles of beer on the wall.
 * if n == 0
 * string expected = "No more bottles of beer on the wall, no more bottles of beer.\n"
        "Go to the store and buy some more, 99 bottles of beer on the wall.\n";
 * else 
 * string expected = "n bottles of beer on the wall, n bottles of beer.\n"
        "Take one down and pass it around, n-1 bottles of beer on the wall.\n";
 *
 * for sing
 * for(int i = start; i >= end; i++) 
 *      if(i == 0)
 *          append 0 string
 *      if(i == 1)
 *          append 1 string
 *      else 
 *          append n string
 *
 */




namespace beer_song {
    inline std::string verse(int n) {
        std::string nth_verse;


        return nth_verse;
    }

    inline std::string sing(int start, int end) {
        std::string song_from_start_to_end;


        return song_from_start_to_end;
    }


}

#endif
