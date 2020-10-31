---
layout: post
title:  "PBCGANGS - Các băng đảng"
categories: [dsu]
code: PBCGANGS
src: PBCGANGS.cpp
---



  



Chicago những năm 1920 là 1 cuộc chiến giữa các găngxtơ.

Nếu 2 găngxtơ đã từng chạm mặt nhau thì họ có thể là bạn hoặc kẻ thù của nhau.

Các găngxtơ sống và chết theo quy tắc sau:

 1. Bạn của bạn mình cũng là bạn mình.

 2. Kẻ thù của kẻ thù của mình là bạn mình.

Hai găngxtơ cùng băng đảng khi và chỉ khi họ là bạn. Kal El là giám đốc sở cảnh sát Chicago. Bạn hãy giúp anh ấy tính số lượng lớn nhất có thể của các băng đảng khác nhau ở Chicago dựa vào tài liệu của sở về các lần gặp mặt của bọn chúng.

Input

Dòng đầu tiên chứa số nguyên N (2<=N<=1000) là số găngxtơ. Các găngxtơ được đánh số từ 1 đến N. Dòng thứ 2 chứa số nguyên M (1<=M<=5000) là số thông tin về các lần gặp mặt của các găngxtơ. M dòng tiếp theo là danh sách các thông tin đó. Mỗi thông tin nằm trong 1 dòng có dạng F p q hoặc E p q (1<=p,q<=N) với p q là số hiệu của 2 găngxtơ, nếu kí tự đầu tiên là F thì p và q là bạn, nếu là E thì p và q là kẻ thù.

Output

Chứa 1 số duy nhất là số lớn nhất các băng đảng.

**Example**

Input

5

1

F 1 4

Output

4

<!--more-->

