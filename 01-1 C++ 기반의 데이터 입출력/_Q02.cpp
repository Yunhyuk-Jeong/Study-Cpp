/*
 프로그램 사용자로부터 이름과 전화번호를 문자열의 형태로 입력 받아서,
 입력 받은 데이터를 그대로 출력하는 프로그램을 작성해 보자.
*/

#include <iostream>

int main()
{
    char name[100];
    char phone[100];

    std::cout << "당신의 이름은 무엇입니까? ";
    std::cin >> name;

    std::cout << "당신의 전화번호는 무엇입니까? ";
    std::cin >> phone;

    std::cout << "당신의 이름은 " << name << "이고,\n";
    std::cout << "전화번호는 " << phone << "입니다." << std::endl;
    return 0;
}