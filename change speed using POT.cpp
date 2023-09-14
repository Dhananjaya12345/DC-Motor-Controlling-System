 #include "mbed.h"
#include "Motor.h"
#include "C12832.h"

C12832 lcd(p5, p7, p6, p8, p11);
Serial pc(USBTX, USBRX);

Motor m(p23, p9, p10); // pwm, fwd, rev
PwmOut myled(LED1);
AnalogIn mypotentiometer(p20);

int main() {
      
    myled.period(0.020f);
    while(1){
        myled = mypotentiometer;
       
        lcd.cls();
        lcd.locate(0,3);
        lcd.printf("Speed-%f ", mypotentiometer.read());
        m.speed(mypotentiometer.read());
      }
}
