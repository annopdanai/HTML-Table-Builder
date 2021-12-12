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
    //code goes here
    fclose(html);
}
