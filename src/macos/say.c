//add header here

#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include "../../include/UniversalSpeech.h"

char cmd[1024] = "say -v Alex -r 300 ";

bool sayIAvailable (void) {
    return true;
}

int saySay (const char * msg, int interrupt ) {
    system(strcat(cmd, msg));
    return true;
}
bool sayStop (void) {
    system("killall say");
    return true;
}
