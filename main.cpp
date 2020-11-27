#include "mbed.h"
#include "SPIDMA.h"

int main()
{
    while(1)
    {
        printf("Hello\r\n");
        ThisThread::sleep_for(1s);
    }
}