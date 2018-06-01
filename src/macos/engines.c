// add header here

#include "../private.h"
#include "../../include/UniversalSpeech.h"

int sayIsAvailable (void) ;
int saySay (const char *, int) ;
int sayStop (void) ;
int voIsAvailable (void) ;
int voSay (const char *, int) ;
int voStop (void) ;

const engine engines[] = {
    { .name = "Apple Say", .isAvailable = sayIsAvailable, .unload= 0, .say=saySay, .stop=sayStop, .braille=0, .setValue=0, .getValue=0, .setString=0, .getString=0 },
        { .name = "Apple VoiceOver", .isAvailable = voIsAvailable, .unload=0, .say=voSay, .stop=voStop, .braille=0, .setValue=0, .getValue=0, .setString=0, .getString=0 }
};

const int numEngines = sizeof(engines)/sizeof(engine) -1;
