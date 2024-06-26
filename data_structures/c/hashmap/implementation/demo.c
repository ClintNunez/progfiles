// Simple hash table demonstration program

/*

$ gcc -O2 -Wall -o demo samples/demo.c Hashtable.c
$ echo 'foo bar the bar bar bar the' | ./demo

See also:
https://stackoverflow.com/questions/5134891/how-do-i-use-valgrind-to-find-memory-leaks

*/

#include "hashtable.h"

#include <stdio.h>
#include <stdlib.h>

// Example:
// $ echo 'foo bar the bar bar bar the' | ./demo
// foo 1
// bar 4
// the 2
// 3

void exit_nomem(void) {
    fprintf(stderr, "out of memory\n");
    exit(1);
}

int main(void) {
    Hashtable* counts = create_hashtable();
    if (counts == NULL) {
        exit_nomem();
    }

    // Read next word from stdin (at most 100 chars long).
    char word[101];
    while (scanf("%100s", word) != EOF) {
        // Look up word.
        void* value = get_item(counts, word);
        if (value != NULL) {
            // Already exists, increment int that value points to.
            int* pcount = (int*)value;
            (*pcount)++;
            continue;
        }

        // Word not found, allocate space for new int and set to 1.
        int* pcount = malloc(sizeof(int));
        if (pcount == NULL) {
            exit_nomem();
        }
        *pcount = 1;
        if (set_item(counts, word, pcount) == NULL) {
            exit_nomem();
        }
    }

    // Print out words and frequencies, freeing values as we go.
    Hashtable_iterator it = hashtable_iterator(counts);
    while (hashtable_iterator_next(&it)) {
        printf("%s %d\n", it.key, *(int*)it.value);
        free(it.value);
    }

    // Show the number of unique words.
    printf("%d\n", (int)hashtable_length(counts));

    destroy_hashtable(counts);
    return 0;
}
