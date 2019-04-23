---
layout: post
title:  "BWPOINTS - VOI 2011 Nối điểm đen trắng"
categories: [greedy, sortings]
code: BWPOINTS
src: BWPOINTS.cpp
---

Trộn hai màu lại thành một danh sách trên trục tọa độ và sort lại. Sau đó nhận thấy ta chỉ cần chọn các cặp điểm kề nhau khác màu trên trục này thì sẽ được nhiều cặp điểm nhất không giao nhau (tham lam).


Ở đây tôi tạo biến Now lưu màu hiện tại khi duyệt, Now = -1 nếu như nút
này đã dùng rồi.