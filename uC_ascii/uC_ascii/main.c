/*
 * main.c
 *
 * Created: 7/15/2024 8:30:35 PM
 *  Author: Hans
 */ 

#include <xc.h>
#include <avr/interrupt.h>
#include "SerProg.h"
#include "board.h"
#include "ascii.h"
#include "timer.h"

int main(void)
{
	KEY_DDR_OUT;
	KEY_ON;
	GELB_DDR_OUT;
	ROT_DDR_OUT;
		
    while(1)
    {
		// ASCII 8 bit  300 bps   850 Hz
		cli();
		//init_timer_normal(300);			// data rate in bits per second with normal-Timer
		init_timer_ctc(300);				// data rate in bits per second with CTC-Timer
		SerInit();
		
		InitFSK(10005000,10005170);			// RF mark / space frequencies AD9833
		//InitFSK(1275,2125);				// AF mark / space frequencies AD9833

		SerStart();
		while (isSer())
		{
			CallSmSer();
		}
		InitAscii();

		SetAsciiIdleNull();
		SetAsciiText("\r\nryryryryryryryryryryryryryryryry ");
		SetAsciiText("the quick brown fox jumps over the lazy dog 1234567890\n\r");
		SetAsciiText("ascii 300 baud\n\r");
		SetAsciiText("shift 170 Hz\n\r");
		SetAsciiText("ryryryryryryryryryryryryryryryryryry ");
    }
}