// what is the error message ?
is a HTTP response status code indicating that the requested resource has been temporarily moved to another URI.
//  what does that mean ?
that indicates that you are trying to use a mutex in an interrupt service routine , wich is not allowed in mbed os .

#include "mbed.h"

// main() runs in its own thread in the OS
InterruptIn bttn (PC_13);

void bttn_interrupt(){
    printf("Buttn pressed\r\n");
}

int main()
{
    bttn.fall(&bttn_interrupt);
    while (true) {

    }
}

