#include"stdio.h"
main(int _)
{
_^*("^o^"+(*"@_@">>7))-74?putchar(_^*&("- -!"[1])-13?*(&"=^_^=Mx\"Mehc'2)IB[RLCET-_-b"[_]+4)^_-1:
10),main(*("^o^y"+1)-'n'+_):*"^_^";getch();
}
/*
代码分析
1.代码之所以看着繁琐，其实就是一些字符串和我们不经常使用的位运算符号在搞鬼，
理解了它们就很容易理解整个程序了。
2.首先说一下程序变量的命名，开头可以是下划线，当然一个变量名也可以只有下划线，
例如主函数中需要的int参数就是这样，所以在函数中见到"_"知道它是一个参数就好；
3.运算符"^"表示异或，可以用来比较两个数或者对字符串加密。
4.一个字符串（拿程序中第一个字符串"^o^"举例），"^o^"+n,n为整数，
表示字符串的第n个字符地址，省略即表示第一个字符地址；
5.在“4”的基础上，外面加上*，即可表示该地址对应的字符，
如*("^o^"+1)，即可表示字母o；
6.程序中关于字符串最难的就是这段：
*(&"=^_^=Mx\"Mehc'2)IB[RLCET-_-b"[_]+4)^_-1，它也表示一个字符。
这段程序可以这样理解，*(&"=^_^=Mx\"Mehc'2)IB[RLCET-_-b"[_]+4)产生一个字符，
然后跟_-1进行异或，得到新的字符；
那么现在的重点就是前半段程序*(&"=^_^=Mx\"Mehc'2)IB[RLCET-_-b"[_]+4)，
这段程序中，括号内部得到一个地址，然后用*求出对应的字符。
&"=^_^=Mx\"Mehc'2)IB[RLCET-_-b"[_]+4，这一段表示取出字符串的地址，然后偏移_位，再加上4，
即得到字符串第_+4个字符的地址。
至于如何得到该字符串，就需要自己编写程序运算了，把你想要的字符串和一个数字串异或即可。
解密时只需要在将该数字串和密文字符串异或，即可输出结果。
7.说完字符串，还剩下三目运算符和位运算。三目运算符只要分析清楚它的结构层次就能看懂，
相当于if……else……，而">>n"表示右移n位，即除以2的n次方，例如8>>2=4，7>>1=3(只舍不入)。
*/
