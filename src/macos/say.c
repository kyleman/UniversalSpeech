#include <stdlib.h>

char cmd[1024] = "say -v Alex -r 300 ";

export bool sayIAvailable (void) {
    return true;
}

export int saySpeak (const char * msg) {
    system(strcat(cmd, msg));
    return true;
}

export bool sayStop (void) {
    return true;
}
