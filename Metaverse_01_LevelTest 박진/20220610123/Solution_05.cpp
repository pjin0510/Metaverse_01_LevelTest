#include <iostream>
using namespace std;

int main(void)
{



}

/*
A.최대 번호값과 생성 숫자 개수를 입력하면 
해당 조건 내에서 중복되지 않는 숫자를 출력하는 로또 번호 생성기를 구현.
B.최대값 : 60, 생성숫자 : 10 을 입력하면 
1 ~60 사이의 중복되지 않는 숫자 10개를 생성한다.
*/

// 최대번호값 / 생성숫자 수를 입력하면
// 최대번호값 이하의 숫자가 생성숫자 이하만큼 랜덤으로 출력 
// 난수 활용이 어렵다 단순해보이지만 대입이 안됨 << 경험 부족인듯
// 이전 실습했던 자료 를 응용 해보려고 했지만 최소 수가 10 이 넘어가니 최댓값 보다 높은 숫자가 나온다 ;
/*
int minNum = 0, maxNum = 0, randNum = 0;

    cin >> minNum;
    cin >> maxNum;

   randNum = minNum + rand() % maxNum;

   cout << randNum << endl;
*/