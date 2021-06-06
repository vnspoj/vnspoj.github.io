---
layout: wiki_vn
wiki: true
title: "Euler's totient function | Hàm phi Euler | 🇻🇳"
---

Trong lý thuyết số, **hàm số Euler** hay **hàm phi Euler** (còn gọi là phi hàm Euler) của một số nguyên dương $n$ được định nghĩa là **số các số** nguyên dương **nhỏ hơn hoặc bằng** $n$ n**guyên tố cùng nhau** với $n$. Hàm Euler được ký hiệu bởi $\phi (n)$ hoặc $\varphi (n)$, do đó hàm được gọi làm hàm phi Euler.

Chẳng hạn,  $\phi (9) = 6$ vì có 6 số $1, 2, 4, 5,7, 8$ nguyên tố cùng nhau với $9$.

Đây là giá trị $\phi$ của các số nguyên đầu tiên:

$$\begin{array}{|c|c|c|c|c|c|c|c|c|c|c|c|c|c|c|c|c|c|c|c|c|c|}
\hline
n & 1 & 2 & 3 & 4 & 5 & 6 & 7 & 8 & 9 & 10 & 11 & 12 & 13 & 14 & 15 & 16 & 17 & 18 & 19 & 20 & 21 \\\\ \hline
\phi(n) & 1 & 1 & 2 & 2 & 4 & 2 & 6 & 4 & 6 & 4 & 10 & 4 & 12 & 6 & 8 & 8 & 16 & 6 & 18 & 8 & 12 \\\\ \hline
\end{array}$$



## Một số tính chất của hàm phi Euler

Một số tính chất của hàm phi Euler:

+ Nếu $p$ là số nguyên tố thì $\gcd(p, q) = 1$ với $1 \le q < p$, do đó có $\phi (p) = p - 1$. (định lý Fermat nhỏ)

+ Nếu $p$ là số nguyên tố và $k \ge 1$, thì có $\frac{p^k}{p} = p^{k-1}$ số từ $1..p^k$ chia hết cho $p$. Do đó ta có $\phi(p^k) = p^k - p^{k-1}$.

+ Nếu $a$ và $b$ nguyên tố cùng nhau, hay $gcd(a,b) = 1$, ta có $\phi(a b) = \phi(a) \cdot \phi(b)$. Tính chất này không phải dễ dàng để nhận thấy. Dựa trên [Định lý phần dư Trung Hoa](../../wiki/algebra/chinese-remainder-theorem), với mỗi $0 \le x < a$ và $0 \le y < b$ thì sẽ tồn tại 1 số $0 \le z < a b$ thoả $z \equiv x \pmod{a}$ và $z \equiv y \pmod{b}$. Dễ thấy $z$ nguyên tố cùng nhau với $a b$ nếu và chỉ nếu $x$ nguyên tố cùng nhau với $a$ và $y$ nguyên tố cùng nhau với $b$. Do đó số lượng số nguyên tố cùng nhau với $a b$ là tích của 2 thành phần $a$ và $b$ hay $\phi(a b) = \phi(a) \cdot \phi(b)$.

+ Đối với $a$ và $b$ không nguyên tố cùng nhau, $\phi(ab) = \phi(a) \cdot \phi(b) \cdot \dfrac{d}{\phi(d)}$ với $d = \gcd(a, b)$.

Dựa trên 3 tính chất đầu tiên, ta có thể tính được $\phi(n)$ thông qua việc phân tích thừa số nguyên tố $n$. Cụ thể nếu

$$n = {p_1}^{a_1} \cdot {p_2}^{a_2} \cdots {p_k}^{a_k}$$

với $p_i$ là thừa số nguyên tố thứ $i$ của $n$.

Khi đó ta có:

$$\begin{align}
\phi (n) &= \phi ({p_1}^{a_1}) \cdot \phi ({p_2}^{a_2}) \cdots  \phi ({p_k}^{a_k}) \\\\
&= \left({p_1}^{a_1} - {p_1}^{a_1 - 1}\right) \cdot \left({p_2}^{a_2} - {p_2}^{a_2 - 1}\right) \cdots \left({p_k}^{a_k} - {p_k}^{a_k - 1}\right) \\\\
&= p_1^{a_1} \cdot \left(1 - \frac{1}{p_1}\right) \cdot p_2^{a_2} \cdot \left(1 - \frac{1}{p_2}\right) \cdots p_k^{a_k} \cdot \left(1 - \frac{1}{p_k}\right) \\\\
&= n \cdot \left(1 - \frac{1}{p_1}\right) \cdot \left(1 - \frac{1}{p_2}\right) \cdots \left(1 - \frac{1}{p_k}\right)
\end{align}$$



## Implementation

Độ phức tạp của phép phân tích thừa số nguyên tố của số nguyên $n$ là trong $O(\sqrt{n})$. Do đố độ phức tạp của hàm $\phi (n)$ cũng là $O(\sqrt{n})$.

