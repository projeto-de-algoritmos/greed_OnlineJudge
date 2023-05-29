#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,v;  // n = numero de cabeças do dragão -- m = numero de cavaleiros  --  v = 
    
    while(scanf("%d %d",&n,&m),n||m){  //leitura
        vector<int> dragoes;
        vector<int> cavaleiros;
        
    for(int i=0;i<n;i++){
        cin >> v;
        dragoes.push_back(v);
    }
    
    for(int i=0;i<m;i++){
        cin >> v;
        cavaleiros.push_back(v);
    }
        
    sort(dragoes.begin(),dragoes.end());
    sort(cavaleiros.begin(),cavaleiros.end());
    
    int moedas=0;int i=0;int j=0;
    
    while(i<n && j<m){
        while(dragoes[i] > cavaleiros[j] && j<m)
            j++;
            
            if(j == m) break;
            moedas += cavaleiros[j];
            i++;
            j++;
        }
        if(i == n) printf("%d\n",moedas);  // quantidade de moedas que o rei tem que pagar
        else printf("Loowater is doomed!\n");  // se o dragão não puder ser morto
    }
}