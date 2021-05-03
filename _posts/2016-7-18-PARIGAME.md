---
layout: post
title:  "PARIGAME - VOI 2011 Trò chơi chẵn lẻ"
categories: [dp]
code: PARIGAME
src: PARIGAME.cpp
codeforces: https://codeforces.com/group/FLVn1Sc504/contest/274827/problem/K
---



  



Trò chơi chẵn lẻ là trò chơi hai đối thủ được mô tả như sau: Xuất phát từ bảng trò chơi là một bảng vuông kích thước n x n gồm n dòng và n cột. Các dòng của bảng được đánh số từ 1 đến n, từ trên xuống dưới. Các cột của bảng được đánh số từ 1 đến n, từ trái sang phải. Trên mỗi ô của bảnh ghi một số nguyên. Hai đối thủ luân phiên thực hiện nước đi. Đối thủ đến lượt chơi của mình được phép xóa dòng cuối cùng nếu tổng các số trên dòng đó là số chẵn hoặc là cột cuối cùng nếu tổng các số trên cột đó là số chẵn.

Đối thủ thắng cuộc là người xóa được ô cuối cùng của bảng hoặc sau khi thực hiện nước đi của mình thì tổng các số trên dòng cuối cùng và tổng các số trên cột cuối cùng của bảng đều là số lẻ.

**Yêu cầu:** Cho biết bảng số của trò chơi, hãy xác định xem người đi trước có cách chơi giành phần thắng hay không?

**Dữ liệu:**

+ Dòng thứ nhất chứa số nguyên dương k là số lượng bộ dữ liệu.
+ Tiếp theo là k nhóm dòng, mỗi nhóm dòng tương ứng với một bộ dữ liệu có dạng:

o   Dòng thứ nhất chứa số nguyên dương n (n <= 500).

o   Dòng thứ i trong số n dòng tiếp theo chứa n số nguyên dương (mỗi số không vượt quá 10^9) là các số trên dòng thứ i của bảng trò chơi, i = 1, 2, …, n.

         Các số trên cùng một dòng được ghi cách nhau ít nhất một dấu cách.

**Kết quả:** Ghi ra k dòng, mỗi dòng là kết quả tương ứng với một bộ dữ liệu theo thứ tự xuất hiện trong file dữ liệu vào: ghi thông báo **“YES”** nếu người đi trước có cách chơi giành chiến thắng và **“NO”**  trong trường hợp ngược lại.

**Ví dụ:**

Dữ liệu

Kết quả

2  
3  
1 2 2  
1 2 3  
2 3 1  
4  
2 2 2 2  
2 2 2 2  
2 2 2 2  
2 2 2 2

YES  
NO

**Ràng buộc:** 50% số test ứng với 50% số điểm của bài có n <= 50.

<!--more-->

