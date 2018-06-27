---
layout: post
title:  "NKRACING - Vòng đua F1"
categories: [kruskal, dsu, mst, graph]
code: NKRACING
src: NKRACING.cpp
---

Bài toán cho tập `V` gồm `N` đỉnh và tập `E` gồm `M` cạnh, yêu cầu chọn ra một tập cạnh `H` sao cho với mọi chu trình trong đồ thị, luôn tồn tại ít nhất một cạnh nằm trong `H`, và `H` là tập có tổng chi phí nhỏ nhất trong các phương án.

Bài toán này khá hay. Với đồ thị đã cho, ta tìm ra cây khung lớn nhất trong đồ thị, là tập cạnh `K`. Khi đó với mỗi cạnh `e` còn lại trong đồ thị (tức tập `e` thuộc `E-K`), nếu ta thêm cạnh `e` vào tập cạnh `K` trên, ta sẽ tạo ra tối thiểu một chu trình trong đồ thị. Và nhận xét rằng cạnh `e` sẽ là cạnh nhỏ nhất trong chu trình nói trên, bởi vì giả sử rằng tồn tại cạnh `e'` trong tập `K` nhỏ hơn cạnh `e`, khi đó tập cạnh `K' = K - e' + e` sẽ có chi phí lớn hơn tập `K` ban đầu, mà `K` là cây khung lớn nhất, do đó mâu thuẫn. Vậy trong chu trình nói trên `e` sẽ là cạnh nhỏ nhất và sẽ là cạnh mà ta cần tìm trong tập phương án. Và xét cho mọi cạnh còn lại như `e` trong tập `E-K`, thì các cạnh này sẽ là cạnh cần tìm, đảm bảo mọi chu trình tạo ra luôn có một cạnh có chi phí nhỏ nhất.

Với giới hạn như bài toán khi cho tập `M` cạnh, ta sử dụng giải thuật Kruskal để tìm cây khung cực đại. Để tìm cực đại thay vì cực tiểu như bình thường, ta sort các cạnh theo thứ tự giảm dần trọng số, duyệt các cạnh và thêm vào cây khung.