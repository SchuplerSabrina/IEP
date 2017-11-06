#include "mainwindow.h"
#include <QApplication>
#include <pwm.h>
#include <bcm2835.h>
int main(int argc, char *argv[])
{
    bcm2835_set_debug(1);
    if (!bcm2835_init())
        return 1;
    Pwm *p = new Pwm(1024,80);

    int direction = 1; // 1 is increase, -1 is decrease
    int data = 1;
    while (1)
    {
        if (data == 1)
            direction = 1;   // Switch to increasing
        else if (data == 99-1)
            direction = -1;  // Switch to decreasing
        data += direction;
        p->set_factor(data);
        bcm2835_delay(1);
    }
    bcm2835_close();
    return 0;
}
