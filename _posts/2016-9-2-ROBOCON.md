---
layout: post
title:  "ROBOCON - VOI 2012 Robocon"
categories: [bfs, queue, graph]
code: ROBOCON
src: ROBOCON.cpp
codeforces: https://codeforces.com/group/FLVn1Sc504/contest/274830/problem/V
---


Cuộc thi vòng loại Robocon năm nay có chủ đề "Gặp gỡ". Các Robot sẽ tranh tài trên một lưới ô vuông gồm n hàng n cột. Các hàng của lưới được đánh số từ 1 đến n, từ trên xuống dưới. Các cột của lưới được đánh số từ 1 đến n, từ trái sang phải. Trên k ô vuông của lưới có đặt chướng ngại vật. Ở phần thi Robot tự động, mỗi đội sẽ phải sử dụng đồng thời hai con Robot.  
  
Tại thời điểm xuất phát, Robot thứ nhất được đặt tại ô (1,1), mỗi bước chỉ được phép di chuyển sang ô kề cạnh bên phải, hoặc xuống ô kề cạnh bên dưới hoặc xuống ô kề đỉnh phía dưới bên phải.  
  
Robot thứ hai được đặt tại ô (1,n), mỗi bước chỉ được phép di chuyển sang ô kề cạnh bên trái hoặc xuống ô kề cạnh bên dưới hoặc xuống ô kề đỉnh phía dưới bên trái.  
  
Bắt đầu từ thời điểm xuất phát được tính là 0, hai Robot phải di chuyển liên tục theo qui tắc đã nêu. Thời gian di chuyển từ một ô sang ô kế tiếp được tính là 1 giây. Nhiệm vụ của đội chơi là phải lập trình điều khiển hai Robot xuất phát cùng lúc, di chuyển tránh chướng ngại vật để gặp nhau tại một ô vuông không có chướng ngại vật. Hai Robot gặp nhau càng sớm đội chơi càng được nhiều điểm. Lưới ô vuông được thiết kế đảm bảo là luôn có cách đi để hai Robot gặp được nhau.  
  
**Yêu cầu**: Hãy tìm cách điều khiển sao cho hai Robot gặp nhau ở thời điểm sớm nhất.

**Ràng buộc**: 50% số tests ứng với 50% số điểm của bài có n ≤ 100.

#### Input

*   Dòng thứ nhất chứa hai số nguyên dương n, k (n ≤ 500, k ≤ 10000).
*   Dòng thứ i trong số k dòng tiếp theo chứa 2 số nguyên dương ui, vi tương ứng là tọa độ hàng và cột của ô có đặt chướng ngại vật (i = 1, 2, ..., k).

Các số trên cùng một dòng được ghi cách nhau ít nhất một dấu cách.

#### Output

Ghi ra một số nguyên dương là thời điểm sớm nhất tìm được.

#### Example

```
Input
5 5  
2 2  
1 4  
2 3  
3 5  
4 2

Output
3

```

<!--more-->

