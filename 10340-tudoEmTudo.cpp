#include <bits/stdc++.h>

using namespace std;

bool eSubseq(const string& a, const string& b){
    if(a.size() > b.size()) return false;
    
    int i = 0;
    
    for(int j=0; j<b.length() && i<a.size(); j++){ 
        
        if(b[j] == a[i]) i++;
    }
    return i==a.size();
}

int main() {

    string padrao,str;
    
    while(cin >> padrao){
        cin >> str;
        cout << (eSubseq(padrao,str) ? "Yes" : "No") << endl;
    }
}