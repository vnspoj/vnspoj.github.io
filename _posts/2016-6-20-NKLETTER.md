---
layout: post
title:  "NKLETTER - "
categories: []
code: NKLETTER
src: NKLETTER.cpp
codeforces: https://codeforces.com/group/FLVn1Sc504/contest/274824/problem/K
---



  


Vị Giám đốc công ty XYZ cần gửi một văn bản quan trọng tới một đối tác của mình. Văn bản là một xâu S các chữ cái la tinh in thường. Để bảo mật nội dung văn bản, ông Giám đốc gửi 2 bức thư. Bức thư thứ nhất là phần đầu Sb của xâu S, bức thư thứ 2 là phần cuối Se của S. Hai bức thư Sb và Se đảm bảo đầy đủ nội dung của S, tuy nhiên có thể một phần cuối của Sb có thể được viết lặp lại trong phần đầu của Se, song số kí tự được viết lặp lại không biết trước.

Ví dụ: với văn bản S=’truongnguyenduquannhat’ tạo ra hai bức thư:

```
Sb=truong**ngueNdu**
         **ngueNdu**quanNhat=Se=

```

Sb=’truongnguyendu’ và Se=’nguyenduquannhat’

Yêu cầu: Cho hai xâu Sb và Se, hãy xác định một xâu S có thể là nội dung của bức thư sao cho độ dài của xâu S là ngắn nhất.

#### Dữ liệu

Dòng đầu chứa xâu Sb, dòng thứ hai chứa xâu Se. Mỗi xâu có độ dài không quá 250.

#### Kết quả

Ghi ra độ dài của xâu S tìm được.

#### Ví dụ

```
Input
truongnguyendu
nguyenduquannhat

Output
22

```

<!--more-->

