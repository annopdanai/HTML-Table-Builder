#include <stdio.h>
#include <stdlib.h>

int main() {
    int cell, row;
    FILE *html = fopen("table.html", "w");
    if(html == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("Number of cell: ");
    scanf("%d",&cell);
    printf("Number of row: ");
    scanf("%d",&row);
    fprintf(html, "<table border=\"1\">\n");
    for(int i = 0; i < row; i++)
    {
        fprintf(html, "<tr>\n");
        for(int j = 0; j < cell; j++)
        {
            fprintf(html, "<td>%d</td>\n", i*cell+j+1);
        }
        fprintf(html, "</tr>\n");
    }
    fprintf(html, "</table>\n");
    fclose(html);
}
