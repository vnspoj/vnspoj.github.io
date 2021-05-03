---
layout: post
title:  "NKRACING - Vòng đua F1"
categories: [kruskal, dsu, mst, graph]
code: NKRACING
src: NKRACING.cpp
codeforces: https://codeforces.com/group/FLVn1Sc504/contest/274825/problem/J
---



  


Singapore sẽ tổ chức một cuộc đua xe Công Thức 1 vào năm 2008. Trước khi cuộc đua diễn ra, đã xuất hiện một số cuộc đua về đêm trái luật. Chính quyền muốn thiết kế một hệ thống kiểm soát giao thông để bắt giữ các tay đua phạm luật. Hệ thống bao gồm một số camera đặt trên các tuyến đường khác nhau. Để đảm bảo tính hiệu quả cho hệ thống, cần có ít nhất một camera dọc theo mỗi vòng đua.

![Hình minh họa](https://vn.spoj.com/SPOJVN/content/NKRACING_1)

Hệ thống đường ở Singapore có thể được mô tả bởi một dãy các nút giao thông và các đường nối hai chiều (xem hình vẽ). Một vòng đua bao gồm một nút giao thông xuất phát, tiếp theo là đường đi bao gồm ít nhất 3 tuyến đường và cuối cùng quay trở lại điểm xuất phát. Trong một vòng đua, mỗi tuyến đường chỉ được đi qua đúng một lần, theo đúng một hướng.

Chi phí để đặt camera phụ thuộc vào tuyến đường được chọn. Các số nhỏ trong hình vẽ cho biết chi phí để đặt camera lên các tuyến đường. Các số lớn xác định các nút giao thông. Camera được đặt trên các tuyến đường chứ không phải tại các nút giao thông. Bạn cần chọn một số tuyến đường sao cho chi phí lắp đặt là thấp nhất đồng thời vẫn đảm bảo có ít nhất một camera dọc theo mỗi vòng đua.

Viết chương trính tìm cách đặt các camera theo dõi giao thông sao cho tổng chi phí lắp đặt là thấp nhất.

![Hình minh họa](https://vn.spoj.com/SPOJVN/content/NKRACING_2)

#### Dữ liệu

+ Dòng đầu tiên chứa 2 số nguyên n, m ( 1 ≤ n ≤ 10000, 1 ≤ m ≤ 100000) là số nút giao thông và số đường nối. Các nút giao thông được đánh số từ 1 đến n.
+ m dòng tiếp theo mô tả các đường nối, mỗi dòng bao gồm 3 số nguyên dương cho biết hai đầu mút của tuyến đường và chi phí lắp đặt camera. Chi phí lắp đặt thuộc phạm vi \[1, 1000\].

#### Kết qủa

In ra 1 số nguyên duy nhất là tổng chi phí lắp đặt thất nhất tìm được.

#### Ví dụ

```
**Dữ liệu:**
6 7
1 2 5
2 3 3
1 4 5
4 5 4
5 6 4
6 3 3
5 2 3

**Kết qủa**
6
```

<!--more-->



Bài toán cho tập `V` gồm `N` đỉnh và tập `E` gồm `M` cạnh, yêu cầu chọn ra một tập cạnh `H` sao cho với mọi chu trình trong đồ thị, luôn tồn tại ít nhất một cạnh nằm trong `H`, và `H` là tập có tổng chi phí nhỏ nhất trong các phương án.

Bài toán này khá hay. Với đồ thị đã cho, ta tìm ra cây khung lớn nhất trong đồ thị, là tập cạnh `K`. Khi đó với mỗi cạnh `e` còn lại trong đồ thị (tức tập `e` thuộc `E-K`), nếu ta thêm cạnh `e` vào tập cạnh `K` trên, ta sẽ tạo ra tối thiểu một chu trình trong đồ thị. Và nhận xét rằng cạnh `e` sẽ là cạnh nhỏ nhất trong chu trình nói trên, bởi vì giả sử rằng tồn tại cạnh `e'` trong tập `K` nhỏ hơn cạnh `e`, khi đó tập cạnh `K' = K - e' + e` sẽ có chi phí lớn hơn tập `K` ban đầu, mà `K` là cây khung lớn nhất, do đó mâu thuẫn. Vậy trong chu trình nói trên `e` sẽ là cạnh nhỏ nhất và sẽ là cạnh mà ta cần tìm trong tập phương án. Và xét cho mọi cạnh còn lại như `e` trong tập `E-K`, thì các cạnh này sẽ là cạnh cần tìm, đảm bảo mọi chu trình tạo ra luôn có một cạnh có chi phí nhỏ nhất.

Với giới hạn như bài toán khi cho tập `M` cạnh, ta sử dụng giải thuật Kruskal để tìm cây khung cực đại. Để tìm cực đại thay vì cực tiểu như bình thường, ta sort các cạnh theo thứ tự giảm dần trọng số, duyệt các cạnh và thêm vào cây khung.
