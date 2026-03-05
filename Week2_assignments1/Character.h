#pragma once
class Character
{
public:
	Character();
	~Character();
	void Set_HPMP();
	void Set_AtkDef();
	void setPotion(int count, int* p_HPPotion, int* p_MPPotion);// 포션 지급 함수

	int GetHP();
	int GetMp();
	int GetAtk();
	int GetDef();
	int* GetHPPotion();
	int* GetMPPotion();

	void UpHP();//1번
	void UpMP();//2번
	void UpAtk();//3번
	void Updef();//4번
	void GetStatus();//5번
	void levelUp();//6번

private:
	int status[4];
	int HPPotion, MPPotion;

	//status[0]은 HP, status[1]은 MP, status[2]는 공격력 status[3]은 방어력

};
