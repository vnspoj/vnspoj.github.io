---
layout: wiki_vn
wiki: true
title: "Rabin-Karp Algorithm | 🇻🇳"
title_en: "Rabin-Karp Algorithm"
---


Giải thuật Rabin-Karp dựa trên [String Hashing](../string/string-hashing.md), giúp xác định một pattern $s$ xuất hiện trong một chuỗi $T$ cho trước trong thời gian $O(\|T\| + \|s\|)$.

**Giải thuật:** Tính giá trị hash của pattern $s$ và các prefix của chuỗi $T$.

So sánh từng substring của chuỗi $T$ length $\|s\|$, chi phí so giá trị hash trong $O(1)$, do đó tốn $O(\|T\|)$ cho mọi substrings.

Do đó độ phức tạp là $O(\|T\| + \|s\|)$ với $O(\|s\|)$ là tính giá trị hash của pattern $s$ và $O(\|T\|)$ cho việc compare từng substring trong chuỗi $T$.

## Implementation

```cpp
vector<int> rabin_karp(string const& s, string const& t) {
    const int p = 31; 
    const int m = 1e9 + 9;
    int S = s.size(), T = t.size();

    vector<long long> p_pow(max(S, T)); 
    p_pow[0] = 1; 
    for (int i = 1; i < (int)p_pow.size(); i++) 
        p_pow[i] = (p_pow[i-1] * p) % m;

    vector<long long> h(T + 1, 0); 
    for (int i = 0; i < T; i++)
        h[i+1] = (h[i] + (t[i] - 'a' + 1) * p_pow[i]) % m; 
    long long h_s = 0; 
    for (int i = 0; i < S; i++) 
        h_s = (h_s + (s[i] - 'a' + 1) * p_pow[i]) % m; 

    vector<int> occurences;
    for (int i = 0; i + S - 1 < T; i++) { 
        long long cur_h = (h[i+S] + m - h[i]) % m; 
        if (cur_h == h_s * p_pow[i] % m)
            occurences.push_back(i);
    }
    return occurences;
}
```

## Practice Problems

* [SPOJ - Pattern Find](http://www.spoj.com/problems/NAJPF/)
* [Codeforces - Good Substrings](http://codeforces.com/problemset/problem/271/D)
* [Codeforces - Palindromic characteristics](https://codeforces.com/problemset/problem/835/D)


