#include <stdio.h>

char field[102][102];

int main()
{
    int n, m, i, j, caseNum = 1;
    while (scanf("%d %d", &n, &m) == 2 && n && m)
    { 
        if (caseNum != 1) printf("\n"); 
        for (i = 0; i < n; i ++)
            scanf("%s", field[i]);
        for (i = 0; i < n; i ++)
        {
            for (j = 0; j < m; j ++)
            {
                if (field[i][j] == '*') continue;
                else
                {
                    int count = 0;
                    /* 上方 */ 
                    if (i != 0 && field[i - 1][j] == '*') count ++;
                    /* 下方 */
                    if (i != n - 1 && field[i + 1][j] == '*') count ++;
                    /* 左方 */
                    if (j != 0 && field[i][j - 1] == '*') count ++;
                    /* 右方 */
                    if (j != m - 1 && field[i][j + 1] == '*') count ++;
                    /* 左上 */
                    if (i != 0 && j != 0 && field[i - 1][j - 1] == '*') count ++;
                    /* 右上 */
                    if (i != 0 && j != m - 1 && field[i - 1][j + 1] == '*') count ++;
                    /* 左下 */
                    if (i != n - 1 && j != 0 && field[i + 1][j - 1] == '*') count ++;
                    /* 右下 */
                    if (i != n - 1 && j != m - 1 && field[i + 1][j + 1] == '*') count ++;
                    field[i][j] = count + '0';
                }
            }
        }
        printf("Field #%d:\n", caseNum ++);
        for (i = 0; i < n; i ++)
            printf("%s\n", field[i]);
           
    }
    return 0;
}