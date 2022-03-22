#include <iostream>

using namespace std;
/*
int main() {
	long long int a = 6 * 9624216 + 6435207 - 31268618;
	printf("하루님 전화번호 : 010%lld\n\n", a);
	printf("− = %d\n- = %d", '−', '-');
	//"−" 이거랑 "-" 이거로
}
*/

int main() {
	char str[] = "1234567890";
	int data[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };

	char* strPointer = str;	// 배열은 기본적으로 주소값을 갖고있음
	int* dataPointer = data;	// 배열은 기본적으로 주소값을 갖고있음

	// char은 1byte임으로 int* + 1 = 1 씩 증가함
	printf("( *strPointer ) \taddress [%p], value = [%c] \n\n", strPointer, *strPointer);
	printf("*( strPointer + 1 ) \taddress [%p], value = [%c] \n\n", (strPointer + 1), *(strPointer + 1));
	
	// int가 4byte임으로 int* + 1 = 4 씩 증가함
	printf("( *dataPointer ) \taddress [%p], value = [%d] \n\n", dataPointer, *dataPointer);
	printf("*( dataPointer + 1 ) \taddress [%p], value = [%d] \n\n", (dataPointer + 1), *(dataPointer + 1));
}