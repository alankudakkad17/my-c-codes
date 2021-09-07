/*Name:Alan Anto
  Roll no:06 */
#include <stdio.h>
int main()
{
    int choice;
    printf("Enter the choice \n 1-januvary\n 2-February\n 3-March\n 4-April\n 5-May\n 6-June\n 7-July\n 8-August\n 9-September\n 10-October\n 11-November\n 12-December \n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("31 days");
        break;
        case 9:
        case 4:
        case 6:
        case 11:
        printf("30 days");
        break;
        case 2:
        printf("28 days");
        break;
        default:
        printf("enter a valid choice");
    }
    return 0;
}
