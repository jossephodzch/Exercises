#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cctype> 
using namespace std;

map<char, int> contarLetras(const string &cadena) {
    map<char, int> freq;
    for (char c : cadena) {
        if (isalpha(c)) { 
            c = tolower(c); 
            freq[c]++;
        }
    }
    return freq;
}

vector<pair<char,int>> letrasMasRepetidas(const map<char,int> &freq, int N) {
    vector<pair<char,int>> letras(freq.begin(), freq.end());

    sort(letras.begin(), letras.end(), [](pair<char,int> a, pair<char,int> b) {
        return a.second > b.second;
    });

    if (N < letras.size())
        letras.resize(N);

    return letras;
}

int main() {
    string texto;
    int N;

    cout << "Ingrese una cadena: ";
    getline(cin, texto);

    cout << "Ingrese el numero de letras mas repetidas a mostrar: ";
    cin >> N;

    map<char,int> frecuencia = contarLetras(texto);
    vector<pair<char,int>> topLetras = letrasMasRepetidas(frecuencia, N);

    cout << "\nLetra | Repeticiones\n";
    cout << "-------------------\n";
    for (auto &p : topLetras) {
        cout << "  " << p.first << "   |    " << p.second << endl;
    }

    return 0;
}
