#include <stdio.h>
#include <string.h>
#define LINE 1000


void change_symbols(int size, char *line)
{
    int i = 0, j;
    char temp;
    while (i < size)
    {
        while (line[i] == ' ')
        {
            i++;
        }
        j = i + 1;
        while (line[j] == ' ')
        { 
            j++;
        }
        if (j >= size)
        {
            break;
        }

        temp = line[i];
        line[i] = line[j];
        line[j] = temp;
        i = j + 1;
    }
}

int main(int argc, char const *argv[])
{
    char * in_fn = "input.txt";
    char * out_fn = "output.txt";
    char line[LINE];
    FILE *fp;

    fp = fopen(in_fn, "r");
    fscanf(fp, "%[^\n]", line);
    fclose(fp);

    change_symbols(strlen(line), line);

    fp = fopen(out_fn, "w");
    fprintf(fp, "%s", line);
    fclose(fp);
    return 0;
}
