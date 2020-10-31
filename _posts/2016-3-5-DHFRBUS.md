---
layout: post
title:  "DHFRBUS - Vé xe miễn phí"
categories: [dijkstra]
code: DHFRBUS
src: DHFRBUS.cpp
---



  


Tham gia trò chơi nhảy lò cò, thật may mắn, Khuê đã giành giải nhất của cuộc thi. Phần thưởng mà Khuê nhận được là _k_ vé xe buýt miễn phí để đi thăm quan thành phố Hạ Long. Mỗi vé xe chỉ được sử dụng một lần và có thể sử dụng cho bất kỳ tuyến xe buýt nào trong thành phố. Thành phố có _n_ nút giao thông được đánh số từ 1 đến _n_ và _m_ tuyến xe buýt hai chiều. Mỗi cặp nút giao thông _i, j_ có không quá một tuyến xe buýt hai chiều, nếu có thì để đi từ nút _i_ đến nút _j_ (hoặc từ nút _j_ đến nút _i_) với giá vé là _cij_ \= _cji_  đồng. Xuất phát từ nút giao thông _s_, Khuê muốn di chuyển đến nút giao thông _t_ và anh luôn lựa chọn đường đi với chi phí ít nhất.

Ví dụ: thành phố có 5 nút giao thông và 6 tuyến xe buýt:

Tuyến 1: 1-2 giá vé 10 đồng; Tuyến 2: 2-5 giá vé 10 đồng;

Tuyến 3: 1-4 giá vé 3 đồng; Tuyến 4: 3-4 giá vé 5 đồng;

Tuyến 5: 3-5 giá vé 3 đồng; Tuyến 6: 1-3 giá vé 20 đồng.

![](https://vn.spoj.com/content/voj:FREEBUS)

Xuất phát từ nút 1 đến nút 5_,_ đi theo hành trình 1à4à3à5 hết 11 đồng là đường đi với chi phí ít nhất. Tuy nhiên, nếu Khuê sử dụng 1 vé xe miễn phí thì đường đi 1à3à5 hết 3 đồng là ít nhất (vé xe miễn phí được sử dụng tại tuyến 1-3).

**Yêu cầu:** Cho biết các tuyến xe buýt với giá vé tương ứng và các giá trị _s_, _t_, _k_. Hãy tính chi phí ít nhất để đi từ nút giao thông _s_ đến nút giao thông _t_ mà không sử dụng quá _k_ vé xe miễn phí.

#### Input

\-          Dòng đầu tiên ghi năm số nguyên dương _n_, _m, k, s, t_; 

\-          _m_ dòng sau, mỗi dòng 3 số nguyên _i, j, cij_ mô tả có tuyến xe buýt _i – j_ hết _cij_ đồng.

#### Output

một số duy nhất là chi phí ít nhất để đi từ nút giao thông _s_ đến nút giao thông _t_ mà không sử dụng quá _k_ vé xe miễn phí.

#### Example

```
**Input:**

**5 6 1 1 5**

**1 2 10**

**2 5 10**

**1 4 3**

**3 4 5**

**3 5 3**

**1 3 20**

**Output:**
**3**
```

**Ghi chú:**

*   Có 40% số test ứng với 40% số điểm có _n_ ≤ 100, _m_ ≤ 1000 và _k_ = 1;
*   Có 20% số test ứng với 20% số điểm có _n_ ≤ 10^5, _m_ ≤ 10^5 và _k_ = 1;
*   Có 40% số test còn lại ứng với 40% số điểm có _n_ ≤ 10^5, _m_ ≤ 10^5 và _k_ ≤ 5.

<!--more-->



Dijkstra đơn giản
