#define WIN32_LEAN_AND_MEAN

#include<Windows.h>      
#include<WinSock2.h>

//#pragma comment(lib,"ws2_32.lib")
#include<iostream>
using namespace std;
/*
// û��������ĺ�Ļ� ����һЩͷ�ļ�����Ĵ��� ������������λ��Ҳ���Ա���
	��windows�½���socket���
*/

int main()
{
	WORD ver = MAKEWORD(2, 2);  // �����汾��
	WSADATA dat;
	WSAStartup(ver, &dat);  // ����socket ���绷���ĺ���
	// �������Ϳ��Ա�дsocketͨ�ŵĴ�����


	//
	WSACleanup();    // �ر�
	return 0;
}