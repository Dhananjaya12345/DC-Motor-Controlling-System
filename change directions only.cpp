#include "mbed.h"
#include "Motor.h"

Motor m(p23, p9, p10); 
BusIn joyUP(p15);
BusIn joyDOWN(p12);

int main()
{
    while(1) {

        if(joyUP) {
            m.speed(0.5);
        } else if (joyDOWN) {
            m.speed(-0.5);
        } else {
            m.speed(0);

        }
    }
}
