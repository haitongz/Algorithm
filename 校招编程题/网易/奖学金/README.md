﻿题目描述:
小v今年有n门课，每门都有考试，为了拿到奖学金，小v必须让自己的平均成绩至少为avg。每门课由平时成绩和考试成绩组成，满分为r。现在他知道每门课的平时成绩为ai ,若想让这门课的考试成绩多拿一分的话，小v要花bi 的时间复习，不复习的话当然就是0分。同时我们显然可以发现复习得再多也不会拿到超过满分的分数。为了拿到奖学金，小v至少要花多少时间复习

输入描述:
第一行三个整数n,r,avg(n大于等于1小于等于1e5，r大于等于1小于等于1e9,avg大于等于1小于等于1e6)，接下来n行，每行两个整数ai和bi，均小于等于1e6大于等于1

输出描述:
一行输出答案

输入例子:
5 10 9
0 5
9 1
8 1
0 1
9 100

输出例子:
43

题目解析:
算法应该还是不难想到，要使花费的时间最少，那么首先从每得一分所需时间最少的功课开始，依次类推。所以需要对其进行排序，这里采用的是自定义struct来组织数据。

题目地址:
http://www.nowcoder.com/practice/cee98a512ec246a2918ea8121f7612c8?tpId=49&tqId=29308&rp=3&ru=/ta/2016test&qru=/ta/2016test/question-ranking