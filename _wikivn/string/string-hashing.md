---
layout: wiki_vn
wiki: true
title: "String Hashing | 🇻🇳"
title_en: "String Hashing"
---

Hashing là một trong những kỹ thuật xử lý chuỗi thường được sử dụng trong việc **so sánh chuỗi**. Thông thường độ phức tạp khi so sánh 2 chuỗi là $O(\min(n_1, n_2))$ với $n_1$ và $n_2$ là length 2 chuỗi. Ý tưởng của hasing là map mỗi chuỗi thành 1 số int và so sánh 2 chuỗi trong $O(1)$.

**Điều kiện cần**: để 2 chuỗi $s = t$ thì giá trị hash của chúng bằng nhau $\text{hash}(s) = \text{hash}(t)$.

Tuy nhiên nếu $\text{hash}(s) = \text{hash}(t)$ thì đây chưa phải là **điều kiện đủ** để $s = t$, nhưng nếu giá trị hash là khác nhau, nó giúp ta xác định được chắc chắn $s \neq t$.

Do đó, ta có thể dùng 2-3 hàm hash khác nhau để **tăng xác suất** $s == t$ nếu **tất cả** hàm hash cho giá trị giống nhau.

## Lựa chọn hàm hash - Hash Function

Hàm hash thông dụng cho một chuỗi $s$ length $n$:

$$\begin{align}
\text{hash}(s) &= s[0] + s[1] \cdot p + s[2] \cdot p^2 + ... + s[n-1] \cdot p^{n-1} \mod m \\\\
&= \sum_{i=0}^{n-1} s[i] \cdot p^i \mod m,
\end{align}$$


với $p$ và $m$ là tham số tùy chọn, $p$ là **số nguyên tố** và $m$ là module cho **miền giá trị** hàm hash.

Hàm hash này còn được gọi là **polynomial rolling hash function**, hiểu nôm na là hàm hash cho phép tịnh tiến dựa trên phép toán đa thức.

Cách chọn tham số $p$ dựa trên số lượng **unique characters** trong chuỗi $s$, chẳng hạn tập ký tự alphabet, dạng lowercase sẽ chọn $p = 31$, nếu có cả uppercase, chọn $p = 53$.

Cách chọn tham số $m$ thông thường sẽ là **1 số nguyên tố lớn**, ví dụ $m = 10^9+9$ hoặc $m = 10^9+7$.

Ví dụ: chuỗi $s$ chỉ chứa các ký tự lowercase, ta quy ước $a \rightarrow 1$, $b \rightarrow 2$, $\dots$, $z \rightarrow 26$, không map $a \rightarrow 0$ vì hash của các chuỗi $a$, $aa$, $aaa$, $\dots$ luôn là $0$.

```cpp
long long compute_hash(string const& s) {
    const int p = 31;
    const int m = 1e9 + 9;
    long long hash_value = 0;
    long long p_pow = 1;
    for (char c : s) {
        hash_value = (hash_value + (c - 'a' + 1) * p_pow) % m;
        p_pow = (p_pow * p) % m;
    }
    return hash_value;
}
```

Tips: Precompute $p^i$ để tăng performance.

## Examples

### 1. Nhóm các chuỗi trùng lặp trong tập các chuỗi cho trước

**Problem:** Cho $n$ xâu $s_i$, mỗi chuỗi không dài quá $m$ ký tự. Tìm và phân loại các chuỗi bị lặp.

Giải thuật naive cho bài này là sort lại các chuỗi, độ phức tạp $O(n m \log n)$, với chi phí sort là $O(n \log n)$ và chi phí so chuỗi là $O(m)$.

Dùng hashing giúp giảm chi phí so chuỗi xuống còn $O(1)$, độ phức tạp sau cùng còn $O(n m + n \log n)$.


```cpp
vector<vector<int>> group_identical_strings(vector<string> const& s) {
    int n = s.size();
    vector<pair<long long, int>> hashes(n);
    for (int i = 0; i < n; i++)
        hashes[i] = {compute_hash(s[i]), i};

    sort(hashes.begin(), hashes.end());

    vector<vector<int>> groups;
    for (int i = 0; i < n; i++) {
        if (i == 0 || hashes[i].first != hashes[i-1].first)
            groups.emplace_back();
        groups.back().push_back(hashes[i].second);
    }
    return groups;
}
```

### 2. Tính nhanh giá trị hash của chuỗi con bất kì trong chuỗi cho trước.

**Problem:** Cho 1 chuỗi $s$ và $Q$ truy vấn dạng $i$, $j$. Với mỗi truy vấn tính giá trị hash của chuỗi con $s [i \dots j]$. 

Ta có hàm hash cần tìm cho mỗi truy vấn $i$, $j$ là

$$\begin{align}
$$\text{hash}(s[i \dots j]) = \sum_{k = i}^j s[k] \cdot p^{k-i} \mod m$$
\end{align}$$


Như đã đề cập, hàm hash được gọi là **polynomial rolling hash function**, ta dễ thấy rằng:


