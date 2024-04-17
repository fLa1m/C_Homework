#include <stdio.h>

enum POSITION {START, IN, OUT};

int main(int argc, char const *argv[])
{
    FILE *f_in = fopen("input.txt", "r");
    FILE *f_out = fopen("output.txt", "w");
    int c, pos = START;


    while ((c = fgetc(f_in)) != EOF)
    {
        switch (pos)
        {
        case START:
            if (c != ' ')
            {
                pos = IN;
                fputc(c, f_out);
            }
            break;
        case IN:
            if (c == ' ')
            {
                pos = OUT;
            }
            else
            {
                fputc(c, f_out);
            }
            break;
        case OUT:
            if (c != ' ')
            {
                pos = IN;
                fputc(' ', f_out);
                fputc(c, f_out);
            }
            break;
        }
    }
    fclose(f_in);
    fclose(f_out);
    return 0;
}
