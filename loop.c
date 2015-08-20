


/* This should be the main loop of the program. We are implementing the basic pid loop

output = kP * E + Ki*ierr*dt + Kd*derr/dt








*/



#include <stdio.h>

int setpoint = 0;
int actual = 0;
int kP = 0;
int kd = 0;
int ki = 0;
int derr = 0;
int ierr = 0;



int main(
