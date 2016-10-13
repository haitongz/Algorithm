﻿题目描述:
有一个XxY的网格，一个机器人只能走格点且只能向右或向下走，要从左上角走到右下角。请设计一个算法，计算机器人有多少种走法。
给定两个正整数int x,int y，请返回机器人的走法数目。保证x＋y小于等于12。
测试样例：
2,2
返回：2

题目解析:
第一行和第一列都初始化为1，因为只横着走和竖着走都只有一种方法。
后面的实现分别使用递归和动态规划的方法。

题目地址:
http://www.nowcoder.com/practice/e8bb8e68434e42acbcdff0341f2a32c5?tpId=8&tqId=11033&rp=2&ru=/ta/cracking-the-coding-interview&qru=/ta/cracking-the-coding-interview/question-ranking