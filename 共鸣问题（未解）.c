/*
题目描述：
给出一个长度为n的数组，从1开始编号。
然后给若干关系（x,y,z），表示同时挑选第x个数字和y个数字时会额外贡献z，同时不选会贡献-z
求在数组中挑选数字的最大的和

数据包括两个数n,m，一个长度为n的数组a[]（a[0]表示第一个数字），一个第一维长度为m的二维数组，描述m组共鸣关系。
输出一个整数表示答案。
n,m<=100000，保证答案<=33000


输入：2,1,[-10,-10],[[1,2,5]]
返回值：-5
说明：一个数字都不选

备注:
数据包括两个数n,m，一个长度为n的数组a[]，表示每个音符奏响时的优美程度（a[0]表示第一个音符），一个第一维长度为m的二维数组，描述m组共鸣关系。
输出一个整数表示答案。
n,m<=100000，所有的优美程度和额外优美程度的绝对值<=33000
*/
