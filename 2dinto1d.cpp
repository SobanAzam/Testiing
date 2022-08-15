#include <iostream>
using namespace std;
int main()
{
    int n, m; 
    cin >> n >> m; // input rows and columns
    int a[n][m];
    int b[n * m]; // 1d array dec
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j]; // 2d array input
        }
    }

    int k=0; // temp var for 1d array

    for (int  r = 0; r < n; r++)
    {
        for (int t = 0; t < m; t++)
        {
            b[k++]=a[r][t]; // 2d into 1d
        }
        
    }

    
    for (int  v = 0; v < n*m; v++)
    {
       cout<<b[v];
    }


    int counter = 1;
    while (counter < n*m)
    {
        for (int s = 0; s < n - counter; s++)
        {
            if (b[s]>b[s+1])
            {
                int temp = b[s];
                b[s] = b[s + 1];
                b[s + 1] = temp;
            }
            counter ++;            
        }
        
    }

    k=0;

    for (int  ro = 0; ro < n; ro++)
    {
        for (int co = 0; co < m; co++)
        {
            a[ro][co]=b[k++]; // 1d into 2d
        }
        
    }

    for (int  rows = 0; rows < n; rows++)
    {
        for (int col = 0; col < m; col++)
        {
            a[rows][col];
        }
        
    }
        

    return 0;
}
