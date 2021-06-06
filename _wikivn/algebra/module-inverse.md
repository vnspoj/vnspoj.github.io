---
layout: wiki_vn
wiki: true
title: "Modular Inverse | Nghịch đảo module | 🇻🇳"
---

Nghich đảo module hay Module Inverse của một số nguyên $a$ trên miền module $m$ ($[0..m-1]$) là một số nguyên $a^{-1}$ thoả mãn:

$$a \cdot a^{-1} \equiv 1 \mod m.$$

Lưu ý rằng không phải lúc nào $a^{-1}$ cũng tồn tại, lấy ví dụ $m = 4$, $a = 2$, sẽ không tồn tại $a^{-1}$ thoả.

Có thể chứng minh được rằng $a^{-1}$ tồn tại nếu và chỉ nếu $a,m$ nguyên tố cùng nhau, tức $gcd(a,m) = 1$.

Trong bài viết này, chúng ta sẽ trình bày các cách để tìm module inverse.

## Extended Euclidean Algorithm - Giải thuật Euclid mở rộng

Phương pháp sử dụng [giải thuật Euclid mở rộng](https://vi.wikipedia.org/wiki/Gi%E1%BA%A3i_thu%E1%BA%ADt_Euclid_m%E1%BB%9F_r%E1%BB%99ng).

Theo Euclid mở rộng, ta có nếu $gcd(a,m) = 1$ thì ta luôn tìm được 2 số $x$, $y$ thoả mãn:

$$a \cdot x + m \cdot y = 1$$

Trên miền module $m$, điều này tương đương với

$$a \cdot x \equiv 1 \mod m$$

Do đó $x$ lúc này chính là giá trị $a^{-1}$ cần tìm.

Hiện thực như sau:

```cpp
int x, y;
int g = extended_euclidean(a, m, x, y);
if (g != 1) {
    cout << "No solution!";
}
else {
    x = (x % m + m) % m;
    cout << x << endl;
}
```

## Euler's theorem - Định lý Euler

Phương pháp sử dụng [định lý Euler](https://vi.wikipedia.org/wiki/%C4%90%E1%BB%8Bnh_l%C3%BD_Euler).

Theo định lý Euler, ta có nếu $gcd(a,m) = 1$ thì:

$$a^{\phi (m)} \equiv 1 \mod m$$

trong đó $\phi$ là [hàm phi Euler](https://vi.wikipedia.org/wiki/H%C3%A0m_phi_Euler) (hay [Euler's totient function](https://en.wikipedia.org/wiki/Euler%27s_totient_function))

**Nói sơ qua về hàm phi Euler:**

Trong lý thuyết số, **hàm số Euler** của một số nguyên dương $n$ được định nghĩa là **số các số** nguyên dương **nhỏ hơn hoặc bằng** $n$ n**guyên tố cùng nhau** với $n$. Hàm Euler được ký hiệu bởi $\phi (n)$ hoặc $\varphi (n)$, do đó hàm được gọi làm hàm phi Euler.

Chẳng hạn,  $\phi (9) = 6$ vì có 6 số $1, 2, 4, 5,7, 8$ nguyên tố cùng nhau với $9$.

**Quay lại với bài toán:**

Nếu $m$ là số nguyên tố, theo [định lý Fermat nhỏ](https://vi.wikipedia.org/wiki/%C4%90%E1%BB%8Bnh_l%C3%BD_nh%E1%BB%8F_Fermat) (hay [Fermat's little theorem](http://en.wikipedia.org/wiki/Fermat's_little_theorem)), ta có 

$$\phi (m) = m-1$$

Do đó ta có điều này khi $m$ nguyên tố:

$$a^{m - 1} \equiv 1 \mod m$$

Nhân 2 vế với $a^{-1}$, ta được:

+ Với $m$ bất kì: $a ^ {\phi (m) - 1} \equiv a ^{-1} \mod m$
+ Với $m$ nguyên tố: $a ^ {m - 2} \equiv a ^ {-1} \mod m$

Từ đây, ta có thể tính được module inverse bằng cách dùng [binary exponentiation algorithm](../../wiki/algebra/binary-exp) trong thời gian $O(\log m)$.

Giải thuật này chỉ thích hợp đối với $m$ là số nguyên tố, do có thể dễ dàng tính được trong $O(\log m)$. Đối với $m$ không nguyên tố, ta cần phải tính giá trị $\phi (m)$ bằng cách phân tích thừa số nguyên tố.

## Tìm nghịch đảo module của mọi số module $m$

Bài toán đặt ra: tính module nghịch đảo của mọi số trong đoạn $[1, m-1]$.

Áp dụng các giải thuật đã đề cập, ta có thể giải quyết với độ phức tạp $O(m \log m)$.

Dưới đây là một giải thuật tối ưu hơn với độ phức tạp $O(m)$ đối với **$m$ là số nguyên tố**.

Ký hiệu $\text{inv}[i]$ là nghịch đảo của $i$ cho module $m$.

Với $i > 1$, ta có

$$\text{inv}[i] = - \left\lfloor \frac{m}{i} \right\rfloor \cdot \text{inv}[m \bmod i] \bmod m$$

Hiện thực chỉ đơn giản như sau:

```cpp
inv[1] = 1;
for(int i = 2; i < m; ++i)
    inv[i] = m - (m/i) * inv[m%i] % m;
```

**Chứng minh:**

Ta có:

$$m \bmod i = m -  \left\lfloor \frac{m}{i} \right\rfloor \cdot i$$

Đồng dư $m$ cho 2 vế, ta được:

$$m \bmod i \equiv - \left\lfloor \frac{m}{i} \right\rfloor \cdot i \mod m$$

Nhân 2 vế với $i^{-1} \cdot (m \bmod i)^{-1}$:

$$(m \bmod i) \cdot i^{-1} \cdot (m \bmod i)^{-1} \equiv -\left\lfloor \frac{m}{i} \right\rfloor \cdot i \cdot i^{-1} \cdot (m \bmod i)^{-1} \mod m,$$

Đơn giản 2 vế còn:

$$i^{-1} \equiv -\left\lfloor \frac{m}{i} \right\rfloor \cdot (m \bmod i)^{-1} \mod m,$$

## Practice Problems

* [UVa 11904 - One Unit Machine](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3055)
* [Hackerrank - Longest Increasing Subsequence Arrays](https://www.hackerrank.com/contests/world-codesprint-5/challenges/longest-increasing-subsequence-arrays)
* [Codeforces 300C - Beautiful Numbers](http://codeforces.com/problemset/problem/300/C)
* [Codeforces 622F - The Sum of the k-th Powers](http://codeforces.com/problemset/problem/622/F)
* [Codeforces 717A - Festival Organization](http://codeforces.com/problemset/problem/717/A)
* [Codeforces 896D - Nephren Runs a Cinema](http://codeforces.com/problemset/problem/896/D)

