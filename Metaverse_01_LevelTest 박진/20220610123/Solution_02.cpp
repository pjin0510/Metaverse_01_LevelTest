

//처음엔 단순하게 3 에 3 을 1000 되기전까지 곱해주기만 하면 되겠지 하는 생각에 
//for (int i = 3; i * i; i < 1000)
//	cout << i << endl;
// 로 하였다 결과는 3이 한무 반복 출력 되었다
// i 값에 3을 주고 3 * 3 을 1000 되기전까지 반복 한다로 이해를 하였는데 그게 아니였나 보다


// 검색해보니 pow 라는 함수를 알게 되었고 사용하려면 cmath 라는 헤더를 인클루드 해야 한다고 하였다
//int num = 3; cout << "숫자 : " << num << "\n";
//cout << "제곱 = " << pow(num, 2) << "\n";
// 사용 예시를 보고 포문으로 적용 해 보려고 하였으나 뜻대로 되지 않는다 사용미숙 ;;







/*#include <iostream>
#include <cmath>
using namespace std;
   
int main(void)             
{
	int num = 3;
	int answer;
	for (int i = 1; i++;)
		
	{ 
		
		answer = pow(num, i);
	}

	cout << answer << endl;

	return 0;
}*/

//=RAND()*(b-a)+a

#include <iostream>
#include <cmath>
//using namespace std;
//
//int main(void)
//{
//	int b = 3;
//	for (int i = 1; i < 1000;)
//	{
//		b * i = b;
//	}
//		return 0;
//}