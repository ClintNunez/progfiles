#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct{
    int page_no;
    char word[50];
} STR;

bool isAlphabetical(STR *str, int n) {
    for(int i = 0; i < n - 1; i++) {
        if(strcmp(str[i].word, str[i + 1].word) > 0) {
            return false;
        } else if (strcmp(str[i].word, str[i + 1].word) == 0) {
            if(str[i].page_no > str[i + 1].page_no) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    STR temp, str[10000];
    int i, n = 0, tempN, count = 0;

    printf("Input pairs of a word and a page number:\n");
    while(scanf("%s %d", str[n].word, &str[n].page_no) != EOF) {
        n++;
    }

    while(!isAlphabetical(str, n)) {
        for(i = 0; i < n - 1; i++) {
            if(strcmp(str[i].word, str[i + 1].word) > 0) {
                temp = str[i];
                str[i] = str[i + 1];
                str[i + 1] = temp;
            } else if (strcmp(str[i].word, str[i + 1].word) == 0) {
                if(str[i].page_no > str[i + 1].page_no) {
                    temp = str[i];
                    str[i] = str[i + 1];
                    str[i + 1] = temp;
                }
            }
        }
    }

    printf("\nWord and page_no number in alphabetical order:\n");
    for(i = 0; i < n; i++) {
        if(strcmp(str[i].word, str[i - 1].word) == 0) {
            printf(" %d", str[i].page_no);
        } else {
            printf("\n%s\n%d", str[i].word, str[i].page_no);
        }
    }

    return 0;
}
