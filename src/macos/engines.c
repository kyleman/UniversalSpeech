// add header here

#include "../private.h"
#include "../../include/UniversalSpeech.h"

export int sayIsAvailable (void) ;
export int saySpeak (const char *) ;
export int sayStop (void) ;

const engine engines = {
    { .name = "Apple Say", .isAvailable = sayIsAvailable, .unload=NULL .say=saySpeak, .stop=sayStop, .braille=NULL, .setValue=NULL, .getValue=NULL, .setString=NULL, .getString=NULL }
}

const int numEngines = sizeof(engines)/sizeof(engine) -1;
