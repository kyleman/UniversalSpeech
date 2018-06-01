// add header here

#include "../private.h"
#include "../../include/UniversalSpeech.h"

export int sayIsAvailable (void) ;
export int saySay (const char *, int) ;
export int sayStop (void) ;
export int voIsAvailable (void) ;
export int voSay (const char *, int) ;
export int voStop (void) ;

const engine engines = {
    { .name = "Apple Say", .isAvailable = sayIsAvailable, .unload=NULL .say=saySay, .stop=sayStop, .braille=NULL, .setValue=NULL, .getValue=NULL, .setString=NULL, .getString=NULL },
        { .name = "Apple VoiceOver", .isAvailable = voIsAvailable, .unload=NULL .say=voSay, .stop=voStop, .braille=NULL, .setValue=NULL, .getValue=NULL, .setString=NULL, .getString=NULL }
}

const int numEngines = sizeof(engines)/sizeof(engine) -1;
