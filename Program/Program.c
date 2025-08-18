#include <stdio.h>
#define SIZE 10

int main()
{
#pragma region GetAsynckeyState
	// Window API에서 제공하는 입력 처리 함수로, 지정된 키의 상태를
	// 비동적으로 확인할 때 사용되는 함수입니다.

	// key state
	// 0x0000 : 이전에 누른 적이 없고, 호출 시점에도 눌려있지 않은 상태
	// 0x0001 : 이전에 누른 적이 있고, 호출 시점에는 눌려있지 않은 상태
	// 0x8000 : 이전에 누른 적이 없고, 호출 시점에는 눌려있는 상태
	// 0x8001 : 이전에 누른 적이 있고, 호출 시점에도 눌려있는 상태
	
	
	const char* detective_name = "탐정";
	const char* client_name = "의뢰인";

	const char* talk[10] = {
		"탐정 : 누구십니까?",
		"의뢰인 : 탐정님께 의뢰를 하러왔습니다.",
		"탐정 : 이쪽으로 오시죠",
		"의뢰인 : 집에 도둑이 들었는데 범인을 찾아주세요",
		"탐정 : 알겠습니다. 상황을 알려주세요",
		"탐정 :
		"의뢰인 :
		"탐정 :
	};

	detective_name ": 누구십니까?",
		client_name ": 탐정님께 의뢰를 하러왔습니다.",
		detective_name ": 이쪽으로 오시죠",
		client_name ": 집에 도둑이 들었는데 범인을 찾아주세요",
		detective_name ": 알겠습니다. 상황을 알려주세요",
		client_name ": 어젯밤 집을 비웠는데 그 사이 도둑이 서랍에 있는 금품을 털어갔습니다.",
		detective_name ": 집주소와 ",


#pragma endregion

	return 0;
}