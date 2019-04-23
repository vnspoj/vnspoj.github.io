---
layout: post
title:  "PIZZALOC - Pizza Location"
categories: [math, sortings, brute-force, graph]
code: PIZZALOC
src: PIZZALOC.cpp
---


Nhận xét rằng `20 C 10` chỉ khoảng 200000, do đó đủ để ta duyệt tất cả các tổ hợp chập k của m. 

Với mỗi tổ hợp thì chỉ đơn giản là tính số người rồi tìm max trong tất cả các trường hợp. Tuy nhiên nhìn chung thì có vẻ ĐPT hơi nặng, nên ta có thể đặt một số cận hoặc trick trong đó để giảm ĐPT xuống tránh TLE, (chẳng hạn một số tối ưu như : nếu tìm được lượng lớnnhất rồi thì dừng, hay là ưu tiên những nhà hàng phủ nhiều người nhất xét trước (sort lại), cũng có thể tính luôn số người trong lúc duyệt, hoặc cũng có thể tạo danh sách kề các nhà nằm trong vùng của nhà hàng...).