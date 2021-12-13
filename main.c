#include <stdio.h>
#include <stdlib.h>

char ch;

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
<<<<<<< Updated upstream
    fprintf(html, "<html>\n<body>\n<table border=\"1\">\n");
=======
    fprintf(html, "<html>\n<body>\n<center>\n<table border=\"1\" style=\"width:50%%\">\n");
>>>>>>> Stashed changes
    for(int i = 0; i < column; i++)
    {
        fprintf(html, "<tr>\n");
        for(int j = 0; j < row; j++)
        {
<<<<<<< Updated upstream
            while ((ch = getchar()) != '\n' && ch != EOF);
            printf("Enter the value of the cell %d%d: ", j + 1, i + 1);
            scanf("%d", &ch);
            fprintf(html, "<td>%d</td>\n", ch);
=======
            printf("Enter the value of the cell %d - %d: ", i + 1, j + 1);
            scanf("%s", ch);
            fprintf(html, "<td style=\"text-align: center; vertical-align: middle;\">%s</td>\n", ch);
>>>>>>> Stashed changes
        }
        fprintf(html, "</tr>\n");
    }
    fprintf(html, "</table>\n</center>\n</body>\n</html>");
    fclose(html);
    return 0;
}