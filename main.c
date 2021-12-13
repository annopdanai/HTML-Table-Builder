#include <stdio.h>
#include <stdlib.h>

char ch[10];

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
    fprintf(html, "<html>\n<body>\n<table border=\"1\" style=\"width:100%%\">\n");
    for(int i = 0; i < column; i++)
    {
        fprintf(html, "<tr style=\"height:50px\">\n");
        for(int j = 0; j < row; j++)
        {
            printf("Enter the value of the cell %d - %d: ", i + 1, j + 1);
            scanf("%s", ch);
            fprintf(html, "<td>%s</td>\n", ch);
        }
        fprintf(html, "</tr>\n");
    }
    fprintf(html, "</table>\n</body>\n</html>");
    fclose(html);
    return 0;
}