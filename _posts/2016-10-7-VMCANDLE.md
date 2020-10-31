---
layout: post
title:  "VMCANDLE - Aladdin và cây đèn cầy"
categories: [math]
code: VMCANDLE
src: VMCANDLE.cpp
---


            Nến (còn gọi là đèn cầy) thường được thắp trong các buổi tiệc ngoài tời để tạo không khí huyền ảo, ấm cúng, lãng mạn. Hôm nay là sinh nhật Jasmine! Aladdin, Abu và thần đèn đã tổ chức một buổi tiệc thịnh soạn gồm cơ man nào là sơn hào hải vị. Trên bàn tiệc là một hàng N cây nến bằng đúng số tuổi của Jasmine. Điều đặc biệt là những cây nến này có phép (do của thần đèn).

Ban đầu N nến đều đang cháy.

Nếu thổi lần đầu thì cả N nến sẽ tắt.

Thổi lần hai thì các nến số chẵn cháy trở lại.

Thổi sang lần thứ 3 thì nến 3, 6, 9, 12, …. nếu đang cháy sẽ tắt, còn nếu đang tắt sẽ cháy.

Tương tự vậy với các lần 4, 5, 6, … , N.

            Aladdin nhận thấy là sau khi thổi nến một số lần thì một số nến sẽ không bị tác động nữa, từ đó nghĩ ra một trò chơi. Aladdin đố Jasmine tìm ra cây nến còn sáng thứ K sau khi thổi hết cả N lần. Nếu Jasmine trả lời đúng sẽ nhận được một phần quà đặc biệt mà Aladdin bỏ ra cả mấy ngày để chuẩn bị :D.

            Phải thối hết N lần thì mất công quá L. Tuy nhiên Aladdin có một mẹo, không cần thổi mà cũng không cần biết có bao nhiêu nến tất cả vẫn tính được ngay số thứ tụ của cây nến đang cháy thứ K. Hãy giúp Jasmine giành được quà nào!

#### Yêu cầu

Cho K. Tìm số thứ tụ của cây nến đang cháy thứ K sau N lần thổi nến

#### Input

*   Một số nguyên dương duy nhất **K**

#### Giới hạn

*   **K** <= 10^18
*   33% số test có K <= 4000

#### Output

*   Một số nguyên dương là số thứ tự của cây nến sáng thứ K.

#### Chấm bài

Bài của bạn sẽ được chấm trên thang điểm 100. Điểm mà bạn nhận được sẽ tương ứng với % test mà bạn giải đúng.

Trong quá trình thi, bài của bạn sẽ chỉ được chấm với 3 test (không nhất thiết trùng với test ví dụ)

Khi vòng thi kết thúc, bài của bạn sẽ được chấm với bộ test đầy đủ.

#### Example

```
**Input 1:  
**1
```

```
**Output 1:  
**2
```

```

```

```
**Input 2:  
**6 
```

```
Output 2:  
8
```

```

```

```
**Input 3:**
```

```
21 
```

```
Output 3:
```

```
26
```

```



```

<!--more-->

