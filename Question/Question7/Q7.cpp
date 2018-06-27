#include<iostream>
using namespace std;

enum SEASON { SPRING = 0x1, SUMMER = 0x10, FALL = 0x100, WINTER };

void CheckSeason(int season)
{
	switch (season)
	{
	case SPRING:
		printf("SPRING is %d\n", SPRING);
		break;
	case SUMMER:
		printf("SUMMER is %d\n", SUMMER);
		break;
	case FALL:
		printf("FALL is %d\n", FALL);
		break;
	case WINTER:
		printf("WINTER is %d\n", WINTER);
		break;
	default:
		printf("UNKNOWN: %d\n", season);
		break;
	}
}

#pragma region Q7.2
namespace Horizontal
{
	enum Horizontal_Align { LEFT, CENTER, RIGHT };
}

namespace Vertical
{
	enum Vertical_Align { TOP, CENTER, BOTTOM };
}
#pragma endregion

union MyUnion
{
	int iVal;
	float fVal;
	char cVal[5];

};

int main(int n, char **args)
{

#pragma region Q7.1
	/*SEASON season = SUMMER;
	CheckSeason(season);
	CheckSeason(1);
	CheckSeason(5);*/
#pragma endregion 

#pragma region Q7.3
	/*MyUnion u;
	u.fVal = 100;
	printf("%d\n%f\n%d\n%d\n", u.iVal, u.fVal, u.cVal[0], sizeof(u));*/
#pragma endregion

	system("pause");
	return 0;
}