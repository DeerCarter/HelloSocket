#define WIN32_LEAN_AND_MEAN

#include<Windows.h>      
#include<WinSock2.h>

//#pragma comment(lib,"ws2_32.lib")
#include<iostream>
using namespace std;
/*
// 没有最上面的宏的话 会有一些头文件引入的错误 下面两个交换位置也可以避免
	在windows下进行socket编程
*/

int main()
{
	WORD ver = MAKEWORD(2, 2);  // 创建版本号
	WSADATA dat;
	WSAStartup(ver, &dat);  // 启动socket 网络环境的函数
	// 接下来就可以编写socket通信的代码了


	//
	WSACleanup();    // 关闭
	return 0;
}