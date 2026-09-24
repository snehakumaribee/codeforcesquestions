// lets print 10 to 20 i initialized to 0

#include <stdio.h>
int main()
{

    int i = 0, n;

    while (i <= 20)
    {
        if (i <= 9)
        {
            i++;
            continue;
        }

        if(i==18){
            //break;  //printfs till 17 only
            //continue; infinite loop
            i++;
            continue; //skipped 18
        }

        printf("%d\n", i);
        i++;
    }
}
