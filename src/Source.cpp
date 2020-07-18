#include <iostream>
#include "cBall.h"
#include "cGameManager.h"
#include "cPaddle.h"
using namespace std;


int main()
{
	cGameManager c(40, 20);
	c.Run();
	
	cin.get();
	return 0;

}