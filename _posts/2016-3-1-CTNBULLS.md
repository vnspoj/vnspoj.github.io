---
layout: post
title:  "CTNBULLS - "
categories: []
code: CTNBULLS
src: CTNBULLS.cpp
---



  


Nông dân john muốn sắp xếp n con bò(bao gồm cả bò đực và bò cái) của ông ta trên 1 hàng .Ông ta biết rằng những con bò đực rất hung hăng – Nếu 2 con bò đực đứng quá gần nhau thì chúng sẽ trở nên hung dữ và bắt đầu húc nhau , vì thế chúng sẽ phá hòng mất trật tự trên hàng mà ông ta vừa sắp xếp được.

Theo kinh nghiệm lâu năm của mình , john biết được nếu ở giữa hai con bò đực có ít nhất K con bò cái thì sẽ ngăn chặn được việc chúng húc nhau (+\_+)

Vì thế , ông ta nhờ các Vcoders giúp đỡ để tính toán xem có bao nhiêu cách sắp xếp đàn bò của ông ta lại sao cho không có “chiến tranh” xảy ra giữa những chú bò (^\_^), (Tất cả những con bò đực và những con bò cái đều giống nhau). Hai dãy ( B1..Bn ) và (A1..An  ) được cho là khác nhau nếu tồn tại một vị trí I (1<=i<=n) sao cho Ai <> Bi   

1<=N<=100000. 0<=k<=n.

Input : gồm 1 dòng duy nhất chứa 2 số n và k cách nhau 1 dấu cách

Output: gồm duy nhất một số là kết quả theo modun 2111992

Eg:

Input :

4 2

Output

6

Giải thích output(C=bò cái , B:bò đực)

```
CCCC
```

```
BCCC
```

```
CBCC
```

```
CCBC
```

```
CCCB
```

```
BCCB
```

_Có 1/3 số test với n<=15_

<!--more-->

