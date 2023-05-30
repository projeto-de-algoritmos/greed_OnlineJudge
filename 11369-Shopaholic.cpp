#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,v;  //t = casos de teste / n = numero de itens q vao ser comprados / v = precos dos itens
    
    cin >> t;
    
    while(t--){
        cin >> n;
        
        vector<int> precos;
        
        for(int i=0;i<n;i++){
            cin >> v;
            precos.push_back(v);
        }
        
        sort(precos.begin(),precos.end(),greater<int>());
        
        int resultado = 0;
        
        for(int i=2;i<n;i+=3) resultado+= precos[i];
        
        cout << resultado << endl;
    }
}