题目描述:
请设计一个高效算法，再给定的字符串数组中，找到包含"Coder"的字符串(不区分大小写)，并将其作为一个新的数组返回。结果字符串的顺序按照"Coder"出现的次数递减排列，若两个串中"Coder"出现的次数相同，则保持他们在原数组中的位置关系。
给定一个字符串数组A和它的大小n，请返回结果数组。保证原数组大小小于等于300,其中每个串的长度小于等于200。同时保证一定存在包含coder的字符串。

测试样例:
["i am a coder","Coder Coder","Code"],3

返回: ["Coder Coder","i am a coder"]

题目解析:
这次三道题里比较有难度的一道了，使用了stl关联容器multimap，允许键值重复，以"Coder"出现次数递减排序，由于不区分大小写，所以首先将所有字符变为大写，然后寻找"CODER"。

题目地址:
http://www.nowcoder.com/practice/a386fd3a5080435dad3252bac76950a7?tpId=49&tqId=29280&rp=1&ru=/ta/2016test&qru=/ta/2016test/question-ranking
