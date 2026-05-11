#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int K;
    cin >> K;

    string d;
    cin >> d;

    int N;
    cin >> N;

    vector<string> alunos(N);

    for (int i = 0; i < N; i++) {
        cin >> alunos[i];
    }

    int soma = 0;

    for (int j = 0; j < K; j++) {

        int freq[26] = {0};

        for (int i = 0; i < N; i++) {
            freq[alunos[i][j] - 'A']++;
        }

        int melhor = 0;

        for (int c = 0; c < 26; c++) {

            if (c == d[j] - 'A')
                continue;

            melhor = max(melhor, freq[c]);
        }

        soma += melhor;
    }

    cout << soma << endl;

    return 0;
}