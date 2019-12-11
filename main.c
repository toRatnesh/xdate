#include "xdate.h"

int main(int argc, char * agv[]) {
  char tm_buf[TBUF_LEN] = {0};

  date_time(DD, tm_buf);                  fprintf(stdout, "%s\n", tm_buf);
  date_time(MN, tm_buf);                  fprintf(stdout, "%s\n", tm_buf);
  date_time(YY, tm_buf);                  fprintf(stdout, "%s\n", tm_buf);
  date_time(YYYY, tm_buf);                fprintf(stdout, "%s\n", tm_buf);
  date_time(DDMMYY, tm_buf);              fprintf(stdout, "%s\n", tm_buf);
  date_time(DDMMYYYY, tm_buf);            fprintf(stdout, "%s\n", tm_buf);
  date_time(YYMMDD, tm_buf);              fprintf(stdout, "%s\n", tm_buf);
  date_time(YYYYMMDD, tm_buf);            fprintf(stdout, "%s\n", tm_buf);
  date_time(HH, tm_buf);                  fprintf(stdout, "%s\n", tm_buf);
  date_time(MM, tm_buf);                  fprintf(stdout, "%s\n", tm_buf);
  date_time(SS, tm_buf);                  fprintf(stdout, "%s\n", tm_buf);
  date_time(HHMMSS, tm_buf);              fprintf(stdout, "%s\n", tm_buf);
  date_time(YYYYMMDDHHMMSS, tm_buf);      fprintf(stdout, "%s\n", tm_buf);
  date_time(DDMMYYYYHHMMSS, tm_buf);      fprintf(stdout, "%s\n", tm_buf);

  return 0;
}
