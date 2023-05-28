#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, m, l, r;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &m);
        vector<pair<int, int>> intervalos;
        while (scanf("%d %d", &l, &r), l || r)
        {
            intervalos.push_back({l, r});
        }
        sort(intervalos.begin(), intervalos.end());
        vector<int> res;
        int aux = 0;
        for (int i = 0; i < intervalos.size() && aux < m; i++)
        {
            if (intervalos[i].first > aux)
            {
                res.clear();
                break;
            }
            int distanteDireita = intervalos[i].second;
            int melhor = i;
            while (i + 1 < intervalos.size() && intervalos[i + 1].first <= aux)
            {
                if (distanteDireita < intervalos[++i].second)
                {
                    distanteDireita = intervalos[i].second;
                    melhor = i;
                }
            }
            res.push_back(melhor);
            aux = distanteDireita;
        }
        if (aux < m)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n", res.size());
            for (auto &i : res)
                printf("%d %d\n", intervalos[i].first, intervalos[i].second);
        }
        if (t)
            cout << endl;
    }
}