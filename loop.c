


/* This should be the main loop of the program. We are implementing the basic pid loop

output = kP * E + Ki*ierr*dt + Kd*derr/dt



*/



#include <stdio.h>



double getActual(void);

int main(){
  
double output = 0;  
double setpoint = 0;
double actual = 0;
double kP = 0;
double kd = 0;
double ki = 0;
double derr = 0;
double ierr = 0;
double dt = 0;

while (1){
  
  output = kP * (setpoint - actial) + ki*
  
}  
  
  
}

double getActual(void){

/* FIXME to read actual from device */  
double actual = 0;

  
return actual;  
  
}
