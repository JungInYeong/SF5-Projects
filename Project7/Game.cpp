// 프로젝트 7 게임 만들기
//1. 캐릭터, 무기, 칼, 총 클래스를만들어준다.
//2. 캐릭터클래스- 필드: ‘hp’, ‘level’, ‘무기들’- 메소드: 무기줍기, 공격하기(공격하기메소드에서는가지고있는무기들만사용해서공격할수있으며,
//	공격당한캐릭터의hp가해당하는무기의공격력만큼감소한다.)
//3. 무기클래스- 필드: 공격력, 공격가능횟수- 메소드: 공격하기
//4. 총& 칼클래스(무기클래스를상속받는클래스)- 칼: 공격력- 5, 공격가능횟수- 3, 공격하기- "찌르기" 출력- 총: 공격력- 10, 공격가능횟수- 1, 공격하기- "총쏘기" 출력
//5. 파일분리하기

#include "Character.h"

int main()
{
	Player p;
	Sword s(5, 3);
	Gun g(10, 1);
	Monster m(3, 50);

	int choice;
	while (1)
	{



	}

	p.setWeapon(&g); // 사용자 총 

	p.setWeapon(&s); // 사용자 검

}