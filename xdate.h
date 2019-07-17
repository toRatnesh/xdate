

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


#define TBUF_LEN 32

typedef enum {
	DD,
	MN,
	YY,
	YYYY,
	DDMMYY,		// DD-MM-YY
	DDMMYYYY,	// DD-MM-YYYY
	YYMMDD,		// YY-MM-DD
	YYYYMMDD,	// YYYY-MM-DD
	HH,
	MM,
	SS,
	HHMMSS,		// HH:MM:SS
	YYYYMMDDHHMMSS,	// YYYY-MM-DD_HH:MM:SS
	DDMMYYYYHHMMSS	// DD-MM-YYYY_HH:MM:SS
} date_time_frmt_t;

void date_time(date_time_frmt_t dt_fmt, char * out_buf);



