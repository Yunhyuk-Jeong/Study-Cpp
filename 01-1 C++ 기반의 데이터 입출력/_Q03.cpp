/*
 숫자를 하나 입력 받아서 그 숫자에 해당하는 구구단을 출력하는 프로그램을 작성해 보자.
 예를 들어서 사용자가 5를 입력한다면 구구단에서 5단을 출력해야 한다.
*/

#include <iostream>
#include <iomanip>

int main()
{
    int val;

    std::cout << "숫자를 하나 입력해주십시오: ";
    std::cin >> val;

    for (int i = 0; i < 9; i++)
        std::cout << val << " X " << i + 1 << " = " << std::setw(3) << val * (i + 1) << std::endl;

    return 0;
}