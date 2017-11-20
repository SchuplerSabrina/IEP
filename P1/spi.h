#ifndef SPI_H
#define SPI_H
#include"serial.h"
#include"stdint.h"
class spi:public serial
    {
    public:
        spi(uint8_t order,uint8_t mode,uint16_t clk_divider,uint8_t chip_select,uint8_t polarity);
        uint8_t transfer_data(uint8_t send_data);
    };


#endif // SPI_H
