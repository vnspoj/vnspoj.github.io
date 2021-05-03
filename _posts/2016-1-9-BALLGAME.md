---
layout: post
title:  "BALLGAME - Ball game"
categories: [heap, set, sortings, data-structure]
code: BALLGAME
src: BALLGAME.cpp
---


Hôm qua AnhDQ mới mời cô gái của mình đi ăn món gà KFC (vốn là sở trường của hai người). Hai người quyết định gọi phần ăn Chicky (dành cho trẻ em :d), vừa tiết kiệm, mà còn được tặng kèm món đồ chơi ngộ nghĩnh có tên là "Bắt gà" :d Sau một hồi loay hoay, AnhDQ phát hiện ra rằng trò chơi của bọn trẻ con nước ngoài này khá là giống với trò chơi gụ của trẻ con Việt Nam :d (tất nhiên là hiện đại hơn ^^). Sau đó AnhDQ quyết định rủ nàng đi xem phim ở MegaStar :"> trên đường ghé qua khu StarBowl, cầm trên tay món đồ "Bắt gà", AnhDQ chợt nảy ra một trò chơi thú vị kết hợp giữa những quả bóng bowling và trò chơi gụ dân gian, và chàng quyết định hai nhóc Alice và Bob sẽ là những vị khách đầu tiên tham gia trò chơi mới này! Chàng tạm đặt tên cho trò chơi là "Trò chơi với những trái bóng":

AnhDQ làm sẵn một cái máng có N lỗ xếp liền nhau được đánh số từ 1..N và một đường rãnh giúp đưa các quả bóng vào các lỗ này. Đường rãnh này có thiết kế đặc biệt như sau:  
+ Chỉ có thể ném bóng vào từ một trong hai đầu của đường rãnh.  
+ Tại một thời điểm chỉ có một quả bóng được ném vào đường rãnh.  
+ Nếu bóng được ném vào từ đầu nào thì đường rãnh sẽ đưa quả bóng tới lỗ **trống gần đầu đó nhất**.  
+ Thời gian đưa bóng tới một lỗ bất kì là không đáng kể.

AnhDQ làm ra M quả bóng đặc biệt cho Alice và Bob chơi, những quả bóng này có đặc điểm như sau:  
+ Chúng có cùng hình dạng, kích thước; vậy nên có thể rơi vào bất kì lỗ nào trên máng.  
+ Mỗi quả bóng có một độ xoáy (có thể giống hoặc khác nhau); nếu một quả bóng có độ xoáy là x thì nó sẽ xoáy trên miệng lỗ mà nó rơi vào trong x phút trước khi rơi hẳn xuống lỗ.

Lại nói về cái máng:  
+ Mỗi lỗ trên máng có sức chứa vô hạn.  
+ Một lỗ được gọi là **trống** nếu không có quả bóng nào đang xoáy trên miệng lỗ đó; tại thời điểm một quả bóng dừng việc xoáy và bắt đầu rơi vào lỗ thì lỗ đó cũng được coi là trống.

+ Trò chơi bắt đầu ở thời điểm 0, Alice đứng ở đầu rãnh phía bên trái (gần lỗ thứ nhất) còn Bob đứng ở đầu rãnh phía bên phải (gần lỗ thứ N).  
+ Tại các thời điểm khác nhau, Alice hoặc Bob ném một trong M quả bóng vào rãnh.  
+ Trò chơi kết thúc khi một trong các trường hợp sau xảy ra:  
  + Alice và Bob ném hết M quả bóng; khi đó hai nhóc **hòa nhau**; thời gian của ván chơi là thời điểm mà quả bóng cuối cùng ngừng xoáy và rơi xuống lỗ.  
  + Alice hoặc Bob ném một quả bóng vào rãnh trong lúc không có lỗ nào trên máng còn trống; khi đó nhóc nào ném quả bóng đó sẽ là người **thua cuộc** :d; thời gian của ván chơi là thời điểm mà nhóc thua cuộc ném quả bóng đó.

AnhDQ đi chơi về và thấy hai nhóc đang ngồi thở hổn hển vì ném bóng :)) AnhDQ liền hỏi hai nhóc xem ai thắng thì hai nhóc cười toe toét nói là.. không nhớ @) Bó tay, AnhDQ liền gặng hỏi chúng về diễn biến ván chơi, hai nhóc chanh chòe nhau kể ra các lần ném bóng của mình, được mô tả bởi hai số u, v, trong đó u là thời điểm ném quả bóng và v là độ xoáy của quả bóng đó.

Nhưng chúng kể cũng chẳng có thứ tự gì hết, càng làm AnhDQ đau đầu hơn, chàng cố ghi lại thông tin mà chúng kể và nhờ các VOJ-er(s) tài giỏi giúp chàng phân định kết quả của ván chơi xem sao. Chàng rất hồi hộp về trò chơi mới này của mình.

#### Dữ liệu

+ Dòng đầu tiên chứa hai số N, M.  
+ M dòng tiếp theo, mỗi dòng bắt đầu bởi một chữ cái 'A' hoặc 'B', tương ứng với lời kể của Alice hoặc Bob; tiếp theo là hai số u, v tương ứng.

#### Kết quả

+ Nếu ván chơi kết thúc với kết quả hòa, in ra như sau:  
  + Dòng đầu tiên in ra **DRAW**.  
  + Dòng thứ hai in ra **Game lasts: T minute(s)**; trong đó T là thời gian của ván chơi.  
  + M dòng tiếp theo in ra "biên bản" của ván chơi; mỗi dòng ghi **Alice takes the hole: H** hoặc **Bob takes the hole: H** tương ứng với một lượt ném bóng của Alice hoặc Bob; trong đó H là lỗ trống tương ứng mà quả bóng của lượt ném đó rơi vào. Biên bản này viết ra theo **thứ tự thời gian**.

+ Nếu ván chơi kết thúc với một nhóc thua cuộc, in ra như sau:  
  + Dòng đầu tiên in ra **Alice loses at her turn: R** nếu Alice thua cuộc, hoặc in ra **Bob loses at his turn: R** nếu Bob thua cuộc; với ý nghĩa: nhóc tương ứng thua cuộc sau lần ném thứ R của mình.  
  + Dòng thứ hai in ra **Game lasts: T minute(s)**; trong đó T là thời gian của ván chơi.

#### Ví dụ

```
Dữ liệu
2 2  
A 1 10  
B 2 20  
  
Kết quả
DRAW  
Game lasts: 22 minute(s)  
Alice takes the hole: 1  
Bob takes the hole: 2  
  
Dữ liệu
1 2  
A 1 10  
B 2 20  
  
Kết quả
Bob loses at his turn: 1  
Game lasts: 2 minute(s)  
```

#### Giới hạn

+ N, M ≤ 10^5.  
+ u, v ≤ 10^9.

<!--more-->

