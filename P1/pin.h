#ifndef PIN_H
#define PIN_H


class pin
{
public:
    pin(int numar, int directie, int pull_up);
    int get();
    void set(int numar);
    void change_dir();
    int pull_up;
    int numar;
    int directie; // 0 - input, 1 - output
};

#endif // PIN_H
