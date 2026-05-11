#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

struct Edge {
    int to, cap, flow, rev;
};

vector<vector<Edge>> adj;
vector<int> level, ptr;

void add_edge(int from, int to, int cap) {
    adj[from].push_back({to, cap, 0, (int)adj[to].size()});
    adj[to].push_back({from, 0, 0, (int)adj[from].size() - 1});
}

bool bfs(int s, int t) {
    fill(level.begin(), level.end(), -1);
    level[s] = 0;
    queue<int> q;
    q.push(s);
    while (!q.empty()) {
        int v = q.front(); q.pop();
        for (auto& e : adj[v]) {
            if (e.cap - e.flow > 0 && level[e.to] == -1) {
                level[e.to] = level[v] + 1;
                q.push(e.to);
            }
        }
    }
    return level[t] != -1;
}

int dfs(int v, int t, int pushed) {
    if (pushed == 0 || v == t) return pushed;
    for (int& cid = ptr[v]; cid < adj[v].size(); ++cid) {
        auto& e = adj[v][cid];
        if (level[v] + 1 != level[e.to] || e.cap - e.flow == 0) continue;
        int tr = dfs(e.to, t, min(pushed, e.cap - e.flow));
        if (tr == 0) continue;
        e.flow += tr;
        adj[e.to][e.rev].flow -= tr;
        return tr;
    }
    return 0;
}

bool can_werewolf_win(int k, int N, const vector<pair<int, int>>& choices) {
    int Vk = 0;
    vector<int> U; 
    for (int i = 0; i < N; ++i) {
        if (i == k) continue;
        if (choices[i].first == k || choices[i].second == k) Vk++;
        else U.push_back(i);
    }

    if (Vk <= 1) return true;

    int ak = choices[k].first, bk = choices[k].second;
    int source = 0, sink = N + U.size() + 1;
    adj.assign(sink + 1, vector<Edge>());
    level.resize(sink + 1);
    ptr.resize(sink + 1);

    for (int i = 0; i < U.size(); ++i) {
        int p = U[i];
        add_edge(source, i + 1, 1);
        add_edge(i + 1, U.size() + 1 + choices[p].first, 1);
        if (choices[p].first != choices[p].second)
            add_edge(i + 1, U.size() + 1 + choices[p].second, 1);
    }

    for (int j = 0; j < N; ++j) {
        if (j == k) continue;
        int limit = (j == ak || j == bk) ? Vk - 2 : Vk - 1;
        if (limit < 0) return true;
        add_edge(U.size() + 1 + j, sink, limit);
    }

    int max_flow = 0;
    while (bfs(source, sink)) {
        fill(ptr.begin(), ptr.end(), 0);
        while (int pushed = dfs(source, sink, INF)) max_flow += pushed;
    }

    return max_flow < (int)U.size();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    if (!(cin >> N)) return 0;
    vector<pair<int, int>> choices(N);
    for (int i = 0; i < N; ++i) {
        cin >> choices[i].first >> choices[i].second;
        choices[i].first--; choices[i].second--; 
    }

    int winners = 0;
    for (int k = 0; k < N; ++k) {
        if (can_werewolf_win(k, N, choices)) winners++;
    }

    cout << winners << endl;
    return 0;
}