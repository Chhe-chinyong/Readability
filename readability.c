#include<stdio.h>
#include<ctype.h>
#include<cs50.h>
#include<math.h>
#include <unistd.h>

int main(void)
{
    string text = get_string("Text:");
    int i = 0;
    int count = 0;
    float sen ;
    float word;
    int a = 0;
    while (text[i] != '\0')
    {

        if ((int)(text[0]) >= 65 && (int)(text[0]) <= 122 && a == 0)
        {
            count++;
            a++;
        }
        if ((int)(text[i]) == 32 || (int)(text[i]) == 34)
        {
            if ((int)(text[i + 1]) >= 65 && (int)(text[i + 1]) <= 122)
            {
                count++;
            }
        }

        if (count <= 100)
        {
            if (!((int)(text[i]) >= 65 && (int)(text[i]) <= 122))
            {
                //i++;
                printf("");
            }
            else
            {
                word = word + 1;
            }

        }

        if ((int)text[i] == 33 || (int)text[i] == 46 || (int)text[i] == 63)
        {
            sen = sen + 1;
        }
        i++;

    }
    word = word * 100.0 / count * 1.00;
    sen = sen * 100.0 / count * 1.00;
    float index = 0.0588 * word  - 0.296 * sen  - 15.8;
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }

    else if (index == 16 | index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", (int)(round(index)));

    }
}

