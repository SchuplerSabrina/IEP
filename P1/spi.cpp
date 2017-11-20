#include "spi.h"
#include"stdint.h"
spi::spi(uint8_t order,uint8_t mode,uint16_t clk_divider,uint8_t chip_select,uint8_t polarity){

    bcm2835_spi_setBitOrder(order);
    bcm2835_spi_setDataMode(mode);
    bcm2835_spi_setClockDivider(clk_divider);
    bcm2835_spi_chipSelect(chip_select);
    bcm2835_spi_setChipSelectPolarity(polarity, LOW);
}
uint8_t spi::transfer_data(uint8_t send_data){

    return  bcm2835_spi_transfer(send_data);
}
