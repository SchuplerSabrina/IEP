#ifndef SERIAL_H
#define SERIAL_H
#include"bcm2835.h"
#include"stdint.h"

class serial
{
public:
    virtual uint8_t transfer_data(uint8_t send_data)=0;
};

#endif // SERIAL_H
