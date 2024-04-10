#include <stdio.h>
#include <string.h>

const int width = 1024;

int main(int argc, char const *argv[])
{
    char * text_in = "input1.txt";
    char * text_out = "output2.txt";
    char line[width];
    FILE *fp;
    fp = fopen(text_in, "r");
    fscanf(fp, "%[^\n]", line);
    fclose(fp);

    char c;
    int i = 0;
    while ((c = line[i]) != '\0')
    {
        if ((c == 'a') || (c == 'A'))
        {
            line[i] += 1;
        }
        else if ((c == 'b') || (c == 'B'))
        {
            line[i] -= 1;
        }
        i++;
    }
    
    fp = fopen(text_out, "w");
    fprintf(fp, "%s", line);
    fclose(fp);
    return 0;
}
