---
layout: post
title:  "PATULJCI - Snow White and the N dwarfs"
categories: [binary-search, greedy]
code: PATULJCI
src: PATULJCI.cpp
---



Snow White and the N dwarfs live in the forest. While the dwarfs mine away Snow White hangs around social networks.

Each morning the dwarfs form a long line and go whistling away to the mine. Snow White runs around them and snaps pictures to upload onto her favorite social network.

When dwarfs enter the mine, Snow White goes back to their house and goes through the pictures, selecting pretty ones. Each dwarf has a colored cap, and there are C different colors. A picture is pretty if more than half caps on it are of the same color. In other words, if there are K dwarfs on the picture, it is pretty if strictly more than K / 2 dwarfs have same colored caps.

Write a program that will check for a set of M pictures if they are pretty, and what color is dominating if they are.

#### **Input**

First line contains two integers N and C (3 ≤ N ≤ 300000, 1 ≤ C ≤ 100000) number of dwarfs and number of colors.

Second line contains N integers between 1 and C (inclusive), colors of dwarves hats, ordered the way they formed the line that morning.

Third line contains M (1 ≤ M ≤ 100000), number of pictures.

Next M lines contain two integers A and B (1 ≤ A ≤ B ≤ N). Each line describes one picture. On it there are all dwarves starting from A-th all the way to the B-th.

#### Output

Output M lines. For each picture output “no” if Snow White doesn't think the picture is pretty, and “yes X”, where X is the color dominating on the picture, if she does.

#### Example

```
**Input:**
10 3
1 2 1 2 1 2 3 2 3 3
8
1 2
1 3
1 4
1 5
2 5
2 6
6 9
7 10

**Output:**
no
yes 1
no
yes 1
no
yes 2
no
yes 3 
```

<!--more-->

