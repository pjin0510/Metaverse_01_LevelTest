#include <iostream>
using namespace std;

int main(void)
{

	int bingo[5][5];

	//for (int i = 0; i < 5; i++)
	//{
	//	for (int j = 0; j < 5; j++)
	//	{
	//		bingo[i][j] = i * 5 + j + 1; // 
	//	}
	//}

	//cout << bingo << endl;

	return 0;
}

/*


일단 빙고판을 만들어야 할것같다
2차원 배열을 통해 만들어야겠다고 생각했고
5*5 사이즈 라고 주어졌으니 25 까지의 수가 랜덤으로 들어가게끔 해야한다
난수를 사용해야하는데 숙지가 덜됐기때문에 사용하지 못하였고
1 부터 25 까지의 수가 출력되게끔 해야 함 따로 정수 배열을 받아왔어야 했는지?
위에 조건문 대로 하면  i j 가 둘다 0일 경우 0 값이 들어가버리는것 같다

출력된 빙고판에 숫자 입력시 어떻게 입력 인식을 할건지
빙고 줄 완성을 어떻게 만들지
몇줄 완성했는지 
어디를 만져야 할지 모르겠음
*/