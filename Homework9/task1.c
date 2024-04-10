#include <stdio.h>

int main(int argc, char const *argv[])
{
    char text_in[] = "input.txt";
    char text_out[] = "output.txt";
    FILE *f_in = fopen(text_in, "r");
    FILE *f_out = fopen(text_out, "w");
    char word1[100], word2[100];
    fscanf(f_in, "%s%s", word1, word2);

    int alpha1[26] = {0};
    int alpha2[26] = {0};

    int count = -1;
    while (word1[++count] != '\0')
    {
        ++alpha1[word1[count] - 'a'];
    }
    count = -1;
    while (word2[++count] != '\0')
    {
        ++alpha2[word2[count] - 'a'];
    }

    for (int i = 0; i < 26; i++)
    {
        if (alpha1[i] == 1 && alpha2[i] == 1)
        {
            fprintf(f_out, "%c", i + 97);
        }
    }
    fclose(f_in);
    fclose(f_out);
    return 0;
}
