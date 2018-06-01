//add header here

#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include "../../include/UniversalSpeech.h"

char cmd[1024] = "osascript ../../bin/VoiceOver.applescript ";

bool voIsavailable (void) {
    return true;
}

bool voSay (const char * msg, int inturrupt) {
    strcat(cmd, msg);
    system(cmd);
    return true;

}
bool voStop (void) {
    return true;
}
