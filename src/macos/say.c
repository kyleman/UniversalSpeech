//add header here

#include <stdlib.h>

char cmd[1024] = "say -v Alex -r 300 ";

export bool sayIAvailable (void) {
    return true;
}

export int saySay (const char * msg, int interrupt = ) {
    system(strcat(cmd, msg));
    return true;
}

export bool sayStop (void) {
    system("killall say");
    return true;
}
