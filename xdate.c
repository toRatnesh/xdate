
#include "xdate.h"


int main(int argc, char * agv[]) {

	char tm_buf[TBUF_LEN] = {0};

	date_time(DD, tm_buf);			fprintf(stdout, "%s\n", tm_buf);	
	date_time(MN, tm_buf);			fprintf(stdout, "%s\n", tm_buf);
	date_time(YY, tm_buf);			fprintf(stdout, "%s\n", tm_buf);
	date_time(YYYY, tm_buf);		fprintf(stdout, "%s\n", tm_buf);
	date_time(DDMMYY, tm_buf);		fprintf(stdout, "%s\n", tm_buf);
	date_time(DDMMYYYY, tm_buf);		fprintf(stdout, "%s\n", tm_buf);
	date_time(YYMMDD, tm_buf);		fprintf(stdout, "%s\n", tm_buf);
	date_time(YYYYMMDD, tm_buf);		fprintf(stdout, "%s\n", tm_buf);
	date_time(HH, tm_buf);			fprintf(stdout, "%s\n", tm_buf);
	date_time(MM, tm_buf);			fprintf(stdout, "%s\n", tm_buf);
	date_time(SS, tm_buf);			fprintf(stdout, "%s\n", tm_buf);
	date_time(HHMMSS, tm_buf);		fprintf(stdout, "%s\n", tm_buf);
	date_time(YYYYMMDDHHMMSS, tm_buf);	fprintf(stdout, "%s\n", tm_buf);
	date_time(DDMMYYYYHHMMSS, tm_buf);	fprintf(stdout, "%s\n", tm_buf);

	return 0;
}
void date_time(date_time_frmt_t dt_fmt, char * out_buf){

	char tm_buf[TBUF_LEN] = {0};

	time_t rawtime;
	struct tm * timeinfo;
	size_t off = 0;
	size_t off1 = 0;
	size_t off2 = 0;

	time(&rawtime);
	timeinfo = localtime(&rawtime);

	memset(out_buf, 0, TBUF_LEN);

	switch(dt_fmt) {

		case DD :
			off = strftime(tm_buf, sizeof(tm_buf), "%d", timeinfo);
			//fprintf(stdout, "%s\n", tm_buf);
			break;
		case MN :
			off = strftime(tm_buf, sizeof(tm_buf), "%m", timeinfo);
			//fprintf(stdout, "%s\n", tm_buf);
			break;
		case YY :
			off = strftime(tm_buf, sizeof(tm_buf), "%y", timeinfo);
			//fprintf(stdout, "%s\n", tm_buf);
			break;
		case YYYY :
			off = strftime(tm_buf, sizeof(tm_buf), "%Y", timeinfo);
			//fprintf(stdout, "%s\n", tm_buf);
			break;
		case DDMMYY :		// DD-MM-YY
			off = strftime(tm_buf, sizeof(tm_buf), "%d-", timeinfo);
			off1 = strftime(tm_buf + off, sizeof(tm_buf) - off, "%m-", timeinfo);
			off2 = strftime(tm_buf + (off + off1), sizeof(tm_buf) - (off + off1), "%y", timeinfo);
			//fprintf(stdout, "%s\n", tm_buf);
			break;
		case DDMMYYYY :		// DD-MM-YYYY
			off = strftime(tm_buf, sizeof(tm_buf), "%d-", timeinfo);
			off1 = strftime(tm_buf + off, sizeof(tm_buf) - off, "%m-", timeinfo);
			off2 = strftime(tm_buf + (off + off1), sizeof(tm_buf) - (off + off1), "%Y", timeinfo);
			//fprintf(stdout, "%s\n", tm_buf);
			break;
		case YYMMDD :		// YY-MM-DD
			off = strftime(tm_buf, sizeof(tm_buf), "%y-", timeinfo);
			off1 = strftime(tm_buf + off, sizeof(tm_buf) - off, "%m-", timeinfo);
			off2 = strftime(tm_buf + (off + off1), sizeof(tm_buf) - (off + off1), "%d", timeinfo);
			//fprintf(stdout, "%s\n", tm_buf);
			break;
		case YYYYMMDD :		// YYYY-MM-DD
			off = strftime(tm_buf, sizeof(tm_buf), "%F", timeinfo);
			//fprintf(stdout, "%s\n", tm_buf);
			break;
		case HH :
			off = strftime(tm_buf, sizeof(tm_buf), "%H", timeinfo);
			//fprintf(stdout, "%s\n", tm_buf);
			break;
		case MM :
			off = strftime(tm_buf, sizeof(tm_buf), "%M", timeinfo);
			//fprintf(stdout, "%s\n", tm_buf);
			break;
		case SS :
			off = strftime(tm_buf, sizeof(tm_buf), "%S", timeinfo);
			//fprintf(stdout, "%s\n", tm_buf);
			break;
		case HHMMSS :		// HH:MM:SS
			off = strftime(tm_buf, sizeof(tm_buf), "%T", timeinfo);
			//fprintf(stdout, "%s\n", tm_buf);
			break;
		case YYYYMMDDHHMMSS :	// YYYY-MM-DD_HH:MM:SS
			off = strftime(tm_buf, sizeof(tm_buf), "%F_%T", timeinfo);
			//fprintf(stdout, "%s\n", tm_buf);
			break;				 
		case DDMMYYYYHHMMSS :	// DD-MM-YYYY_HH:MM:SS
			off = strftime(tm_buf, sizeof(tm_buf), "%d-", timeinfo);
			off1 = strftime(tm_buf + off, sizeof(tm_buf) - off, "%m-", timeinfo);
			off2 = strftime(tm_buf + (off + off1), sizeof(tm_buf) - (off + off1), "%Y_", timeinfo);
			off = strftime(tm_buf + (off + off1 + off2), sizeof(tm_buf) - (off + off1 + off2), "%T", timeinfo);
			//fprintf(stdout, "%s\n", tm_buf);
			break;		
		default:
			off = strftime(tm_buf, sizeof(tm_buf), "%F-%T", timeinfo);
			//fprintf(stdout, "%s\n", tm_buf);
			break;
	}

	strncpy(out_buf, tm_buf, strlen(tm_buf));

	return;
}





