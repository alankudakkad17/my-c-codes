#include<stdio.h>
int main()
{
    struct TIME
  {
    int HOUR[20],MINUTE[20],SECONDS[10];
  };
   struct Address
  {
    char Name[20],street[20],city[10];
    int Houseno;
  };
   struct DATE
  {
    int day,month,year;
  };
   struct city
  {
    char Name[20],state[20],country[10];
  };
  return 0;
}
