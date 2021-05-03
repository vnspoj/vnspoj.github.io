---
layout: post
title:  "VMCANDLE - Aladdin và cây đèn cầy"
categories: [math]
code: VMCANDLE
src: VMCANDLE.cpp
codeforces: https://codeforces.com/group/FLVn1Sc504/contest/274855/problem/L
---


Nến (còn gọi là đèn cầy) thường được thắp trong các buổi tiệc ngoài tời để tạo không khí huyền ảo, ấm cúng, lãng mạn. Hôm nay là sinh nhật Jasmine! Aladdin, Abu và thần đèn đã tổ chức một buổi tiệc thịnh soạn gồm cơ man nào là sơn hào hải vị. Trên bàn tiệc là một hàng `N` cây nến bằng đúng số tuổi của Jasmine. Điều đặc biệt là những cây nến này có phép (do của thần đèn).

+ Ban đầu `N` nến đều đang cháy. 
+ Nếu thổi lần đầu thì cả `N` nến sẽ tắt.
+ Thổi lần hai thì các **nến số chẵn** cháy trở lại.
+ Thổi sang lần thứ 3 thì nến `3, 6, 9, 12,…`. nếu đang cháy sẽ tắt, còn nếu đang tắt sẽ cháy.
+ Tương tự vậy với các lần 4, 5, 6, …, `N`.

Aladdin nhận thấy là *sau khi thổi nến một số lần thì một số nến sẽ không bị tác động nữa*, từ đó nghĩ ra một trò chơi. Aladdin đố Jasmine **tìm ra cây nến còn sáng thứ K** sau khi **thổi hết cả** `N` **lần**. Nếu Jasmine trả lời đúng sẽ nhận được một phần quà đặc biệt mà Aladdin bỏ ra cả mấy ngày để chuẩn bị :D.

Phải thối hết `N` lần thì mất công quá. Tuy nhiên Aladdin có một mẹo, không cần thổi mà cũng không cần biết có bao nhiêu nến tất cả vẫn tính được ngay số thứ tự của cây nến đang cháy thứ `K`. Hãy giúp Jasmine giành được quà nào!

#### Yêu cầu

Cho `K`. Tìm số thứ tụ của cây nến đang cháy thứ `K` sau `N` lần thổi nến

#### Input

+ Một số nguyên dương duy nhất `K`

#### Giới hạn

+ `K <= 10^18`
+ 33% số test có `K <= 4000`

#### Output

+ Một số nguyên dương là số thứ tự của cây nến sáng thứ `K`.

#### Example

```
Input 1:
1

Output 1:
2
```

```
Input 2:
6 

Output 2:
8
```

```
Input 3:
21 

Output 3:
26
```

<!--more-->


```
1 
```

Xem qua các lần thử cho bài toán này trong hình đưới đây

<p align="center"><img src="https://i.imgur.com/3ILHzpL.png" width="90%"></p>


Rút ra nhận xét rằng:

+ Cây nến thứ `i` chỉ **dừng thay đổi** trạng thái khi **kết thúc lần thổi thứ `i`**
+ Cây nến thứ `i` sẽ còn **sáng** sau **số chẵn lần thổi** (chẵn lần đổi bit ko thay đổi bit ban đầu - sáng)
+ Cây nến thứ `i` sẽ bị thay đổi trạng thái ở những lần thổi `j` với `j` là một **ước số** của `i` (ví dụ `6` sẽ bị thay đổi `4` lần ở các lần thổi `1, 2, 3, 6`)

Từ nhận xét thứ 3, rút ra các cây nến là **số chính phương** (có **lẻ ước số**) sẽ bị tắt sau vô hạn lần thổi.

Vậy bài toán đưa về tìm ra **số không phải là số chính phương** thứ `K`


#### Số không chính phương thứ `K`


Để tìm ra số không phải chính phương thứ `K`, ta cần biết được số lượng số chính phương trong khoảng từ `1` đến `K`, giả sử là `M`, thì số thứ `K` không chính phương là số `K+M`. Ví dụ như với `K = 6`, có 2 số chính phương là `1` và `4`, do đó số thứ `K = 6` ko chính phương là số `8`.

Tính `M`, số số chính phương từ `1` đến `K` đơn giản là lấy `sqrt(K)` là ra số lượng này.

*Lưu ý*: cần giải quyết các trường hợp đặc biệt về `K` có là chính phương hay `K+M` có là chính phương. Bạn đọc cần kiểm tra kỹ.
