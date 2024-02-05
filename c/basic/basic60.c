#include <stdio.h>

enum Days {
    Sun = 0,
    Mon,
    Tue,
    Wed,
    Thu,
    Fri,
    Sat,
};

int main() {
    for (int i = Sun; i <= Sat; i++) {
        switch (i) {
            case Sun:
                printf("Sun = %i\n", i);
            break;
            case Mon:
                printf("Mon = %i\n", i);
            break;
            case Tue:
                printf("Tue = %i\n", i);
            break;
            case Wed:
                printf("Wed = %i\n", i);
            break;
            case Thu:
                printf("Thu = %i\n", i);
            break;
            case Fri:
                printf("Fri = %i\n", i);
            break;
            case Sat:
                printf("Sat = %i\n", i);
            break;
        }
    }
    return 0;
}
