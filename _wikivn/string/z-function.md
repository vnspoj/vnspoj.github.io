---
layout: wiki_vn
wiki: true
title: "Z-function | 🇻🇳"
---


Định nghĩa **Z-function** (**Hàm Z**) của một xâu $s$ length $n$ là một mảng $z$ length $n$ với phần tử thứ $i$-th ($z[i]$) là chiều dài lớn nhất của chuỗi con bắt đầu từ $i$ của $s$ khớp với đoạn đầu của xâu $s$.

Nói cách khác, $z[i]$ là **chiều dài dãy con chung dài nhất** (LCS) của $s$ và chuỗi con $s[i..n-1]$ (index $0$-based).

Khi đó: $s[0..z[i]-1] = s[i..i+z[i]-1]$

Chi phí tính hàm Z được thực hiện trong $O(N)$.

## Examples

Lấy ví dụ cho hàm Z của một số chuỗi sau:

* `aaaaa` - $[0, 4, 3, 2, 1]$
* `aaabaab` - $[0, 2, 1, 0, 2, 1, 0]$
* `abacaba` - $[0, 0, 1, 0, 3, 0, 1]$

Giải thích với ví dụ `aaabaab`: 
+ $i = 0$: bỏ qua vị trí $i = 0$, $z[i] = 0$
+ $i = 1$: LCS của `aaabaab` và `aabaab` là `aa`, $z[i] = 2$
+ $i = 2$: LCS của `aaabaab` và `abaab` là `a`, $z[i] = 1$
+ $i = 3$: LCS của `aaabaab` và `baab` là *empty**, $z[i] = 0$
+ $i = 4$: LCS của `aaabaab` và `aab` là `aa`, $z[i] = 2$
+ tương tự cho các vị trí còn lại

## Trivial algorithm

Dễ dàng tính được hàm Z trong $O(n^2)$ như sau

```cpp
vector<int> z_function_trivial(string s) {
	int n = (int) s.length();
	vector<int> z(n);
	for (int i = 1; i < n; ++i)
		while (i + z[i] < n && s[z[i]] == s[i + z[i]])
			++z[i];
	return z;
}
```

## Efficient algorithm to compute the Z-function

Việc tính hàm Z có thể được thực hiện trong $O(n)$ như sau:

Việc tính hàm Z sẽ được thực hiện tính lần lượt từ trái sang phải, duyệt $i$ từ $0..n-1$.

Gọi $[l, r]$ là đoạn match với chuỗi $s$ **bên phải nhất** trong quá trình tính tính hàm Z. Khi tính tới vị trí $i$, ta thực hiện cập nhật lại cặp $[l, r]$ này nếu $i + z[i] - 1 > r$ (tức tại vị trí $i$ có biên phải xa nhất). Do đó ta nhận ra tính chất rằng: $r$ chính là vị trí $i$ xa nhất (bên phải nhất) trên chuỗi $s$ mà ta đã duyệt đến.

Việc duy trì đoạn $[l, r]$ này giúp ta xác định nhanh được giá trị $z[i]$ mà không cần phải thực hiện duyệt lại các bị trí đã duyệt trước đó như giải thuật trước.

Cụ thể khi tính đến vị trí $i$, sẽ có 2 trường hợp sau:

**Trường hợp $i > r$:**

$i$ nằm ngoài biên phải $r$ đã duyệt đến, do đó thực hiện duyệt như giải thuật trước để mở rộng biên $r$ và tính $z[i]$.

**Trường hợp $i <= r$:**
  
Ta có: $s[0..r-l] = s[l..r]$


<p align="center"><img src="https://i.imgur.com/d4HHNdK.png" width="70%"></p>


Như hình trên, ta thấy đoạn $s[i-l..r-l] = s[i..r]$, do đó ta ko cần duyệt lại đoạn $s[i..r]$ mà lấy lại $z[i-l]$ đã tính trước đó. Lưu ý thêm $z[i-l]$ có thể lớn hơn $r-i+1$ (vượt qua biên $r$ đã duyệt), do đó ta chỉ lấy

$$ z_0[i] = \min(r - i + 1,\; z[i-l]) $$

với $z_0[i]$ là độ dài khởi tạo sẵn cho $z[i]$.

Sau đó ta chỉ việc duyệt như giải thuật cũ và mở rộng biên $r$.

Chi tiết hiện thực của giải thuật này như sau

```cpp
vector<int> z_function(string s) {
	int n = (int) s.length();
	vector<int> z(n);
	for (int i = 1, l = 0, r = 0; i < n; ++i) {
		if (i <= r)
			z[i] = min (r - i + 1, z[i - l]);
		while (i + z[i] < n && s[z[i]] == s[i + z[i]])
			++z[i];
		if (i + z[i] - 1 > r)
			l = i, r = i + z[i] - 1;
	}
	return z;
}
```

**Độ phức tạp:** ta thấy rằng việc duyệt trên xâu $s$ chỉ thực hiện trong $O(n)$ khi mở rộng biên $r$.


## Ứng dụng

### Search the substring

Problem: cho pattern $p$ và chuỗi text $t$. Tìm tất cả vị trí xuất hiện của $p$ trong $t$.

Solution: tạo một chuỗi mới $s = p + \diamond + t$, với $\diamond$ là một ký tự đặc biệt phân cách 2 chuỗi $p$ và $t$.

Apply hàm Z trên chuỗi $s$ này, dễ dàng ta thấy được nếu $z[i] = length(p)$ thì tại đó có xuất hiện của chuỗi $p$ trên $s$ hay chính là trên chuỗi $t$ ban đầu.

Độ phức tạp: $O(\operatorname{length}(t) + \operatorname{length}(p))$


## Practice Problems

[Xem một số bài trên vnspoj](https://vnspoj.github.io/category/z-function)

* [Codeforces - Password [Difficulty: Easy]](http://codeforces.com/problemset/problem/126/B)
* [UVA # 455 "Periodic Strings" [Difficulty: Medium]](http://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=396)
* [UVA # 11022 "String Factoring" [Difficulty: Medium]](http://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1963)
* [UVa 11475 - Extend to Palindrome](http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2470)
* [LA 6439 - Pasti Pas!](https://icpcarchive.ecs.baylor.edu/index.php?option=com_onlinejudge&Itemid=8&category=588&page=show_problem&problem=4450)
* [Codechef - Chef and Strings](https://www.codechef.com/problems/CHSTR)
* [Codeforces - Prefixes and Suffixes](http://codeforces.com/problemset/problem/432/D)

