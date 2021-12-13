#include <stdio.h>
#include <stdlib.h>

int main() {
    int column, row;
    FILE *html = fopen("table.html", "w");
    if(html == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &column);
    fprintf(html, "<html>\n<body>\n<table border=\"1\">\n");
    for(int i = 0; i < column; i++)
    {
        fprintf(html, "<tr>\n");
        for(int j = 0; j < row; j++)
        {
            char ch;
            printf("Enter the value for cell %d: ", i*row+j+1);
            scanf("%c", &ch);
            fprintf(html, "<td>%c</td>\n", ch);
        }
        fprintf(html, "</tr>\n");
    }
    fprintf(html, "</table>\n</body>\n</html>");
    fclose(html);
    return 0;
}