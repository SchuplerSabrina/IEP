#include <bcm2835.h>
#include <pin.h>

int main(int argc, char **argv)
{
    // If you call this, it will not actually access the GPIO
    // Use for testing
    bcm2835_set_debug(1);

    if (!bcm2835_init())
    return 1;
    /** RPI_GPIO_P1_11 - 17
     *  1 - Output
     *  0 - no relevance in this case */

    pin pin1 =  pin(15,1,0);

    // Blink
    while (1)
    {
    // Turn it on
    pin1.set(1);

    // wait a bit
    bcm2835_delay(500);

    // turn it off
    pin1.set(0);

    // wait a bit
    bcm2835_delay(500);
    }
    bcm2835_close();
    return 0;
}
