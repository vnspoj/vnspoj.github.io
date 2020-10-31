---
layout: post
title:  "CHUOIHAT - "
categories: []
code: CHUOIHAT
src: CHUOIHAT.cpp
---



  


Khi tiến hành khai quật khảo cổ ở một vương quốc xa xưa nọ, các nhà khoa học khai quật được rất nhiều chuỗi hạt lạ. Sau khi quan sát, các nhà khoa học thấy rằng các chuỗi hạt có một số đặc điểm chung.

Mỗi chuỗi hạt là một sợi dây được đính các hạt ngọc làm bằng một chất liệu cổ xưa. Các chuỗi hạt đều có số lượng hạt ngọc bằng nhau. Hơn nữa, mỗi hạt ngọc là một hình cầu có đường kính là một số nguyên dương, và nếu lần từ trái sang phải trên chuỗi hạt, người ta thấy các hạt ngọc có đường kính tăng dần. Nếu đánh số vị trí các hạt ngọc bắt đầu từ 1, theo thứ tự từ trái sang phải, người ta nhận thấy rằng hạt ngọc thứ i có đường kính không vượt qúa 2i. Các nhà khoa học cho rằng, dân tộc cổ xưa này hẳn đã làm ra tất cả các chuỗi hạt có cùng những đặc điểm này, dù chúng hiện còn đang rải rác ở đâu đó trên trái đất.

Sau đó không lâu, các nhà khoa học tìm ra một mảnh da, trên đó có ghi một con số theo loại chữ số cổ xưa. Họ cho rằng mảnh da này có liên quan đến các chuỗi hạt kỳ lạ nọ. Sau nhiều cố gắng, các nhà khoa học đã đưa được con số trên mảnh da về hệ chữ số thập phân, và ký hiệu là X.

Manh mối đến đây thì dừng lại, vì các nhà khoa học không tìm thấy được vết tích nào khác nữa, và cũng không tìm ra được mối quan hệ giữa X và các chuỗi hạt.

Đến đây, một nhà khoa học người Việt đề nghị, hãy thử xác định chuỗi hạt có thứ tự từ điển là X, biết đâu đây sẽ là manh mối?

#### Yêu cầuBạn hãy viết chương trình giúp nhà khoa học xác định chuỗi hạt có thứ tự từ điển là X.#### Dữ liệu

*   Dòng 1: chứa số nguyên dương N, là số hạt ngọc trong mỗi chuỗi hạt
*   Dòng 2: chứa số nguyên dương X

#### Kết qủa

Gồm 1 dòng duy nhất, chứa N số nguyên, cách nhau một khoảng trắng, xác định chuỗi hạt có thứ tự từ điển là X.

(để biểu diễn một chuỗi hạt, cần in ra N số nguyên tương ứng là đường kính của các hạt ngọc trong chuỗi hạt, theo thứ tự từ trái sang phải)

#### Giới hạn

*   N là số nguyên dương trong phạm vi \[1, 250\]
*   X là số nguyên dương trong phạm vi từ 1 đến số lượng tối đa các chuỗi hạt.

#### Ví dụ

```
**Dữ liệu**
2
4

**Kết qủa**
2 3

**Giải thích**
Các chuỗi hạt sắp theo thứ tự từ điển:
1 2, 1 3, 1 4, 2 3, 2 4

Chuỗi hạt thứ 4 là 2 3


	


```

<!--more-->

