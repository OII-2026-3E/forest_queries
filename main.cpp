#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<vector<int>> matrix(n, vector<int>(n, 0));

    for(int i = 0; i < n; i++)
    {
        string line;
        cin >> line;

        int j = 0;
        for(char C:line)
        {
            int value;
            switch(C)
            {
                case '.':
                    value = 0;
                    break;
                case '*':
                    value = 1;
                    break;
            }

            matrix[i, j];
            j++;
        }
    }



    return 0;
}
