#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fpointer = fopen("README.md", "w");
    fprintf(fpointer, "# A C Project");

    fclose(fpointer);

    return 0;
}
