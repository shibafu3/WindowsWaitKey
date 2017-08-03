#include <iostream>
#include <Windows.h>

using namespace std;

int main(){

	cout << "Please push UP key to finish." << endl;

	while (1){
		if (GetAsyncKeyState(VK_UP)){
			break;
		}
	}
	
	return 0;
}