$$\begin{align}
\text{hash}(s[i \dots j]) \cdot p^i &= \sum_{k = i}^j s[k] \cdot p^k \mod m \\\\
&= \text{hash}(s[0 \dots j]) - \text{hash}(s[0 \dots i-1]) \mod m
\end{align}$$


Do đó ta dễ dàng tính được $\text{hash}(s[i \dots j])$ từ 2 prefix đã khởi tạo trước là $\text{hash}(s[0 \dots j])$ và $\text{hash}(s[0 \dots i-1])$. 

Tuy nhiên ở đây xuất hiện **phép toán chia trong miền module** (chia cho $p^i$), do đó cần phải tính trước [modular multiplicative inverse](../../wiki/algebra/module-inverse) của $p^i$, sau đó thay thành phép nhân với giá trị inverse.

Từ đó dễ dàng tính được mỗi truy vấn trong $O(1)$.


## Ứng dụng của hashing

Một số ứng dụng của hashing:

* [Rabin-Karp algorithm](../../wiki/string/rabin-karp): pattern matching trong $O(n)$.
* Đếm số lượng substrings phân biệt của 1 chuỗi trong $O(n^2 \log n)$.
* Đếm số palindrom substrings trong 1 chuỗi.

### 1. Đếm số lượng substrings phân biệt của 1 chuỗi

**Problem:** Cho 1 xâu $s$ length $n$, gồm các ký tự lowercase. Đếm số substrings phân biệt trong chuỗi.

Solution: duyệt qua các length $l = 1 \dots n$, với mỗi length $l$, tính lại hash của các substring có length $l$ trong $O(1)$ cho mỗi substring (precompute các hash và power). 

Độ phức tạp: $O(n^2 \log n)$


```cpp
int count_unique_substrings(string const& s) {
    int n = s.size();
    
    const int p = 31;
    const int m = 1e9 + 9;
    vector<long long> p_pow(n);
    p_pow[0] = 1;
    for (int i = 1; i < n; i++)
        p_pow[i] = (p_pow[i-1] * p) % m;

    vector<long long> h(n + 1, 0);
    for (int i = 0; i < n; i++)
        h[i+1] = (h[i] + (s[i] - 'a' + 1) * p_pow[i]) % m;

    int cnt = 0;
    for (int l = 1; l <= n; l++) {
        set<long long> hs;
        for (int i = 0; i <= n - l; i++) {
            long long cur_h = (h[i + l] + m - h[i]) % m;
            cur_h = (cur_h * p_pow[n-i-1]) % m;
            hs.insert(cur_h);
        }
        cnt += hs.size();
    }
    return cnt;
}
```

## Cải thiện xác suất đụng độ (collision)

Xác suất để xảy ra đụng độ cho 2 chuỗi có cùng giá trị hash là rất thấp với các tham số $p$ và $m$ đã chọn như đã trình bày, chỉ khoảng $\approx \frac{1}{m}$.


Với $m = 10^9 + 9$, xác suất là $\approx 10^{-9}$ là rất nhỏ.

Tuy nhiên, nếu ta thay đổi sang lăng kính khác, khi ta so 1 chuỗi $s$ với $10^6$ chuỗi khác, xác suất đụng độ tăng lên thành $\approx 10^{-3}$. Và nếu so trong cùng $10^6$ chuỗi đó (đếm số unique string), xác suất lúc này là $\approx 1$.

Một trick là ta tạo thêm 1 bộ $(p, m)$ khác để compare trên 2 hàm hash khác nhau, giúp giảm khả năng đụng độ.


## Practice Problems

* [A Needle in the Haystack - SPOJ](http://www.spoj.com/problems/NHAY/)
* [Double Profiles - Codeforces](http://codeforces.com/problemset/problem/154/C)
* [Password - Codeforces](http://codeforces.com/problemset/problem/126/B)
* [SUB_PROB - SPOJ](http://www.spoj.com/problems/SUB_PROB/)
* [INSQ15_A](https://www.codechef.com/problems/INSQ15_A)
* [SPOJ - Ada and Spring Cleaning](http://www.spoj.com/problems/ADACLEAN/)
* [GYM - Text Editor](http://codeforces.com/gym/101466/problem/E)
* [12012 - Detection of Extraterrestrial](https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=3163)
* [Codeforces - Games on a CD](http://codeforces.com/contest/727/problem/E)
* [UVA 11855 - Buzzwords](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2955)
* [Codeforces - Santa Claus and a Palindrome](http://codeforces.com/contest/752/problem/D)
* [Codeforces - String Compression](http://codeforces.com/contest/825/problem/F)
* [Codeforces - Palindromic Characteristics](http://codeforces.com/contest/835/problem/D)
* [SPOJ - Test](http://www.spoj.com/problems/CF25E/)
* [Codeforces - Palindrome Degree](http://codeforces.com/contest/7/problem/D)
* [Codeforces - Deletion of Repeats](http://codeforces.com/contest/19/problem/C)
* [HackerRank - Gift Boxes](https://www.hackerrank.com/contests/womens-codesprint-5/challenges/gift-boxes)



