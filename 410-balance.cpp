#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc = 1, centrifuga, s, v;
    while (scanf("%d %d", &centrifuga, &s) != EOF)
    {
        // dummy amostras, assign 2 to each chamber
        vector<int> amostras(2 * centrifuga);
        int total = 0;
        for (int i = 0; i < s; i++)
        {
            cin >> v;
            amostras[i] = v;
            total += v;
        }
        double avg = (double)total / centrifuga, balanciada = 0;
        sort(amostras.begin(), amostras.end());
        printf("Set #%d\n", tc++);
        for (int i = 0; i < centrifuga; i++)
        {
            printf(" %d:", i);
            if (amostras[i])
                printf(" %d", amostras[i]);
            if (amostras[amostras.size() - 1 - i])
                printf(" %d", amostras[amostras.size() - 1 - i]);
            printf("\n");
            balanciada += abs(avg - (amostras[i] + amostras[amostras.size() - 1 - i]));
        }
        printf("IMBALANCE = %.5f\n", balanciada);
        printf("\n");
    }
}