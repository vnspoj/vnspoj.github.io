---
layout: wiki_vn
wiki: true
title: "Binary Exponentiation | Luỹ thừa nhị phân | 🇻🇳"
---

Luỹ thừa nhị phân là một kỹ thuật để tính $a^n$ trong $O(\log n)$ phép nhân, thay vì sử dụng $O(n)$ phép nhân như cách thông thường.

Đây là một kỹ thuật quan trọng được ứng dụng trong rất nhiều các bài toán số học khác.

## Algorithm

Cách giải ngây thơ nhất cho việc tính $a^n$ là thực hiện $n-1$ phép nhân giá trị $a$ với nhau. Độ phức tạp là $O(n)$. Đối với các giá trị $n$ lớn, chẳng hạn $n \approx 10^9$ hoặc $n \approx 2^{64}$ thì không thể đáp ứng được tốc độ tính toán.

Ta có: 

$a^{b+c} = a^b \cdot a^c$ và $a^{2b} = a^b \cdot a^b = (a^b)^2$.

Ý tưởng của giải thuật là lần lượt chia nhỏ $n$ theo $2$, ví dụ với $n = 14$, ta có $a^{14} = a^7 \cdot a^7$, khi đó bài toán suy về tính $a^7$, và lần lượt $a^7 = a^3 \cdot a^3 \cdot a$, bài toán đưa về tính $a^3$, ...

Do đó ta chỉ tốn $O(\log N)$ lần phép tính để tính đuược $a^n$.

Công thức đệ quy cho cách này được biểu diễn như sau:

$$a^n = \begin{cases}
1 &\text{if } n == 0 \\\\
\left(a^{\frac{n}{2}}\right)^2 &\text{if } n > 0 \text{ and } n \text{ even}\\\\
\left(a^{\frac{n - 1}{2}}\right)^2 \cdot a &\text{if } n > 0 \text{ and } n \text{ odd}\\\\
\end{cases}$$


## Implementation

```cpp
long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}
```

**Một cách khác không sử dụng đệ quy**

```cpp
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
```

## Ứng dụng

### Tính luỹ thừa bậc cao module cho một số

**Problem:** Tính $x^n \bmod m$

**Solution:**

Phép toán module trong bài toán không ảnh hưởng đến giải thuật đã nêu ra do $a \cdot b \equiv (a \bmod m) \cdot (b \bmod m) \pmod m$

```cpp
long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
```

**Note:** Nếu $m$ là số nguyên tố, ta có $x ^ {n \mod (m-1)} \bmod m = x^n \bmod m$ theo [định lý Fermat nhỏ](https://vi.wikipedia.org/wiki/%C4%90%E1%BB%8Bnh_l%C3%BD_nh%E1%BB%8F_Fermat) (hay [Fermat's little theorem](http://en.wikipedia.org/wiki/Fermat's_little_theorem)).


### Tính số Fibonacci thứ $n$: $F_n$

**Problem:** Tính số fibonacci thứ $n$-th: $F_n$.

**Solution:**

Bài toán Fibonacci cho $n$ lớn được đưa về bài toán nhân ma trận, tham khảo [Fibonacci Number article](../../wiki/algebra/fibonacci-numbers). 

Trong lời giải nhân ma trận xuất hiện phép tính luỹ thừa bậc $n$ cho một ma trận hằng số $P$, tức ma trận $P^n$. Lúc này ta có thể áp dụng giải thuật này để tính nhanh ma trận $P^n$ trong $O(\log n)$


Ngoài ra còn một số bài toán khác liên quan đến binary exponent, các bạn có thể tham khảo thêm ở bài viết gốc [tại đây](../../wiki/algebra/binary-exp).


## Practice Problems

* [UVa 1230 - MODEX](http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3671)
* [UVa 374 - Big Mod](http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=310)
* [UVa 11029 - Leading and Trailing](https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1970)
* [Codeforces - Parking Lot](http://codeforces.com/problemset/problem/630/I)
* [SPOJ - The last digit](http://www.spoj.com/problems/LASTDIG/)
* [SPOJ - Locker](http://www.spoj.com/problems/LOCKER/)
* [LA - 3722 Jewel-eating Monsters](https://icpcarchive.ecs.baylor.edu/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1723)
* [SPOJ - Just add it](http://www.spoj.com/problems/ZSUM/)

