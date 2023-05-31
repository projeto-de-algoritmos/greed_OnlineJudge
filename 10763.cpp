#include <bits/stdc++.h>
using namespace std;

set<pair<int, int>> origemDestino;
int main()
{
	int n;
	while (scanf("%d", &n) == 1 && n)
	{
		origemDestino.clear();
		for (int i = 0; i < n; ++i)
		{
			int origem, destino;
			scanf("%d%d", &origem, &destino);
			if (destino < origem)
				swap(origem, destino);
			if (origemDestino.count(make_pair(origem, destino)))
				origemDestino.erase(make_pair(origem, destino));
			else
				origemDestino.insert(make_pair(origem, destino));
		}
		printf(origemDestino.empty() ? "YES\n" : "NO\n");
	}
	return 0;
}