#include<iostream>
#include<string>
#include"Character.h"

void UIsystem()
{
	std::cout << "=============================================" << std::endl;
	std::cout << "1. HP UP" << std::endl;
	std::cout << "2. MP UP" << std::endl;
	std::cout << "3. 공격력 UP" << std::endl;
	std::cout << "4. 방어력 UP" << std::endl;
	std::cout << "5. 현재 능력치" << std::endl;
	std::cout << "6. Level UP" << std::endl;
	std::cout << "0. 나가기" << std::endl;
}

int main()
{
	Character test;
	test.Set_HPMP();
	test.Set_AtkDef();
	test.setPotion(5, test.GetHPPotion(), test.GetMPPotion());
	bool GameLoop = true;
	int input_num = 0;
	UIsystem();
	while (GameLoop)
	{
		std::cout << "번호를 선택해주세요: ";
		std::cin >> input_num;


		if (input_num == 0)
		{
			std::cout << "프로그램을 종료합니다." << std::endl;
			GameLoop = false;
		}
		else if (input_num == 1)
		{
			test.UpHP();
		}
		else if (input_num == 2)
		{
			test.UpMP();
		}
		else if (input_num == 3)
		{
			test.UpAtk();
		}
		else if (input_num == 4)
		{
			test.Updef();
		}
		else if (input_num == 5)
		{
			test.GetStatus();
		}
		else if (input_num == 6)
		{
			test.levelUp();
		}
		//if(입력받은 값이 0이면)
		//"프로그램 종료 출력"
		//GameLoop=false로 변경

	}
}