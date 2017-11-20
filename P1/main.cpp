#include "mainwindow.h"
#include <QApplication>
#include"bcm2835.h"
#include"spi.h"
#include"stdint.h"
int main(int argc, char *argv[])
{
    bcm2835_set_debug(1);
    spi *ex = new spi(BCM2835_SPI_BIT_ORDER_MSBFIRST,BCM2835_SPI_MODE0,BCM2835_SPI_CLOCK_DIVIDER_65536,BCM2835_SPI_CS0,BCM2835_SPI_CS0);
    uint8_t send_data = 0x23;
    uint8_t read_data = ex->transfer_data(send_data);
    if (read_data != send_data)
        printf("Do you have the loopback from MOSI to MISO connected?\n");
    return 0;
}
