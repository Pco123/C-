/*
1.下列关于线性链表的叙述中，正确的是（C ）。
A 各数据结点的存储空间可以不连续，但它们的存储顺序与逻辑顺序必须一致
B 各数据结点的存储顺序与逻辑顺序可以不一致，但它们的存储空间必须连续
C 进行插入与删除时，不需要移动表中的元素
D 以上说法均不正确

答：一般来说，在线性表的链式存储结构中，各数据结点的存储序号是不连续的，并且各结点在存储空间中的位置关系与逻辑关系也不一致。线性链表中数据的插入
和删除都不需要移动表中的元素，只需改变结点的指针域即可。


2.一个栈的初始状态为空。现将元素 1,2,3,A,B,C 依次入栈，然后再依次出栈，则元素出栈的顺序是（ C）
A 1,2,3,A,B,C
B C,B,A,1,2,3
C C,B,A,3,2,1
D 1,2,3,C,B,A

答：栈的修改是按后进先出的原则进行的，所以顺序应与入栈顺序相反，故选 C 。


3.求fun（484）的返回值（A ）
bool fun(int n) 
{
    int sum = 0;
    for (int i = 1; n > sum; i = i + 2)
        sum = sum + i;
    return (n == sum);
}
A True
B False


4.递归函数最终会结束，那么这个函数一定？( B )
A 使用了局部变量
B 有一个分支不调用自身
C 使用了全局变量或者使用了一个或多个参数
D 没有循环调用

答：直接排除AD，注意力集中在B和C。
B肯定是对的，只有一次循环满足某个条件，不调用自己就返回，递归才会一层一层向上返回。
那么C呢，想一下，全局变量和参数确实可以用来控制递归的结束与否。
该不该选C呢？再仔细看一下题目（说实话，我很讨厌这种文字游戏），“这个函数一定...“，所以，问题集中在，是否是一定会使用这两种方式呢？ 显然不是
的。
除了C中提到的两种情况外，还有如下控制递归的方式：
1. 局部静态变量是可以控制递归函数最终结束的 
2. 可能通过异常来控制递归的结束。 
3. 可以利用BIOS或OS的一些数据或一些标准库的全局值来控制递归过程的终止。
4. 可以把一些数据写入到BIOS或OS的系统数据区，也可以把数据写入到一个文件中，以此来控制递归函数的终止。
所以，答案为B


5.已知二叉树后序遍历序列是bfegcda，中序遍历序列是badefcg，它的前序遍历序列是：( B )
A abcdefg
B abdcefg
C adbcfeg
D abecdfg

答：后序遍历中的最后一个元素是根节点，a，然后查找中序中a的位置，把中序遍历分成b a defcg，
易知左子树为b，右子树为defcg，再递归求解，可画出原始二叉树，故知前序遍历序列为B。


6.某完全二叉树按层次输出（同一层从左到右）的序列为 ABCDEFGH 。该完全二叉树的前序序列为（ A ）
A ABDHECFG
B ABCDEFGH
C HDBEAFCG
D HDEBFGCA

答：前序遍历：访问根结点在访问左子树和访问右子树之前。即先访问根结点，然后遍历左子树，最后遍历右子树；并且在遍历左子树和右子树时，仍然先访问根结
点，然后遍历左子树，最后遍历右子树。 中序遍历：访问根结点在访问左子树和访问右子树两者之间。即先遍历左子树，然后访问根结点，最后遍历右子树。并
且在遍历左子树和右子树时，仍然首先遍历左子树，然后访问根结点，最后遍历右子树。 后序遍历：访问根结点在访问左子树和访问右子树之后。即首先遍历左
子树，然后遍历右子树，最后访问根结点；并且在遍历左子树和右子树时，仍然首先遍历左子树，然后遍历右子树，最后访问根结点。 完全二叉树是指除最后一
层外，每一层上的结点数均达到最大值，在最后一层上只缺少右边的若干结点。 因此此完全二叉树可能的形状为： 则前序遍历序列为： ABDHECFG 。故本题答
案为 A 选项。


7.以下序列不是堆的是( D)
A (100,85,98,77,80,60,82,40,20,10,66)
B (100,98,85,82,80,77,66,60,40,20,10)
C (10,20,40,60,66,77,80,82,85,98,100)
D (100,85,40,77,80,60,66,98,82,10,20)

  
8.设有一组记录的关键字为{19,14,23,1,68,20,84,27,55,11,10,79},用链地址法构造哈希表,哈希函数为H(key)=key MOD 13,哈希地址为1的链中有( D )个记录
A 1
B 2
C 3
D 4  


9.假设你只有100Mb的内存，需要对1Gb的数据进行排序，最合适的算法是？( A )
A 归并排序
B 插入排序
C 快速排序
D 冒泡排序


10.下列哪种图的邻接矩阵是对称矩阵（ B）。
A 有向图
B 无向图
C AOV图
D AOE图



11.
标题：汽水瓶 | 时间限制：1秒 | 内存限制：32768K | 语言限制： 不限
【汽水瓶】
有这样一道智力题：“某商店规定：三个空汽水瓶可以换一瓶汽水。小张手上有十个空汽水瓶，她最多可以换多少瓶汽水喝？”答案是 5 瓶，方法如下：先用 9 个
空瓶子换3瓶汽水，喝掉 3 瓶满的，喝完以后 4 个空瓶子，用 3 个再换一瓶，喝掉这瓶满的，这时候剩 2 个空瓶子。然后你让老板先借给你一瓶汽水，喝掉这瓶满
的，喝完以后用 3 个空瓶子换一瓶满的还给老板。如果小张手上有 n 个空汽水瓶，最多可以换多少瓶汽水喝？
数据范围：输入的正整数满足: 1<=n<=100
注意：本题存在多组输入。
允许如题面所述向老板借汽水。
输入的 0 仅表示输入结束，并不用输出结果
输入描述：
输入文件最多包含 10 组测试数据，每个数据占一行，仅包含一个正整数 n（ 1<=n<=100 ），表示小张手上的空汽水瓶数。n=0 表示输入结束，你的程序不应
当处理这一行。
输出描述：
对于每组测试数据，输出一行，表示最多可以喝的汽水瓶数。如果一瓶也喝不到，输出0。
示例1：
输入
3
10
81
0
输出
1
5
40


#include<iostream>
using namespace std;

int CalcBottle(int & n)
{
    int sum=0;
    while(n > 1)
    {
        sum += n / 3;
        n=n / 3 + n % 3;
        
        if(n == 2)
        {
            ++sum;
            break;
        }
    }
    return sum;
}

int main()
{
    int n;
    while(cin >> n)
    {
        if(n == 0)
        {
            break;
        }
        int ret=CalcBottle(n);
        cout<<ret<<endl;
    }
    return 0;
}




12.标题：查找两个字符串a,b中的最长公共子串 | 时间限制：1秒 | 内存限制：32768K | 语言限制： 不限
【查找两个字符串a,b中的最长公共子串】
查找两个字符串a,b中的最长公共子串。若有多个，输出在较短串中最先出现的那个。
注：子串的定义：将一个字符串删去前缀和后缀（也可以不删）形成的字符串。请和“子序列”的概念分开！
本题含有多组输入数据！
数据范围：字符串长度 :1<=s<=300 ,1<=t<=5
进阶：时间复杂度：O(n^3) ,空间复杂度O(n )
输入描述：
输入两个字符串
输出描述：
返回重复出现的字符
示例1：
输入
abcdefghijklmnop
abcsafjklmnopqrstuvw
输出
jklmnop



#include<iostream>
#include<vector>
#include<string>
using namespace std;
//动态规划，时间复杂度O(n^2) 空间复杂度O(n^2),可以在这个基础上进一步优化空间的使用，优化到O(n)
//即使用两个O(n+1)的数组，一个记录上一行的结果，一个记录这一行正在计算的结果
string GetMinSubStr(string & str1 , string &str2)
{
    //确保每次str1都是最短的字符串
    if(str1.size() > str2.size())
    {
        swap(str1,str2);
    }
    
    size_t len1 = str1.size();
    size_t len2 = str2.size();
    
    //多开一行一列空间，不然当判断第一行第一列时，i-1为负数，要加一层if判断
    vector<vector<int>> dp(len1 + 1 , vector<int>(len2 + 1,0));
    int start=0,maxSize=0;
    for(size_t i = 1; i <= len1; ++i)
    {
        for(size_t j = 1; j <= len2; ++j)
        {
            if(str2[j-1] == str1[i-1])
            {
                dp[i][j] = dp[i-1][j-1] + 1;
                if(maxSize < dp[i][j])
                {
                    maxSize = dp[i][j];
                    start=i - maxSize;
                }
            }
        }
    }
    return str1.substr(start,maxSize);
}

int main()
{
    string str1,str2;
    while(cin >> str1 >> str2)
    {
        string ret=GetMinSubStr(str1 , str2);
        cout<<ret<<endl;
    }
    return 0;
}
*/ 
