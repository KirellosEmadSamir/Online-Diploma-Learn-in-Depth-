#include "uart.h"
unsigned char string_buffer[100]="Learn-in-Depth:<KirellosAmadSamir>";


void main(void)
{
//VersatilePB physical Board
uart_send_string(string_buffer);
}