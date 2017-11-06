#ifndef PWM_H
#define PWM_H


class Pwm
{
public:
    Pwm(int frecventa, int factor);
    int frecventa;
    int factor;
    int get_frecventa();
    int get_factor();
    void set_frecventa(int nou_frecventa);
    void set_factor(int nou_factor);

};

#endif // PWM_H
