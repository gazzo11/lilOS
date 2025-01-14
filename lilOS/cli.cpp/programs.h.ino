#ifndef P_h
#include"hardware.h.ino"


inline void on_off(pins pin_num, bool status) {

    //volatile sta a singificare non ottimizzare l'accesso a questa variabile.
    //comune quando si lavora con hardware o multithread
    //unsigned è come uNumero in rust.
    //siccome GPIO_ENABLE non è definito come unsigned long *, deve essere definito come tale.
    //e quindi si usa un cast, che permette di trattare come () variabili comunque convertibili in ().
    volatile unsigned int *gpio_act = (unsigned int *) GPIO_ENABLE;
    volatile unsigned int *gpio_won = (unsigned int *) GPIO_OUT_WTS_REG;
    volatile unsigned int *gpio_wof = (unsigned int *) GPIO_OUT_WTC_REG;

    *gpio_act = *gpio_act | (1 << pin_num);

    if (status == true) {
      *gpio_won = (1 << pin_num);
    } else {
      *gpio_wof = (1 << pin_num);
    }

};

#endif // P_h