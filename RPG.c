#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    
    int intelli = (rand() % 21);
    int stamina = (rand() % (21 - intelli));
    int charisma = (20 - stamina - intelli);
    
    printf("intelligence %d\nstamina %d\ncharisma %d", intelli, stamina, charisma);
    printf("\nThis job is made for you: ");
    
    if(intelli >= stamina && intelli >= charisma)
    {
        printf("mage ");
    }
    
    if(stamina >= intelli && stamina >= charisma)
    {
        printf("knight ");
    }
    
    if(charisma >= intelli && charisma >= stamina)
    {
        printf("thief");
    }
    
    return 0;
}