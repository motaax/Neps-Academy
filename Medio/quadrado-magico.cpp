#include <iostream>
#include <vector>

using namespace std;

int main() {
    int m[3][3];
    int zeros = 0;

    // Lendo a matriz e contando os zeros
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> m[i][j];
            if (m[i][j] == 0) zeros++;
        }
    }

    int S = -1;

    // 1. Tentar encontrar S em linhas completas
    for (int i = 0; i < 3; i++) {
        if (m[i][0] != 0 && m[i][1] != 0 && m[i][2] != 0)
            S = m[i][0] + m[i][1] + m[i][2];
    }
    // 2. Tentar encontrar S em colunas completas
    for (int j = 0; j < 3; j++) {
        if (m[0][j] != 0 && m[1][j] != 0 && m[2][j] != 0)
            S = m[0][j] + m[1][j] + m[2][j];
    }
    // 3. Diagonais
    if (m[0][0] != 0 && m[1][1] != 0 && m[2][2] != 0) S = m[0][0] + m[1][1] + m[2][2];
    if (m[0][2] != 0 && m[1][1] != 0 && m[2][0] != 0) S = m[0][2] + m[1][1] + m[2][0];

    // 4. Se S ainda não foi achado, usar a propriedade do centro
    if (S == -1) {
        if (m[1][1] != 0) {
            S = 3 * m[1][1];
        } else {
            // Se o centro é zero e não há linhas completas, 
            // S = 3/2 * (soma dos elementos não-zero da linha ou coluna do meio)
            S = (m[1][0] + m[1][2]) * 3 / 2;
        }
    }

    // Preencher os zeros repetidamente até completar os 3
    while (zeros > 0) {
        // Linhas
        for (int i = 0; i < 3; i++) {
            int z_count = 0, sum = 0, pos = -1;
            for (int j = 0; j < 3; j++) {
                if (m[i][j] == 0) { z_count++; pos = j; }
                else sum += m[i][j];
            }
            if (z_count == 1) { m[i][pos] = S - sum; zeros--; }
        }
        // Colunas
        for (int j = 0; j < 3; j++) {
            int z_count = 0, sum = 0, pos = -1;
            for (int i = 0; i < 3; i++) {
                if (m[i][j] == 0) { z_count++; pos = i; }
                else sum += m[i][j];
            }
            if (z_count == 1) { m[pos][j] = S - sum; zeros--; }
        }
        // Diagonais (opcional, mas ajuda na robustez)
        int d1_z = 0, d1_sum = 0, d1_p = -1;
        for(int i=0; i<3; i++) {
            if(m[i][i] == 0) { d1_z++; d1_p = i; }
            else d1_sum += m[i][i];
        }
        if(d1_z == 1) { m[d1_p][d1_p] = S - d1_sum; zeros--; }

        int d2_z = 0, d2_sum = 0, d2_p = -1;
        for(int i=0; i<3; i++) {
            if(m[i][2-i] == 0) { d2_z++; d2_p = i; }
            else d2_sum += m[i][2-i];
        }
        if(d2_z == 1) { m[d2_p][2-d2_p] = S - d2_sum; zeros--; }
    }

    // Saída
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << m[i][j] << (j == 2 ? "" : " ");
        }
        cout << endl;
    }

    return 0;
}