/*NAME:ALAN ANTO
  ROLL NO:6
  CLASS ROLL:6*/
#include <stdio.h>
#define C_SIZE 100
union Address
{ char name[C_SIZE];;
  char housename[C_SIZE];
  char cityname[C_SIZE];
  char state[C_SIZE];
  char pin[C_SIZE];
}s;
int main()
{   printf("Enter name:");
    scanf("%s",s.name);
    printf("Enter house name:");
    scanf("%s",s.housename);
    printf("Enter city name:");
    scanf("%s",s.cityname);
    printf("Enter state name:");
    scanf("%s",s.state);
    printf("Enter pin:");
    scanf("%s",s.pin);
    printf("\nDisplaying Informations\n");
    printf("Name: %s \nHouse Name: %s \nCity Name: %s \nState name: %s \nPin: %s \n", s.name,s.housename,s.cityname, s.state, s.pin);
    return 0;
}
