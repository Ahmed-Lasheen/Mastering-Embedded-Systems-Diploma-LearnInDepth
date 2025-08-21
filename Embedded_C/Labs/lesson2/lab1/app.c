#include "uart.h"
unsigned char mystring[100]="Hello I am ahmed";
const unsigned char mystring2[100]="Hello I am ahmed";

void main(void)
{
	uart_send(mystring);
}