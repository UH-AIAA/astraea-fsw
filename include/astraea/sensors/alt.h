// Nathan Samuell
// 16 Nov 2026

#ifndef ALT_H
#define ALT_H

typedef struct AltMsg
{
    uint64_t ts_ms;
    double press;
    double temp;
} AltMsg_t;


// temporary function for testing
uint8_t getSampleMessage(AltMsg_t* msg);





#endif // ALT_H
