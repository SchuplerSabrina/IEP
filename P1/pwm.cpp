#include "pwm.h"
#include <bcm2835.h>
#define PWM_CHANNEL 0
#define PIN 10
Pwm::Pwm(int frecventa, int factor)
{
   this->frecventa = frecventa;
   this->factor = frecventa * factor/ 100;

   bcm2835_gpio_fsel(PIN, BCM2835_GPIO_FSEL_ALT5);
   // Clock divider is set to 16.
   // With a divider of 16 and a RANGE of 1024, in MARKSPACE mode,
   // the pulse repetition frequency will be
   // 1.2MHz/1024 = 1171.875Hz, suitable for driving a DC motor with PWM
   bcm2835_pwm_set_clock(BCM2835_PWM_CLOCK_DIVIDER_16);
   bcm2835_pwm_set_mode(PWM_CHANNEL, 1, 1);
   bcm2835_pwm_set_range(PWM_CHANNEL, this->frecventa);

}

void Pwm::set_frecventa(int nou_frecventa){

    this->frecventa = nou_frecventa;
    bcm2835_pwm_set_range(PWM_CHANNEL, this->frecventa);
}

void Pwm::set_factor(int nou_factor){
    this-> factor = this->frecventa * nou_factor/ 100;
    bcm2835_pwm_set_data(PWM_CHANNEL, nou_factor);

}
 int Pwm::get_factor(){
     return this->factor * 100 / this->frecventa;
 }

int Pwm::get_frecventa(){
  return this->frecventa;
}