```cpp
int phi(int n) {
    int result = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}
```

## Tính phi hàm Euler từ $1$ tới $n$ trong $O(n \log\log{n})$

Bài toán đặt ra là tính phi hàm Euler cho mọi số từ $1$ tới $n$. Nếu ta thực hiện giải thuật trên cho từng số trong đoạn $1..n$ thì sẽ không hiệu quả.

Chúng ta sử dụng ý tưởng từ giải thuật [sàng Eratos](../algebra/sieve-of-eratosthenes), với độ phức tạp $O(n \log \log n)$.

```cpp
void phi_1_to_n(int n) {
    vector<int> phi(n + 1);
    phi[0] = 0;
    phi[1] = 1;
    for (int i = 2; i <= n; i++)
        phi[i] = i;
    
    for (int i = 2; i <= n; i++) {
        if (phi[i] == i) {
            for (int j = i; j <= n; j += i)
                phi[j] -= phi[j] / i;
        }
    }
}
```


## Tính chất tổng hàm phi từ các ước số

Một tính chất thú vị sau từ hàm phi Euler:

$$ \sum_{d|n} \phi{(d)} = n$$

Ví dụ với $n = 10$, các ước số của $10$ là $1, 2, 5, 10$, khi đó ta có:

$\phi{(1)} + \phi{(2)} + \phi{(5)} + \phi{(10)} = 1 + 1 + 4 + 4 = 10$

### Tính phi hàm Euler từ $1$ tới $n$ trong $O(n \log{n})$

Dựa trên tính chất này, ta cũng có giải thuật để tính hàm phi cho mọi số trong đoạn $1,n$ với độ phức tạp cao hơn giải thuật trước, với độ phức tạp $O(n \log n)$.

```cpp
void phi_1_to_n(int n) {
    vector<int> phi(n + 1);
    phi[0] = 0;
    phi[1] = 1;
    for (int i = 2; i <= n; i++)
        phi[i] = i - 1;
    
    for (int i = 2; i <= n; i++)
        for (int j = 2 * i; j <= n; j += i)
              phi[j] -= phi[i];
}
```

## Ứng dụng của hàm phi Euler

Tính chất nổi tiếng và quan trọng nhất của hàm phi Euler được sử dụng trong [định lý Euler](https://vi.wikipedia.org/wiki/%C4%90%E1%BB%8Bnh_l%C3%BD_Euler):

$$a^{\phi(m)} \equiv 1 \pmod m$$ 

với $a$ và $m$ nguyên tố cùng nhau.

Thông thường $m$ là số nguyên tố, khi đó định lý Euler lúc này được đưa về [định lý Fermat nhỏ](https://vi.wikipedia.org/wiki/%C4%90%E1%BB%8Bnh_l%C3%BD_nh%E1%BB%8F_Fermat) như sau:

$$a^{m - 1} \equiv 1 \pmod m$$

Các định lý này thường được sử dụng trong các bài toán thực tế, cụ thể như bài toán [tìm nghich đảo module](../algebra/module-inverse) hay [modular multiplicative inverse](../../wiki/algebra/module-inverse)


## Practice Problems  

* [SPOJ #4141 "Euler Totient Function" [Difficulty: CakeWalk]](http://www.spoj.com/problems/ETF/)
* [UVA #10179 "Irreducible Basic Fractions" [Difficulty: Easy]](http://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1120)
* [UVA #10299 "Relatives" [Difficulty: Easy]](http://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1240)
* [UVA #11327 "Enumerating Rational Numbers" [Difficulty: Medium]](http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2302)
* [TIMUS #1673 "Admission to Exam" [Difficulty: High]](http://acm.timus.ru/problem.aspx?space=1&num=1673)
* [UVA 10990 - Another New Function](https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1931)
* [Codechef - Golu and Sweetness](https://www.codechef.com/problems/COZIE)
* [SPOJ - LCM Sum](http://www.spoj.com/problems/LCMSUM/)
* [GYM - Simple Calculations  (F)](http://codeforces.com/gym/100975)
* [UVA 13132 - Laser Mirrors](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=5043)
* [SPOJ - GCDEX](http://www.spoj.com/problems/GCDEX/)
* [UVA 12995 - Farey Sequence](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=4878)
* [SPOJ - Totient in Permutation (easy)](http://www.spoj.com/problems/TIP1/)
* [LOJ - Mathematically Hard](http://lightoj.com/volume_showproblem.php?problem=1007)
* [SPOJ - Totient Extreme](http://www.spoj.com/problems/DCEPCA03/)
* [SPOJ - Playing with GCD](http://www.spoj.com/problems/NAJPWG/)
* [SPOJ - G Force](http://www.spoj.com/problems/DCEPC12G/)
* [SPOJ - Smallest Inverse Euler Totient Function](http://www.spoj.com/problems/INVPHI/)
* [Codeforces - Power Tower](http://codeforces.com/problemset/problem/906/D)

