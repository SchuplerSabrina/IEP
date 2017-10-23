#include "pin.h"
#include <bcm2835.h>

pin::pin(int numar, int directie, int pull_up)
{
  this->numar = numar;
  this->directie = directie;
  this->pull_up = pull_up;
}
void pin::set(int valoare){

    if ( this->directie == 1)
    {
        if ( valoare == 0)
            bcm2835_gpio_write(this->numar, LOW);
        else
            bcm2835_gpio_write(this->numar, HIGH);
    }
}
int pin::get()
{
    if (this->directie == 1)
        return bcm2835_gpio_lev(this->numar);
}
void pin::change_dir(void)
{
    if(this->directie == 0)
    {
        /** Input Pin, change to output pin */
        this->directie = 1;
        bcm2835_gpio_fsel(this->numar, BCM2835_GPIO_FSEL_OUTP);
    }
    else
    {
        /** Output Pin, change to input pin */
        this->directie = 0;
        bcm2835_gpio_fsel(this->numar, BCM2835_GPIO_FSEL_INPT);
    }
}
