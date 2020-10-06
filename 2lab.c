#include <stdio.h>

int main()
{
    float t;
    float a = 3;
    float b = 2;
    float y = 4;
    float x = 0;
    
    while (x < 6)
    {
        if (x - y < 0)
        {
            t = ((a + b) / 2) - (a * a) + ((b * b * b) / a);
        }
        else if (x - y == 0)
        {
            t = ((a + b) / 2);
        }
        else
        {
            t = 3;    
        }
        x += 1;
        printf("\nIf x = %f \nt = %f\n",x-1, t);
    }
    return 0;
}

