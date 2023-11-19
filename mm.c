#include <stdio.h>


int main()
{
    char a;
    int g = 0, c = 0, z = 0;
    for (; scanf("%c", &a);)
    {
        if (a == 'A'|| a == 'E'|| a == 'I'|| a == 'O'|| a == 'U'|| a == 'Y'|| a =='a'|| a == 'e'|| a == 'i'|| a == 'o'|| a == 'u'|| a == 'y')
        {
            g++;
        }
        else if (a >= 48 && a <= 57)
        {
            c++;
        }
        else if ((a >= 58 && a <= 63) || a == 44 || a == 46)
        {
            z++;
        }
        if (a =='@'){
            break;
        }
    }
    printf("%d %d %d\n", g, c, z);


    return 0;
}
