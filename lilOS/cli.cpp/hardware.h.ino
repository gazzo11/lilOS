#ifndef Hard_h
#define Hard_h

#define GPIO_ENABLE      0x3ff440020
#define GPIO_OUT_WTS_REG 0x3ff440008
#define GPIO_OUT_WTC_REG 0x3ff44000C

/*
0x20	GPIO_ENABLE 	        Configura i pin come output (1 = output, 0 = input). Siccome ogni bit
                                equivale ad un pin, basta spostare il valore con <<.

0x10	GPIO_OUT_REG	        Scrive valori HIGH/LOW sui pin configurati come output. Agisce su
                                tutti i pin configurati come output.
                                
0x08	GPIO_OUT_W1TS_REG 	    Setta specifici pin su HIGH (scrittura senza leggere).      } nel codice sono chiamati wts.
0x0C	GPIO_OUT_W1TC_REG	    Resetta specifici pin su LOW (scrittura senza leggere).     } perché va in conflitto con le librerie standard di arduino

0x04	GPIO_ENABLE_W1TS_REG	Setta bit specifici per abilitare i pin come output (senza leggere).
0x08	GPIO_ENABLE_W1TC_REG	Resetta bit specifici per disabilitare l’output sui pin.

0x3C	GPIO_IN_REG	            Legge lo stato di tutti i pin GPIO.
0x68	GPIO_PIN_REG        	Configura proprietà avanzate (pull-up, pull-down, ecc.) per un singolo pin.
*/


///assegna uno dei pin a una variabile e poi passalo per on_off in programs.hh
enum pins {

    D2=2,
    D4=4,
    D5=5,
    D12=12,
    D13=13,
    D14=14,
    D16=16,
    D17=17,
    D18=18,
    D19=19,
    D21=21,
    D22=22,
    D25=25,
    D26=26,
    D27=27,
    D32=32,
    D33=33,
    D34=34,
    D35=35,

};

#endif // Hard_h
