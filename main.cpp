#include <chrono>
#include <thread>
#include <iostream>
#include <windows.h>
int main() {
	INPUT ip;


	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0;
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;

	ip.ki.wVk = 0x5B;
	ip.ki.dwFlags = 0;
	SendInput(1, &ip, sizeof(INPUT));
}