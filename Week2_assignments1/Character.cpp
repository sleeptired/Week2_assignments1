#include <iostream>
#include "Character.h"

Character::Character() : status{ 0,0,0,0 }, HPPotion(0), MPPotion(0), level(1)
{

}

Character::~Character()
{
}

void Character::Set_HPMP()
{
	int hp, mp;
	//while를 사용하고 
	//hp,mp 하나라도 50 이상이면 break

	while (true)
	{
		std::cout << "HP와 MP를 입력해주세요: ";
		std::cin >> hp >> mp;
		if (hp > 50 && mp > 50)
		{
			break;
		}
		else
		{
			std::cout << "HP나 MP의 값이 너무 작습니다. 다시 입력해주세요." << std::endl;
		}
	}

	this->status[0] = hp;
	this->status[1] = mp;
}

void Character::Set_AtkDef()
{
	int atk, def;
	//while를 사용하고 
	//hp,mp 하나라도 50 이상이면 break

	while (true)
	{
		std::cout << "공격력과 방어력를 입력해주세요: ";
		std::cin >> atk >> def;
		if (atk > 0 && def > 0)
		{
			break;
		}
		else
		{
			std::cout << "공격력이나 방어력의 값이 너무 작습니다. 다시 입력해주세요." << std::endl;
		}
	}

	this->status[2] = atk;
	this->status[3] = def;
}

void Character::setPotion(int count, int* p_HPPotion, int* p_MPPotion)
{
	*p_HPPotion = count;
	*p_MPPotion = count;
	std::cout << "* 포션이 지급되었습니다. (HP, MP 포션 각 " << count << "개)" << std::endl;
}

int Character::GetHP()
{
	return this->status[0];
}

int Character::GetMp()
{
	return this->status[1];
}

int Character::GetAtk()
{
	return this->status[2];
}

int Character::GetDef()
{
	return this->status[3];
}

void Character::GetStatus()
{
	std::cout << "* HP : " << status[0] << ", MP : " << status[1] << ", 공격력 : " << status[2] << ", 방어력 : " << status[3] << ", level : " << level
		<< ", HP 포션 : " << HPPotion << ", MP 포션 : " << MPPotion << std::endl;
}

void Character::levelUp()
{
	std::cout << "* 레벨업!" << std::endl;
	level += 1;
	std::cout << "현재 level: " << level << std::endl;
}

void Character::RechargePotion()
{
	std::cout << "* HP/MP 포션이 지급됩니다." << std::endl;
	HPPotion += 1;
	MPPotion += 1;
	std::cout << "남은 HP/MP 포션 수 : " << HPPotion << "/" << MPPotion << std::endl;
}

int* Character::GetHPPotion()
{
	return &HPPotion;
}

int* Character::GetMPPotion()
{
	return &MPPotion;
}

void Character::UpHP()
{
	if (HPPotion == 0)
	{
		std::cout << "포션이 부족합니다." << std::endl;
	}
	else
	{
		status[0] += 20;
		HPPotion -= 1;
		std::cout << "* HP가 20 증가되었습니다. 포션이 1개 차감됩니다." << std::endl;
		std::cout << "현재 HP: " << status[0] << std::endl;
		std::cout << "남은 HP 포션 수: " << HPPotion << std::endl;
	}
}

void Character::UpMP()
{
	if (MPPotion == 0)
	{
		std::cout << "포션이 부족합니다." << std::endl;
	}
	else
	{
		status[1] += 20;
		MPPotion -= 1;
		std::cout << "* MP가 20 증가되었습니다. 포션이 1개 차감됩니다." << std::endl;
		std::cout << "현재 MP: " << status[1] << std::endl;
		std::cout << "남은 MP 포션 수: " << MPPotion << std::endl;
	}
}

void Character::UpAtk()
{
	std::cout << "* 공격력이 2배로 증가되었습니다." << std::endl;
	status[2] = status[2] * 2;
	std::cout << "현재 공격력: " << status[2] << std::endl;
}

void Character::Updef()
{
	std::cout << "* 방어력이 2배로 증가되었습니다." << std::endl;
	status[3] = status[3] * 2;
	std::cout << "현재 방어력: " << status[3] << std::endl;
}
