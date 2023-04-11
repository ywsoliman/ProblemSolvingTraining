vector<int> permutationEquation(const vector<int>& p) {
    vector<int> v(p.size() + 1), res;
    for (int i = 1; i <= p.size(); i++)
            v[p[i - 1]] = i;
    for (int i = 1; i <= p.size(); i++)
        res.push_back(v[v[i]]);
    return res;
}