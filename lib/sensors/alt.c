// Nathan Samuell
// 16 Nov 2026

// includes
#include "astraea/sensors/alt.h"

uint8_t getSampleMessage(AltMsg_t* msg)
{
    AltMsg_t sampleMessage = {
      .ts_ms = 99000,
      .press = 100.89,
      .temp = 98.6,
    };

    (*msg) = sampleMessage;

    return 0
}
