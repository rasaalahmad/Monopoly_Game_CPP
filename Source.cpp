#include"Monopoly.h"
#include<iostream>

void Color(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
//COLORS LIST
//1: Blue
//2: Green
//3: Cyan
//4: Red
//5: Purple
//6: Yellow (Dark)
//7: Default white
//8: Gray/Grey
//9: Bright blue
//10: Brigth green
//11: Bright cyan
//12: Bright red
//13: Pink/Magenta
//14: Yellow
//15: Bright white
//Numbers after 15 include background colors

void GameBoard::box()
{
	initwindow(950, 700);
	//settextstyle(8, HORIZ_DIR, 10);
	//outtextxy(180, 250, "!MONOPLY!");

	//delay(2500);

	//cleardevice();
	//settextstyle(3, HORIZ_DIR, 1);

	setbkcolor(3);
	//line(55, 200, 600, 645);
	//line(200, 5, 200, 645);
	//setfillstyle(SOLID_FILL, WHITE);

	int count = 55;
	int count2 = 150;
	//PlaySound(TEXT("Victory sound effect.wav"), NULL, SND_FILENAME | SND_ASYNC);


	rectangle(52, 2, 698, 648);
	////top boxes and bottom boxes
	for (int i = 0; i < 11; i++)
	{
		rectangle(count, 5, count2, 100);
		rectangle(count, 550, count2, 645);
		if (i == 0)
		{
			count = 150;
		}
		else
		{
			count += 50;
		}
		if (i == 9)
		{
			count2 += 95;
		}
		else
		{
			count2 += 50;
		}
	}


	count = 100;
	count2 = 150;

	for (int i = 0; i < 10; i++)
	{
		rectangle(55, count, 150, count2);
		rectangle(600, count, 695, count2);
		count += 50;
		if (i == 8)
		{
			count2 += 95;
		}
		else
		{
			count2 += 50;
		}
	}

	setfillstyle(CLOSE_DOT_FILL, LIGHTBLUE);
	floodfill(56, 7, WHITE);
	floodfill(57, 643, WHITE);
	int a = 152;
	for (int i = 0; i < 10; i++)
	{
		floodfill(a, 7, WHITE);
		floodfill(a, 643, WHITE);
		a += 50;
	}
	a = 102;
	for (int i = 0; i < 10; i++)
	{
		floodfill(57, a, WHITE);
		floodfill(693, a, WHITE);
		a += 50;
	}
	setfillstyle(WIDE_DOT_FILL, BROWN);
	floodfill(330, 20, WHITE);
	floodfill(60, 190, WHITE);//39
	floodfill(60, 298, WHITE);//37
	floodfill(60, 447, WHITE);//34
	floodfill(540, 592, WHITE);//23
	floodfill(490, 80, WHITE);//8
	floodfill(660, 403, WHITE);//18

	//	//rectangle(600, 550, 695, 645);//95..    bottom right parking
	setfillstyle(SOLID_FILL, WHITE);
	rectangle(635, 580, 670, 590); floodfill(637, 582, WHITE);
	rectangle(625, 590, 680, 605); floodfill(626, 591, WHITE);
	setfillstyle(SOLID_FILL, DARKGRAY);
	circle(640, 605, 7); floodfill(640, 604, WHITE); floodfill(640, 606, WHITE);
	circle(665, 605, 7); floodfill(665, 604, WHITE); floodfill(665, 606, WHITE);
	outtextxy(623, 623, "PARKING");

	//	//rectangle(55, 550, 150, 645);//195..    bottom left no go area
	setfillstyle(SOLID_FILL, RED);
	circle(102, 597, 30); circle(102, 597, 20); floodfill(102, 575, WHITE);
	outtextxy(65, 627, "GO TO JAIL");

	//	//rectangle(600, 5, 695, 100);//95..     top right jail
	setfillstyle(SOLID_FILL, DARKGRAY);
	rectangle(615, 15, 620, 70); floodfill(616, 18, WHITE);
	rectangle(630, 15, 635, 70); floodfill(631, 18, WHITE);
	rectangle(645, 15, 650, 70); floodfill(646, 18, WHITE);
	rectangle(660, 15, 665, 70); floodfill(661, 18, WHITE);
	rectangle(675, 15, 680, 70); floodfill(676, 18, WHITE);

	//	//rectangle(55, 5, 150, 100);//195..	top left go
	setfillstyle(SOLID_FILL, MAGENTA);
	rectangle(65, 40, 120, 54); floodfill(67, 42, WHITE);
	line(120, 33, 120, 63); line(120, 33, 135, 48); line(120, 63, 135, 48); floodfill(122, 48, WHITE);
	//outtextxy(100, 75, "GO");

	//6        2500          Railway_Station  
	//rectangle(350, 5, 400, 100);//5
	line(350, 15, 400, 15);
	line(350, 90, 400, 90);

	//16       2500          Orange_Train 
	//rectangle(600, 300, 695, 350);//5
	line(610, 300, 610, 350);
	line(685, 300, 685, 350);

	//26       2000          Metro_Station     
	//rectangle(350, 550, 400, 645);//5
	line(350, 560, 400, 560);
	line(350, 635, 400, 635);

	//36       2000          Bus_Station  
	//rectangle(55, 300, 150, 350);//5
	line(65, 300, 65, 350);
	line(140, 300, 140, 350);


	//BROWN
	line(150, 80, 200, 80);     //2
	line(250, 80, 300, 80);     //4
	//LIGHT BLUE
	line(400, 80, 450, 80);		//7
	line(500, 80, 550, 80);		//9
	line(550, 80, 600, 80);		//10
	//YELLOW
	line(150, 570, 200, 570);		//30
	line(250, 570, 300, 570);		//28
	line(300, 570, 350, 570);		//27

	//RED
	line(400, 570, 450, 570);		//25
	line(450, 570, 500, 570);		//24
	line(550, 570, 600, 570);		//22
	//BLUE
	line(140, 100, 140, 150);		//40       8000          PTCL
	line(65, 100, 65, 150);
	line(140, 200, 140, 250);		//38       2500          SUI
	line(65, 200, 65, 250);
	line(610, 150, 610, 200);       //13       5000          LESCO
	line(685, 150, 685, 200);
	line(200, 560, 250, 560);		//29       4000          WASA
	line(200, 635, 250, 635);



	//GREEN
	line(130, 350, 130, 400);		//35
	line(130, 450, 130, 500);		//33
	line(130, 500, 130, 550);		//32


	//PINK
	line(620, 100, 620, 150);		//12
	line(620, 200, 620, 250);		//14
	line(620, 250, 620, 300);		//15
	//light red
	line(620, 350, 620, 400);		//17
	line(620, 450, 620, 500);		//19
	line(620, 500, 620, 550);		//20




	setlinestyle(SOLID_LINE, 0, 1);
	//line(223, 373, 287, 452);//\1
	//line(490, 190, 550, 270);//\2
	//line(223, 372, 490, 190);// /1
	//line(287, 452, 550, 270);

	rectangle(210, 170, 340, 230);//chance
	rectangle(410, 420, 540, 480);//community chest

	setfillstyle(SOLID_FILL, WHITE);
	outtextxy(245, 190, "CHANCE");
	outtextxy(430, 430, "COMMUNITY");
	outtextxy(450, 450, "CHEST");

	setfillstyle(SOLID_FILL, LIGHTCYAN);
	floodfill(155, 495, BLACK);

	setfillstyle(SOLID_FILL, BLUE);
	floodfill(235, 379, BLACK);

	setfillstyle(SOLID_FILL, BLUE); //CHANCE
	floodfill(215, 179, BLACK);
	setfillstyle(SOLID_FILL, BLUE);
	floodfill(415, 430, BLACK);

	setfillstyle(SOLID_FILL, WHITE);
	///////////////
	rectangle(865, 415, 925, 475); // dice
	outtextxy(880, 395, "DICE");




	setfillstyle(SOLID_FILL, BROWN);
	floodfill(152, 82, WHITE);
	floodfill(252, 82, WHITE);
	setfillstyle(SOLID_FILL, LIGHTBLUE);
	floodfill(402, 82, WHITE);
	floodfill(502, 82, WHITE);
	floodfill(552, 82, WHITE);
	setfillstyle(SOLID_FILL, YELLOW);
	floodfill(152, 552, WHITE);
	floodfill(252, 552, WHITE);
	floodfill(302, 552, WHITE);
	setfillstyle(SOLID_FILL, RED);
	floodfill(402, 552, WHITE);
	floodfill(452, 552, WHITE);
	floodfill(552, 552, WHITE);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(132, 352, WHITE);
	floodfill(132, 452, WHITE);
	floodfill(132, 502, WHITE);
	setfillstyle(SOLID_FILL, BLACK);
	floodfill(352, 7, WHITE);
	floodfill(352, 92, WHITE);
	floodfill(602, 302, WHITE);
	floodfill(687, 302, WHITE);
	floodfill(352, 552, WHITE);
	floodfill(352, 637, WHITE);
	floodfill(142, 302, WHITE);
	floodfill(57, 302, WHITE);
	setfillstyle(SOLID_FILL, BLUE);
	floodfill(142, 102, WHITE);
	floodfill(142, 202, WHITE);
	floodfill(602, 152, WHITE);
	floodfill(202, 552, WHITE);
	floodfill(63, 102, WHITE);
	floodfill(63, 202, WHITE);
	floodfill(687, 152, WHITE);
	floodfill(202, 637, WHITE);
	setfillstyle(SOLID_FILL, LIGHTMAGENTA);
	floodfill(602, 102, WHITE);
	floodfill(602, 202, WHITE);
	floodfill(602, 252, WHITE);
	setfillstyle(SOLID_FILL, LIGHTRED);
	floodfill(602, 352, WHITE);
	floodfill(602, 452, WHITE);
	floodfill(602, 502, WHITE);


	setfillstyle(SOLID_FILL, WHITE);

	//line(223, 373, 287, 452);//\1
	//line(490, 190, 550, 270);//\2
	//line(223, 372, 490, 190);// /1
	//line(287, 452, 550, 270);


	rectangle(260, 280, 500, 375);


	rectangle(210, 170, 340, 230);//chance
	rectangle(410, 420, 540, 480);//community chest

	outtextxy(245, 190, "CHANCE");
	outtextxy(430, 430, "COMMUNITY");
	outtextxy(450, 450, "CHEST");

	setfillstyle(SOLID_FILL, LIGHTCYAN);
	floodfill(155, 495, WHITE);

	//setfillstyle(SOLID_FILL, BLUE);
	//floodfill(235, 379, WHITE);

	setfillstyle(SOLID_FILL, BLUE); //CHANCE
	floodfill(215, 179, WHITE);
	floodfill(415, 430, WHITE);
	floodfill(265, 285, WHITE);


	rectangle(865, 415, 925, 475); // dice	
	setfillstyle(SOLID_FILL, RED);
	floodfill(867, 417, WHITE);

	setbkcolor(0);
	setlinestyle(SOLID_LINE, 0, 1);
	outtextxy(880, 395, "DICE");

	setbkcolor(1);
	settextjustify(2, 1);
	settextstyle(3, 20, 2);
	//outtextxy(450, 320, "MONOPOLY");

	setbkcolor(3);

	//settextjustify(1, 0);
	//top
	settextstyle(0, 0, 1);
	//outtextxy(143, 595, "NO GO AREA");
	//johar town A
	outtextxy(195, 20, "Johar");
	outtextxy(198, 30, "Town A");
	outtextxy(196, 73, "200/-");

	//3       Community_Chest  
	outtextxy(247, 25, "CHEST");

	//johar town B
	outtextxy(295, 20, "Johar");
	outtextxy(298, 30, "Town B");
	outtextxy(296, 73, "250/-");

	//5       Land Tax 
	outtextxy(340, 70, "LAND");
	outtextxy(335, 80, "TAX");
	//railway station
	outtextxy(398, 25, "RAILWA");
	outtextxy(398, 83, "STATIO");

	//iqbal town A
	outtextxy(445, 20, "Iqbal");
	outtextxy(448, 30, "Town A");
	outtextxy(546, 73, "300/-");
	//8       Chance     
	outtextxy(500, 25, "CHANCE");

	//iqbal town B
	outtextxy(545, 20, "Iqbal");
	outtextxy(548, 30, "Town B");
	outtextxy(446, 73, "250/-");

	//iqbal town C
	outtextxy(595, 20, "Iqbal");
	outtextxy(598, 30, "Town C");
	outtextxy(596, 73, "400/-");


	//right
	settextstyle(0, 1, 1);

	//  300     Faisal_Town_A     
	outtextxy(670, 101, "Faisal");
	outtextxy(683, 100, "Town A");
	outtextxy(630, 105, "300/-");


	//  400     Faisal_Town_B      
	outtextxy(670, 201, "Faisal");
	outtextxy(683, 200, "Town B");
	outtextxy(630, 205, "400/-");
	//  400     Faisal_Town_C  
	outtextxy(670, 251, "Faisal");
	outtextxy(683, 250, "TOWN C");
	outtextxy(630, 255, "400/-");
	//orange train
	outtextxy(623, 302, "ORANGE");
	outtextxy(678, 306, "TRAIN");

	//  800     Model_Town_A   
	outtextxy(670, 353, "Model");
	outtextxy(683, 350, "TOWN A");
	outtextxy(630, 355, "800/-");
	//18      Community_Chest  
	outtextxy(668, 403, "CHEST");

	//  850     Model_Town_B
	outtextxy(670, 453, "Model");
	outtextxy(683, 450, "TOWN B");
	outtextxy(630, 455, "850/-");
	//  2000    Model_Town_C_Link_Road  
	outtextxy(670, 503, "Model");
	outtextxy(683, 500, "TOWN C");
	outtextxy(630, 501, "2000/-");

	//LESCO
	outtextxy(625, 155, "LESCO");

	//bottom
	settextstyle(0, 0, 1);
	//  1000    Gulberg_II_A   
	outtextxy(598, 630, "GULBER");
	outtextxy(587, 640, "2 A");
	outtextxy(600, 580, "1000/-");
	//23      Chance      
	outtextxy(550, 580, "CHANCE");

	//  1200    Gulberg_II_B 
	outtextxy(502, 630, "GULBER");
	outtextxy(489, 640, "2 B");
	outtextxy(496, 580, "1200/-");
	//2500    Gulberg_II_C_Liberty
	outtextxy(448, 630, "GULBER");
	outtextxy(437, 640, "2 C");
	outtextxy(450, 580, "2500/-");

	//metro station
	outtextxy(395, 573, "METRO");
	outtextxy(398, 627, "STATIO");

	//2000    DHA_A
	outtextxy(345, 635, "DHA A");
	outtextxy(348, 580, "2000/-");
	//  2000    DHA_B 
	outtextxy(295, 635, "DHA B");
	outtextxy(298, 580, "2000/-");
	//  2500    DHA_Y_Block 
	outtextxy(195, 635, "DHA C");
	outtextxy(198, 580, "2500/-");

	//WASA
	settextstyle(0, 0, 0);
	outtextxy(245, 580, "WASA");
	//left
	settextstyle(0, 3, 1);
	//  2500    Bahria_Town_A 
	outtextxy(73, 551, "Behria");
	outtextxy(63, 550, "TOWN A");
	outtextxy(120, 551, "2500/-");
	//  3000    Bahria_Town_B
	outtextxy(73, 501, "Bahria");
	outtextxy(63, 500, "TOWN B");
	outtextxy(120, 502, "3000/-");
	//34      Community_Chest    
	outtextxy(77, 447, "CHEST");

	//  3000    Bahria_Town_C
	outtextxy(73, 401, "Behria");
	outtextxy(63, 400, "TOWN C");
	outtextxy(120, 402, "3000/-");

	//BUS STATION
	outtextxy(127, 335, "BUS");
	outtextxy(71, 350, "STATIO");
	//37      Chance   
	outtextxy(77, 298, "CHANCE");


	//39      Property Tax
	outtextxy(110, 192, "PROP");
	outtextxy(120, 187, "TAX");


	settextstyle(0, 3, 0);
	//PTCL
	outtextxy(120, 145, "PTCL");
	//SUI
	outtextxy(120, 240, "SUI");


	setbkcolor(RED);
	settextstyle(0, 0, 1);
	outtextxy(143, 598, "NO GO AREA");

	setbkcolor(DARKGRAY);
	settextstyle(1, 0, 1);
	outtextxy(677, 90, "JAIL");

	setbkcolor(3);
	settextstyle(0, 0, 1);
	outtextxy(130, 75, "COLLECT");
	outtextxy(130, 85, "Rs. 500");
	settextstyle(4, 0, 1);
	outtextxy(120, 30, "GO");


	setbkcolor(1);
	settextstyle(2, 0, 9);
	outtextxy(477, 332, "MONOPOLY");


}


void GamePlay::box()
{
	GameBoard::box();
	//int gmode = DETECT, gm;
	//initgraph(&gmode, &gm, "C://Users//DELL//Desktop");
	//readimagefile("Capture.PNG", 0, 0, 1000, 1000);
	//delay(200);
	//closegraph();}
}


void print_dice(int val)
{
	setfillstyle(SOLID_FILL, YELLOW);
	switch (val)
	{
	case 1:
		circle(895, 445, 6); floodfill(895, 445, WHITE);
		break;

	case 2:
		circle(885, 445, 6); floodfill(885, 445, WHITE);
		circle(905, 445, 6); floodfill(905, 445, WHITE);
		break;

	case 3:
		circle(895, 445, 6); floodfill(895, 445, WHITE);
		circle(880, 430, 6); floodfill(880, 430, WHITE);
		circle(910, 460, 6); floodfill(910, 460, WHITE);
		break;

	case 4:
		circle(885, 435, 6); floodfill(885, 435, WHITE);
		circle(885, 455, 6); floodfill(885, 455, WHITE);
		circle(905, 435, 6); floodfill(905, 435, WHITE);
		circle(905, 455, 6); floodfill(905, 455, WHITE);

		break;

	case 5:
		circle(895, 445, 6); floodfill(895, 445, WHITE);
		circle(880, 430, 6); floodfill(880, 430, WHITE);
		circle(910, 460, 6); floodfill(910, 460, WHITE);
		circle(880, 460, 6); floodfill(880, 460, WHITE);
		circle(910, 430, 6); floodfill(910, 430, WHITE);
		break;

	case 6:
		circle(885, 430, 6); floodfill(885, 430, WHITE);
		circle(885, 445, 6); floodfill(885, 445, WHITE);
		circle(885, 460, 6); floodfill(885, 460, WHITE);
		circle(905, 430, 6); floodfill(905, 430, WHITE);
		circle(905, 445, 6); floodfill(905, 445, WHITE);
		circle(905, 460, 6); floodfill(905, 460, WHITE);
		break;
	}


}





Person::Person()
{
	name = new char[50];
	player_number = 0;
	money = 5000;
	location_on_board = 0;
	Bankrupt = false;
}

Person::Person(const char* nam, int player_num, float mon, int locate, bool bank_rupt)
{
	int i = 0;
	name = new char[strlen(nam) + 2];

	while (nam[i] != '\0')
	{
		name[i] = nam[i];
		i++;
	}
	name[i] = '\0';

	player_number = player_num;
	money = mon;
	location_on_board = locate;
	Bankrupt = bank_rupt;
}

Person::Person(const Person& p)
{
	int i = 0;
	name = new char[strlen(p.name) + 2];

	while (p.name[i] != '\0')
	{
		name[i] = p.name[i];
		i++;
	}
	name[i] = '\0';

	player_number = p.player_number;
	money = p.money;
	location_on_board = p.location_on_board;
	Bankrupt = p.Bankrupt;
}

void Person::set_name(const char* nam)
{
	int i = 0;
	name = new char[strlen(nam) + 2];

	while (nam[i] != '\0')
	{
		name[i] = nam[i];
		i++;
	}
	name[i] = '\0';
}

void Person::set_location_on_board(int locate, int dice, int clr)
{
	//box();
	print_dice(dice);
	int a = locate;
	location_on_board = locate;

	setfillstyle(SOLID_FILL, clr);
	int l = 0;
	int m = 0;
	if (a == 1)
	{
		l = 100; m = 55;
		//setfillstyle(SOLID_FILL, WHITE);
		circle(l, m, 10);
		//setfillstyle(SOLID_FILL, BLACK);
		floodfill(l, m, 15);

	}
	if (a == 2)
	{
		l = 175; m = 55;
		//setfillstyle(SOLID_FILL, WHITE);
		circle(l, m, 10);
		//setfillstyle(SOLID_FILL, BLACK);
		floodfill(l, m, 15);

	}
	if (a > 2 && a < 11)
	{
		m = 55;
		l = ((a - 2) * 50) + 175;
		//setfillstyle(SOLID_FILL, WHITE);
		circle(l, m, 10);
		//setfillstyle(SOLID_FILL, BLACK);
		floodfill(l, m, 15);

	}
	if (a == 11)
	{
		l = 645; m = 55;
		//setfillstyle(SOLID_FILL, WHITE);
		circle(l, m, 10);
		//setfillstyle(SOLID_FILL, BLACK);
		floodfill(l, m, 15);

	}
	if (a == 12)
	{
		l = 645; m = 125;
		//		setfillstyle(SOLID_FILL, WHITE);
		circle(l, m, 10);
		//	setfillstyle(SOLID_FILL, BLACK);
		floodfill(l, m, 15);

	}

	if (a > 12 && a < 21)
	{
		l = 645;
		m = ((a - 12) * 50) + 125;
		//setfillstyle(SOLID_FILL, WHITE);
		circle(l, m, 10);
		//setfillstyle(SOLID_FILL, BLACK);
		floodfill(l, m, 15);

	}
	if (a == 21)
	{
		l = 645; m = 600;
		//setfillstyle(SOLID_FILL, WHITE);
		circle(l, m, 10);
		//setfillstyle(SOLID_FILL, BLACK);
		floodfill(l, m, 15);

	}
	if (a == 22)
	{
		l = 575; m = 600;
		//setfillstyle(SOLID_FILL, WHITE);
		circle(l, m, 10);
		//setfillstyle(SOLID_FILL, BLACK);
		floodfill(l, m, 15);

	}
	if (a > 22 && a < 31)
	{
		l = 575 - ((a - 22) * 50);
		m = 600;
		//setfillstyle(SOLID_FILL, WHITE);
		circle(l, m, 10);
		//setfillstyle(SOLID_FILL, BLACK);
		floodfill(l, m, 15);

	}
	if (a == 31)
	{
		l = 100; m = 600;
		//setfillstyle(SOLID_FILL, WHITE);
		circle(l, m, 10);
		//setfillstyle(SOLID_FILL, BLACK);
		floodfill(l, m, 15);

	}
	if (a == 32)
	{
		l = 100; m = 525;
		//setfillstyle(SOLID_FILL, WHITE);
		circle(l, m, 10);
		//setfillstyle(SOLID_FILL, BLACK);
		floodfill(l, m, 15);

	}
	if (a > 32 && a <= 40)
	{
		l = 100;
		m = 525 - ((a - 32) * 50);
		//setfillstyle(SOLID_FILL, WHITE);
		circle(l, m, 10);
		//setfillstyle(SOLID_FILL, BLACK);
		floodfill(l, m, 15);

	}

}

void Person::set_location_on_board(int locate, int clr)
{
	//box();
	//print_dice(dice);
	int a = locate;
	location_on_board = locate;

	setfillstyle(SOLID_FILL, clr);
	int l = 0;
	int m = 0;
	if (a == 1)
	{
		l = 100; m = 55;
		//setfillstyle(SOLID_FILL, WHITE);
		circle(l, m, 10);
		//setfillstyle(SOLID_FILL, BLACK);
		floodfill(l, m, 15);

	}
	if (a == 2)
	{
		l = 175; m = 55;
		//setfillstyle(SOLID_FILL, WHITE);
		circle(l, m, 10);
		//setfillstyle(SOLID_FILL, BLACK);
		floodfill(l, m, 15);

	}
	if (a > 2 && a < 11)
	{
		m = 55;
		l = ((a - 2) * 50) + 175;
		//setfillstyle(SOLID_FILL, WHITE);
		circle(l, m, 10);
		//setfillstyle(SOLID_FILL, BLACK);
		floodfill(l, m, 15);

	}
	if (a == 11)
	{
		l = 645; m = 55;
		//setfillstyle(SOLID_FILL, WHITE);
		circle(l, m, 10);
		//setfillstyle(SOLID_FILL, BLACK);
		floodfill(l, m, 15);

	}
	if (a == 12)
	{
		l = 645; m = 125;
		//		setfillstyle(SOLID_FILL, WHITE);
		circle(l, m, 10);
		//	setfillstyle(SOLID_FILL, BLACK);
		floodfill(l, m, 15);

	}

	if (a > 12 && a < 21)
	{
		l = 645;
		m = ((a - 12) * 50) + 125;
		//setfillstyle(SOLID_FILL, WHITE);
		circle(l, m, 10);
		//setfillstyle(SOLID_FILL, BLACK);
		floodfill(l, m, 15);

	}
	if (a == 21)
	{
		l = 645; m = 600;
		//setfillstyle(SOLID_FILL, WHITE);
		circle(l, m, 10);
		//setfillstyle(SOLID_FILL, BLACK);
		floodfill(l, m, 15);

	}
	if (a == 22)
	{
		l = 575; m = 600;
		//setfillstyle(SOLID_FILL, WHITE);
		circle(l, m, 10);
		//setfillstyle(SOLID_FILL, BLACK);
		floodfill(l, m, 15);

	}
	if (a > 22 && a < 31)
	{
		l = 575 - ((a - 22) * 50);
		m = 600;
		//setfillstyle(SOLID_FILL, WHITE);
		circle(l, m, 10);
		//setfillstyle(SOLID_FILL, BLACK);
		floodfill(l, m, 15);

	}
	if (a == 31)
	{
		l = 100; m = 600;
		//setfillstyle(SOLID_FILL, WHITE);
		circle(l, m, 10);
		//setfillstyle(SOLID_FILL, BLACK);
		floodfill(l, m, 15);

	}
	if (a == 32)
	{
		l = 100; m = 525;
		//setfillstyle(SOLID_FILL, WHITE);
		circle(l, m, 10);
		//setfillstyle(SOLID_FILL, BLACK);
		floodfill(l, m, 15);

	}
	if (a > 32 && a <= 40)
	{
		l = 100;
		m = 525 - ((a - 32) * 50);
		//setfillstyle(SOLID_FILL, WHITE);
		circle(l, m, 10);
		//setfillstyle(SOLID_FILL, BLACK);
		floodfill(l, m, 15);

	}
}

void Person::set_bankrupt(bool bank)
{
	Bankrupt = bank;
}

void Person::set_money(float mon)
{
	money = money + mon;
}

void Person::set_player_number(int n)
{
	player_number = n;
}

const char* Person::get_name()
{
	return name;
}

int Person::get_player_number()
{
	return player_number;
}

int Person::get_location_on_board()
{
	return location_on_board;
}

float Person::get_money()
{
	return money;
}

bool Person::get_bankrupt_status()
{
	return Bankrupt;
}

ostream& operator<<(ostream& out, Person& p)
{
	if (p.name != nullptr) { out << " Player Name : " << p.name << endl; }
	cout << " Player number : " << p.player_number << endl;
	out << " Current balance : " << p.money;
	out << "\n Location on board : " << p.location_on_board << endl;
	return out;
}

istream& operator>>(istream& in, Person& p)
{
	char nam[50];
	cout << "Enter name : ";
	in.getline(nam, 50);

	int i = 0;
	p.name = new char[strlen(nam) + 2];

	while (nam[i] != '\0')
	{
		p.name[i] = nam[i];
		i++;
	}
	p.name[i] = '\0';

	return in;
}

Person::~Person()
{
}

/////////////////////////////////////////////////		Player		//////////////////////////////////////////////////////////////

Player::Player()
{
	special_card = false;
	ids_of_property_owned = new int[40];
	index = 0;
}

Player::Player(const char* nam, int player_num, float mon, int locate, bool bank_rupt, bool special, const int* property_id, int size) : Person(nam, player_num, mon, locate, bank_rupt)
{
	special_card = special;
	ids_of_property_owned = new int[50];
	index = 0;

	for (int i = 0; i < size; i++)
	{
		ids_of_property_owned[i] = property_id[i];
	}
}

Player::Player(const Player& p) :Person(p)
{
	special_card = p.special_card;
	ids_of_property_owned = p.ids_of_property_owned;
	index = p.index;
}

void Player::set_ids_of_property1(const int* property_id, int size)
{
	for (int i = 0; i < size; i++)
	{
		ids_of_property_owned[i] = property_id[i];
	}
}

void Player::set_ids_of_property(int id)
{
	ids_of_property_owned[index] = id;
	index++;
}
void Player::remove_id_of_property(int x)
{
	for (int i = 0; i < index; i++)
	{
		if (x == ids_of_property_owned[i])
		{
			for (int j = i; j < index - 1; j++)
			{
				ids_of_property_owned[j] = ids_of_property_owned[j + 1];
			}
			index--;
			break;
		}
	}
}
void Player::set_special_card(bool card)
{
	special_card = card;
}

int* Player::get_ids_of_property()
{
	return ids_of_property_owned;
}
int Player::get_index()
{
	return index;
}
bool Player::get_special_card_status()
{
	return special_card;
}

Player::~Player()
{
}


ostream& operator<<(ostream& out, Player& obj)
{
	Color(14);
	cout << "                ! ";
	Color(1);
	cout << " M ";
	Color(2);
	cout << "O ";
	Color(3);
	cout << "N ";
	Color(4);
	cout << "O ";
	Color(5);
	cout << "P ";
	Color(6);
	cout << "L ";
	Color(9);
	cout << "Y ";
	Color(10);
	cout << " !";
	Color(6);
	cout << endl;
	cout << "-------------------------------------------------------------------------------\n";

	Color(obj.get_player_number() + 2);
	cout << static_cast<Person&>(obj);
	cout << "\n Id's of properties owned : ";
	for (int i = 0; i < obj.index; i++)
	{
		cout << obj.ids_of_property_owned[i] << " ";
	}
	return out;
}
//////////////////////////////Upgrade/////////////////////////////

Upgrade::Upgrade()
{
	house = 0;
	hotel = 0;
	shop = 0;
	wi_fi = 0;
	gas = 0;
	electricity = 0;
}
Upgrade::Upgrade(int x, int y, int z, bool a, bool b, bool c)
{
	house = x;
	hotel = y;
	shop = z;
	wi_fi = a;
	gas = b;
	electricity = c;
}
Upgrade::Upgrade(Upgrade& p)
{
	this->house = p.house;
	this->hotel = p.hotel;
	this->shop = p.shop;
	this->wi_fi = p.wi_fi;
	this->gas = p.gas;
	this->electricity = p.electricity;
}
void Upgrade::set_house(int x)
{
	house = house + x;
}
void Upgrade::set_hotel(int x)
{
	hotel = hotel + x;
}
void Upgrade::set_shop(int x)
{
	shop = shop + x;
}
void Upgrade::set_wi_fi(bool x)
{
	wi_fi = x;
}
void Upgrade::set_gas(bool x)
{
	gas = x;
}
void Upgrade::set_electricity(bool x)
{
	electricity = x;
}
int Upgrade::get_house()
{
	return house;
}
int Upgrade::get_hotel()
{
	return hotel;
}
int Upgrade::getshop()
{
	return shop;
}
bool Upgrade::get_wi_fi()
{
	return wi_fi;
}
bool Upgrade::get_gas()
{
	return gas;
}
bool Upgrade::get_electricity()
{
	return electricity;
}
ostream& operator<<(ostream& out, Upgrade& obj)
{
	cout << "\n Number of houses : " << obj.house;
	cout << "\n Number of hotel : " << obj.hotel;
	cout << "\n Number of shop : " << obj.shop;
	cout << "\n Wi-fi connection : " << obj.wi_fi;
	cout << "\n Gas connection : " << obj.gas;
	cout << "\n Electricity connection : " << obj.electricity;

	return out;
}

Upgrade::~Upgrade()
{
}

//////////////////////////////////////	Place	/////////////////////////////////////////////////////////////
Place::Place()
{
	property_number = 0;
	property_name = nullptr;
	property_status = 0;
	price = 0;
	defalut_rent = 0;
}

Place::Place(int a, const char* b, bool c, float d, float e)
{
	property_number = a;

	int x = strlen(b);
	property_name = new char[x + 1];
	for (int i = 0; i < x; i++)
	{
		property_name[i] = b[i];
	}
	property_name[x] = '\0';
	property_status = c;
	price = d;
	defalut_rent = e;
}
Place::Place(Place& p)
{
	property_number = p.property_number;
	property_status = p.property_status;
	price = p.price;
	defalut_rent = p.defalut_rent;


	int x = strlen(p.property_name);

	this->property_name = new char[x + 1];

	for (int i = 0; i < x; i++)
	{
		this->property_name[i] = p.property_name[i];
	}
	this->property_name[x] = '\0';


}
void Place::set_property_number(int x)
{
	property_number = x;
}

void Place::set_property_name(char* b)
{
	int x = strlen(b);
	property_name = new char[x + 1];
	for (int i = 0; i < x; i++)
	{
		property_name[i] = b[i];
	}
	property_name[x] = '\0';
}
void Place::set_property_status(bool x)
{
	property_status = x;
}
void Place::set_price(float x)
{
	price = x;
}
void Place::set_defalut_rent(float x)
{
	defalut_rent = x;
}
int Place::get_property_number()
{
	return property_number;
}
char* Place::get_property_name()
{
	return property_name;
}
bool Place::get_property_status()
{
	return property_status;
}
float Place::get_defalut_rent()
{
	return defalut_rent;
}
float Place::get_price()
{
	return price;
}
ostream& operator<<(ostream& out, Place& obj)
{
	if (obj.property_name != nullptr)cout << " Prperty name : " << obj.property_name;
	cout << "\n Property number : " << obj.property_number;
	cout << "\n Price of property : " << obj.price;
	cout << "\n Property status : ";
	if (obj.property_status == 1) { cout << " Owned"; }
	else cout << " Unowned ";
	cout << "\n Property's defalut rent : " << obj.defalut_rent;

	return out;
}

Place::~Place()
{
}

//////////////////////////////////////////////////////////////			 property			////////////////////////////////////////////////////////////////////////////////
Property::Property()
{
	ids_of_groups = new int[4];
	group_count = 0;
	special_property = 0;
	station_utility = 0;
	mortgage = 0;
	updated_rent = 0;
}
Property::Property(int id1, int id2, int id3, int id4, int hc, bool sp, bool su, bool m, float ur, int a, const char* b, bool c, float d, float e, int f, int g, int h, bool i, bool j, bool k) :Place(a, b, c, d, e), Upgrade(f, g, h, i, j, k)
{
	ids_of_groups = new int[4];
	ids_of_groups[0] = id1;
	ids_of_groups[1] = id2;
	ids_of_groups[2] = id3;
	ids_of_groups[3] = id4;
	group_count = hc;
	special_property = sp;
	station_utility = su;
	mortgage = m;
	updated_rent = ur;
}
Property::Property(Property& p) :Place(p), Upgrade(p)
{
	this->ids_of_groups = new int[4];
	this->ids_of_groups[0] = p.ids_of_groups[0];
	this->ids_of_groups[1] = p.ids_of_groups[1];
	this->ids_of_groups[2] = p.ids_of_groups[2];
	this->ids_of_groups[3] = p.ids_of_groups[3];

	this->group_count = p.group_count;
	this->special_property = p.special_property;
	this->station_utility = p.station_utility;
	this->mortgage = p.mortgage;
	this->updated_rent = p.updated_rent;
}
void Property::set_ids_of_groups(int id1, int id2, int id3, int id4)
{
	ids_of_groups = new int[4];
	ids_of_groups[0] = id1;
	ids_of_groups[1] = id2;
	ids_of_groups[2] = id3;
	ids_of_groups[3] = id4;
}
void Property::set_group_count(int hc)
{
	group_count = hc;
}
void Property::set_special_property(bool sp)
{
	special_property = sp;
}
void Property::set_station_utility(bool su)
{
	station_utility = su;
}
void Property::set_mortgage(bool m)
{
	mortgage = m;
}
void Property::set_updated_rent(float ur)
{
	updated_rent = ur;
}
void Property::increase_rent(int x)
{
	float temp1 = 0, temp2 = 0;

	temp1 = this->get_defalut_rent();

	temp2 = (temp1 / 100) * x;

	updated_rent = updated_rent + temp2;

}
int* Property::get_ids_of_groups()
{
	return ids_of_groups;
}

int Property::get_group_count()
{
	return group_count;
}
bool Property::get_mortgage()
{
	return mortgage;
}
bool Property::get_station_utility()
{
	return station_utility;
}
bool Property::get_special_property()
{
	return special_property;
}

float Property::get_updated_rent()
{
	return updated_rent;
}
ostream& operator<<(ostream& out, Property& obj)
{
	Color(10);
	cout << static_cast<Place&>(obj);
	if (obj.get_special_property() == false && obj.get_property_status() == true && obj.get_station_utility() == false) { cout << static_cast<Upgrade&>(obj); }
	cout << "\n Current rent of property :" << obj.updated_rent;
	if (obj.mortgage == 1) { cout << "\n Mortgage : Yes"; }
	else { cout << "\n Mortgage : No"; }
	cout << "\n Id's of group : ";
	for (int i = 0; i < obj.group_count; i++)
	{
		cout << obj.ids_of_groups[i] << " ";
	}
	if (obj.special_property == 1) { cout << "\n Property type : Public place"; }
	if (obj.station_utility == 1) { cout << "\n Property type : Station or Utility"; }
	Color(1);
	//cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout << endl;
	for (int k = 1; k < 14; k++)
	{
		Color(k);
		cout << "~";
	}
	for (int k = 1; k < 15; k++)
	{
		Color(k);
		cout << "~";
	}
	for (int k = 1; k < 15; k++)
	{
		Color(k);
		cout << "~";
	}
	for (int k = 1; k < 15; k++)
	{
		Color(k);
		cout << "~";
	}
	for (int k = 1; k < 15; k++)
	{
		Color(k);
		cout << "~";
	}
	cout << endl;
	Color(1);
	return out;
}

Property::~Property()
{
}

ifstream& operator>>(ifstream& in, Property& obj)
{
	float p, dr, ur;
	int id, ps, hou, hot, sho, wi, ele, ga, sp, su, mo, gc, a, b, c, d;
	char* pn = new char[20];

	in >> id >> ps >> p >> dr >> pn >> hou >> hot >> sho >> wi >> ele >> ga >> sp >> su >> ur >> mo >> gc >> a >> b >> c >> d;

	obj.set_property_number(id);
	obj.set_property_name(pn);
	obj.set_property_status(ps);
	obj.set_price(p);
	obj.set_defalut_rent(dr);

	obj.set_house(hou);
	obj.set_hotel(hot);
	obj.set_shop(sho);
	obj.set_wi_fi(wi);
	obj.set_gas(ga);
	obj.set_electricity(ele);

	obj.set_ids_of_groups(a, b, c, d);
	obj.set_group_count(gc);
	obj.set_special_property(sp);
	obj.set_station_utility(su);
	obj.set_updated_rent(ur);
	obj.set_mortgage(mo);

	return in;
}

/////////////////////////////////////////////			Banker			////////////////////////////////////////////////////

Banker::Banker()
{
	balance = 50000.0;

	/*all_properties = new Property[40];*/
}

Banker::Banker(const Banker& b)
{
	balance = b.balance;
	/*all_properties = b.all_properties;*/
}

Banker::~Banker()
{
}


void Banker::set_balance(float bal)
{
	balance = bal;
}
static int z = 39;
void Banker::remove_property_from_bank(int x)
{

	for (int i = 0; i < z; i++)
	{
		if (x == properties[i])
		{
			for (int j = i; j < z - 1; j++)
			{
				properties[j] = properties[j + 1];
			}
		}
	}
	z--;
}
float Banker::get_balance()
{
	return balance;
}


/////////////////////////////comunity chest////////////////////////

CommunityChest::CommunityChest()
{
	card_number = new int[15];
	chest_card_details = new char* [15];

	//int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;

	char temp[500];

	fstream file("CommunityChest.txt");

	while (!file.eof())
	{
		//file >> card_number[i];
		file.getline(temp, 300, '\n');

		chest_card_details[j] = new char[strlen(temp) + 2];

		while (temp[l] != '\0')
		{
			chest_card_details[j][k] = temp[l];
			k++;
			l++;
		}

		chest_card_details[j][k] = '\0';

		j++;
		k = 0;
		l = 0;
		//i++;
	}

	file.close();

}
void  CommunityChest::print(int x)
{
	cout << this->chest_card_details[x - 1] << endl;;
}

CommunityChest::~CommunityChest()
{
}


////////////////////////////////////////////////////////////////////////		Chance cards		///////////////////////////////////////////////////////////////

ChanceCards::ChanceCards()
{
	chance_card_number = new int[15];
	chance_card_details = new char* [15];

	//int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;

	char temp[500];

	fstream file("Chance.txt");

	while (!file.eof())
	{/*
		file >> chance_card_number[i];*/
		file.getline(temp, 300, '\n');

		chance_card_details[j] = new char[strlen(temp) + 2];

		while (temp[l] != '\0')
		{
			chance_card_details[j][k] = temp[l];
			k++;
			l++;
		}

		chance_card_details[j][k] = '\0';

		j++;
		k = 0;
		l = 0;
		//i++;
	}

	file.close();

}
void  ChanceCards::print(int x)
{
	cout << this->chance_card_details[x - 1] << endl;;
}

ChanceCards::~ChanceCards()
{
}

////////////////////////////////////////////////////////////////		GameBoard		///////////////////////////////////////////////////////////////////////////////////

GameBoard::GameBoard()
{
	box();
}

GameBoard::~GameBoard()
{
}


GamePlay::GamePlay()
{
	Color(14);
	cout << "                ! ";
	Color(1);
	cout << " M ";
	Color(2);
	cout << "O ";
	Color(3);
	cout << "N ";
	Color(4);
	cout << "O ";
	Color(5);
	cout << "P ";
	Color(6);
	cout << "L ";
	Color(9);
	cout << "Y ";
	Color(10);
	cout << " !";
	Color(6);
	cout << endl;
	cout << "----------------------------------------------------------------------\n";

	Color(11);
	bank.set_balance(1000000);
	pro = new Property * [41];
	p = new Player * [6];

	ifstream file;
	file.open("Properties.txt");
	for (int i = 0; i < 40; i++)
	{
		Property p1;
		file >> p1;
		pro[i] = new Property(p1);
	}
	file.close();

	char* na = new char[20];
	no_of_players = 2;
	do
	{
		cout << "\n Enter number of players between 2 to 6 : ";
		cin >> no_of_players;

	} while (no_of_players < 2 || no_of_players > 7);

	for (int j = 0; j < no_of_players; j++)
	{
		Color(j + 3);
		Player p2;
		cout << "\n Enter the name of " << j + 1 << " player : ";
		cin >> na;
		p2.set_player_number(j + 1);
		p2.set_name(na);

		p[j] = new Player(p2);
	}
	system("cls");
}

GamePlay::GamePlay(int  x)
{
	Color(14);
	cout << "                ! ";
	Color(1);
	cout << " M ";
	Color(2);
	cout << "O ";
	Color(3);
	cout << "N ";
	Color(4);
	cout << "O ";
	Color(5);
	cout << "P ";
	Color(6);
	cout << "L ";
	Color(9);
	cout << "Y ";
	Color(10);
	cout << " !";
	Color(6);
	cout << endl;
	cout << "----------------------------------------------------------------------\n";

	Color(11);
	bank.set_balance(1000000);
	pro = new Property * [41];
	p = new Player * [6];

	ifstream file;
	file.open("properties1.txt");
	for (int i = 0; i < 40; i++)
	{
		Property p1;
		file >> p1;
		pro[i] = new Property(p1);
	}
	file.close();



	char* name = new char[30];
	int pid, loc, ind;
	float mo, ids;
	bool bkr, sc;

	ifstream file2("Player.txt");

	file2 >> no_of_players;

	for (int k = 0; k < no_of_players; k++)
	{

		Player obj;

		file2 >> name >> pid >> mo >> loc >> bkr >> sc >> ind;

		obj.set_name(name);
		obj.set_player_number(pid);
		obj.set_money(mo);
		obj.set_location_on_board(loc, 0);
		obj.set_bankrupt(bkr);
		obj.set_special_card(sc);


		for (int z = 0; z < ind; z++)
		{
			file2 >> ids;
			obj.set_ids_of_property(ids);
		}
		p[k] = new Player(obj);
	}

	//char* na = new char[20];
	//no_of_players = 2;
	//do
	//{
	//	cout << "\n Enter number of players between 2 to 6 : ";
	//	cin >> no_of_players;

	//} while (no_of_players < 2 || no_of_players > 7);

	//for (int j = 0; j < no_of_players; j++)
	//{
	//	Color(j + 3);
	//	Player p2;
	//	cout << "\n Enter the name of " << j + 1 << " player : ";
	//	cin >> na;
	//	p2.set_player_number(j + 1);
	//	p2.set_name(na);

	//	p[j] = new Player(p2);
	//}
	//system("cls");
}

ostream& operator << (ostream& out, GamePlay& obj)
{
	cout << "---------------------------------  Properties	 ---------------------------------";
	for (int i = 0; i < 40; i++)
	{
		cout << obj.pro[i][0];
		cout << "\n---------------------------------------------------------------------------\n";
	}

	cout << "\n ------------------------------- Players --------------------------------------\n";
	for (int i = 0; i < obj.no_of_players; i++)
	{
		cout << obj.p[i][0] << endl;
		cout << "\n---------------------------------------------------------------------------------\n";
	}
	return out;
}
int GamePlay::get_owner_id_of_property(int x)//x is property number and return value is owner id
{
	int* temp = new int[40];
	for (int i = 0; i < no_of_players; i++)
	{
		if (p[i]->get_bankrupt_status() == false)
		{
			temp = p[i]->get_ids_of_property();

			for (int j = 0; j < p[i]->get_index(); j++)
			{
				if (temp[j] == x)
				{
					return p[i]->get_player_number();
				}
			}
		}
	}
	return 0;
}
bool GamePlay::check_for_properties_of_same_group(int x, int y)// x is id of player & y is id of property
{
	int* group = new int[4];

	group = pro[y]->get_ids_of_groups();

	for (int i = 0; i < pro[y]->get_group_count(); i++)
	{
		if (x != get_owner_id_of_property(group[i]))
		{
			return false;
		}
	}
	return true;
}
bool GamePlay::check_for_number_of_house(int y)			// y is id of property 
{
	int* group = new int[4];

	group = pro[y]->get_ids_of_groups();

	int temp = pro[y]->get_house();

	int max = 0;
	int count = 0;

	int* hou = new  int[4];

	for (int i = 0; i < pro[y]->get_group_count(); i++)
	{
		if (temp == pro[group[i] - 1]->get_house())
		{
			count++;
		}
	}
	if (count == pro[y]->get_group_count())
	{
		return true;
	}


	for (int i = 0; i < pro[y]->get_group_count(); i++)
	{
		hou[i] = pro[group[i] - 1]->get_house();
	}

	max = pro[y]->get_house();

	for (int j = 0; j < pro[y]->get_group_count(); j++)
	{
		if (pro[group[j] - 1]->get_house() > max)
		{
			max = pro[group[j] - 1]->get_house();
		}
	}


	if (pro[y]->get_house() == max - 1)
	{
		return true;
	}
	else
	{
		return false;
	}

}
bool GamePlay::check_for_number_of_shop(int y)			// y is id of property 
{
	int* group = new int[4];

	group = pro[y]->get_ids_of_groups();

	int temp = pro[y]->getshop();

	int max = 0;
	int count = 0;

	int* hou = new  int[4];

	for (int i = 0; i < pro[y]->get_group_count(); i++)
	{
		if (temp == pro[group[i] - 1]->getshop())
		{
			count++;
		}
	}
	if (count == pro[y]->get_group_count())
	{
		return true;
	}


	for (int i = 0; i < pro[y]->get_group_count(); i++)
	{
		hou[i] = pro[group[i] - 1]->getshop();
	}

	max = pro[y]->getshop();

	for (int j = 0; j < pro[y]->get_group_count(); j++)
	{
		if (pro[group[j] - 1]->getshop() > max)
		{
			max = pro[group[j] - 1]->getshop();
		}
	}


	if (pro[y]->getshop() == max - 1)
	{
		return true;
	}
	else
	{
		return false;
	}

}
bool GamePlay::check_for_number_of_hotel(int y)			// y is id of property 
{
	int* group = new int[4];

	group = pro[y]->get_ids_of_groups();

	int temp = pro[y]->get_hotel();

	int max = 0;
	int count = 0;

	int* hou = new  int[4];

	for (int i = 0; i < pro[y]->get_group_count(); i++)
	{
		if (temp == pro[group[i] - 1]->get_hotel())
		{
			count++;
		}
	}
	if (count == pro[y]->get_group_count())
	{
		return true;
	}


	for (int i = 0; i < pro[y]->get_group_count(); i++)
	{
		hou[i] = pro[group[i] - 1]->get_hotel();
	}

	max = pro[y]->get_hotel();

	for (int j = 0; j < pro[y]->get_group_count(); j++)
	{
		if (pro[group[j] - 1]->get_hotel() > max)
		{
			max = pro[group[j] - 1]->get_hotel();
		}
	}

	if (pro[y]->get_hotel() == max - 1)
	{
		return true;
	}
	else
	{
		return false;
	}

}

void GamePlay::get_land_tax(int x)
{
	Color(1);
	int* group = new int[40];

	group = p[x - 1]->get_ids_of_property();

	int tax = 0;

	for (int i = 0; i < p[x - 1]->get_index(); i++)
	{
		tax = tax + (((pro[group[i] - 1]->get_price()) / 100) * 20);
	}
	p[x - 1]->set_money(-tax);
	cout << "\n Player " << x << " is on special property.\n";
	cout << "\n PKR " << tax << " is recived by bank from player " << x << " as land tax which is 20 % of the price of the land owned by the player " << x << " .\n";
	cout << "\n New balance of player " << x << " is " << p[x - 1]->get_money() << "." << endl;


}
void GamePlay::get_property_tax(int x)
{
	Color(1);
	int* group = new int[40];

	group = p[x - 1]->get_ids_of_property();

	int tax = 0;

	for (int i = 0; i < p[x - 1]->get_index(); i++)
	{
		tax = tax + (((pro[group[i] - 1]->get_price()) / 100) * 10);
	}


	for (int j = 0; j < pro[group[j] - 1]->get_house(); j++)///		for houses
	{
		tax = tax + (100 / 100) * 20;
	}

	for (int j = 0; j < pro[group[j] - 1]->get_house(); j++)	//  for hotels
	{
		tax = tax + (1000 / 100) * 30;
	}

	for (int j = 0; j < pro[group[j] - 1]->get_house(); j++)	//  for shops
	{
		tax = tax + (300 / 100) * 30;
	}


	p[x - 1]->set_money(-tax);
	cout << "\n Player " << x << " is on special property.\n";
	cout << "\n PKR " << tax << " is recived by bank from player " << x << " as property tax which is 10 % of the price of the land owned by the player plus  20 % tax on houses and 30 % on hotels and shops" << x << " .\n";
	cout << "\n New balance of player " << x << " is " << p[x - 1]->get_money() << "." << endl;


}
void GamePlay::set_mortage_property(int x)	//  x is player id
{
	Color(p[x - 1]->get_player_number() + 2);
	int no = 0, mp = 0;	// mp is mortage price
	int* group = new int[40];

	group = p[x - 1]->get_ids_of_property();

	cout << "\n Enter number of property you want to mortage : ";
	cin >> no;
	if (pro[no - 1]->get_mortgage() == true)
	{
		cout << "\n Property number " << no << " is already mortaged. ";
	}
	else if (get_owner_id_of_property(no) == x)
	{
		pro[no - 1]->set_mortgage(1);

		mp = pro[no - 1]->get_price() / 2;

		mp = mp + ((pro[no - 1]->get_house() * 100) / 2);
		mp = mp + ((pro[no - 1]->get_hotel() * 1000) / 2);
		mp = mp + ((pro[no - 1]->getshop() * 300) / 2);

		mp = mp + ((pro[no - 1]->get_wi_fi() * 30) / 2);
		mp = mp + ((pro[no - 1]->get_electricity() * 50) / 2);
		mp = mp + ((pro[no - 1]->get_gas() * 50) / 2);

		p[x - 1]->set_money(mp);

		cout << "\n Property number " << no << " is mortaged. \n PKR " << mp << " is recived by the player number " << x << endl;

		system("pause");
	}
	else
	{
		cout << "\n Player " << x << " is not the owner of property number " << no;
		system("pause");
	}
}
void GamePlay::set_unmortage_property(int x)	//  x is player id
{
	Color(p[x - 1]->get_player_number() + 2);
	int no = 0, mp = 0, unmo = 0;	// mp is mortage price
	int* group = new int[40];

	group = p[x - 1]->get_ids_of_property();

	cout << "\n Enter number of property you want to unmortage : ";
	cin >> no;
	if (pro[no - 1]->get_mortgage() == false)
	{
		cout << "\n Property number " << no << " is already umortaged. ";
		system("pause");
	}
	else if (get_owner_id_of_property(no) == x)
	{
		pro[no - 1]->set_mortgage(0);

		mp = pro[no - 1]->get_price() / 2;

		mp = mp + ((pro[no - 1]->get_house() * 100) / 2);
		mp = mp + ((pro[no - 1]->get_hotel() * 1000) / 2);
		mp = mp + ((pro[no - 1]->getshop() * 300) / 2);

		mp = mp + ((pro[no - 1]->get_wi_fi() * 30) / 2);
		mp = mp + ((pro[no - 1]->get_electricity() * 50) / 2);
		mp = mp + ((pro[no - 1]->get_gas() * 50) / 2);

		unmo = mp + (mp / 100) * 20;



		p[x - 1]->set_money(-unmo);

		cout << "\n Property number " << no << " is unmortaged. \n PKR " << unmo << " is given by the player number " << x << " to the bank." << endl;

		system("pause");
	}
	else
	{
		cout << "\n Player " << x << " is not the owner of property number " << no;
		system("pause");
	}
}
void GamePlay::sell_property(int x)
{
	Color(p[x - 1]->get_player_number() + 2);
	int no = 0, max_bid = 0, bid = 0, winner_id = 0, choice = 0, mp = 0, unmo = 0;
	int* group = new int[40];
	group = p[x - 1]->get_ids_of_property();

	cout << " Enter property number you want to sell : ";
	cin >> no;

	if (get_owner_id_of_property(no) == x)
	{
	jup:
		for (int k = 0; k < no_of_players; k++)
		{

			if (p[k]->get_player_number() != x && p[k]->get_bankrupt_status() == false)
			{
				Color(p[k]->get_player_number() + 2);
				cout << " Player " << p[k]->get_player_number() << ". Enter your bid for the property number " << no << " : ";
				cin >> bid;
				if (bid > max_bid)
				{
					max_bid = bid;
					winner_id = p[k]->get_player_number();
				}
			}
		}

		for (int j = 0; j < no_of_players; j++)
		{
			if (p[j]->get_player_number() == winner_id)
			{
				if (p[j]->get_money() < max_bid)
				{
					cout << " Player " << p[j]->get_player_number() << " did not have enough money to buy this property, hence the property will be auctioned again to the player placing highest bid. \n\n";
					max_bid = 0;
					goto jup;
				}
				Color(p[j]->get_player_number() + 2);
				cout << "\n Property number  " << no << " is purchased by the player " << p[j]->get_player_number() << " at PKR " << max_bid << endl;

				properties_reset(no - 1);

				p[j]->set_money(-max_bid);
				p[x - 1]->set_money(max_bid);

				p[j]->set_ids_of_property(no);
				p[x - 1]->remove_id_of_property(no);

				if (pro[no - 1]->get_mortgage() == true)
				{
					Color(1);
					cout << " Property number " << no << " is mortgaged.\n";
					cout << " Enter 1 if you want to unmortgage property for the mortgage price plus 20 % interest.\n Enter 2 to pay the bank just the 20 % amount and keep the property mortgaged.\n	Enter choice : ";
					cin >> choice;
					if (choice == 1)
					{
						pro[no - 1]->set_mortgage(0);

						mp = pro[no - 1]->get_price() / 2;

						mp = mp + ((pro[no - 1]->get_house() * 100) / 2);
						mp = mp + ((pro[no - 1]->get_hotel() * 1000) / 2);
						mp = mp + ((pro[no - 1]->getshop() * 300) / 2);

						mp = mp + ((pro[no - 1]->get_wi_fi() * 30) / 2);
						mp = mp + ((pro[no - 1]->get_electricity() * 50) / 2);
						mp = mp + ((pro[no - 1]->get_gas() * 50) / 2);

						unmo = mp + (mp / 100) * 20;

						p[j]->set_money(-unmo);

						cout << "\n Property number " << no << " is unmortaged. \n PKR " << unmo << " is given by the player number " << x << " to the bank." << endl;

					}
					else if (choice == 2)
					{
						mp = pro[no - 1]->get_price() / 2;

						mp = mp + ((pro[no - 1]->get_house() * 100) / 2);
						mp = mp + ((pro[no - 1]->get_hotel() * 1000) / 2);
						mp = mp + ((pro[no - 1]->getshop() * 300) / 2);

						mp = mp + ((pro[no - 1]->get_wi_fi() * 30) / 2);
						mp = mp + ((pro[no - 1]->get_electricity() * 50) / 2);
						mp = mp + ((pro[no - 1]->get_gas() * 50) / 2);

						unmo = (mp / 100) * 20;
						p[j]->set_money(-unmo);

						cout << "\n Property number " << no << " is  still mortaged but \n PKR " << unmo << " is given by the player number " << x << " to the bank." << endl;

					}
				}
				Color(p[j]->get_player_number() + 2);
				cout << " New balance of player " << p[j]->get_player_number() << " is " << p[j]->get_money() << "." << endl;
				Color(p[x - 1]->get_player_number() + 2);
				cout << " New balance of player " << p[x - 1]->get_player_number() << " is " << p[x - 1]->get_money() << "." << endl;
				system("pause");
				break;
			}
		}
	}
	else
	{
		cout << "\n Player " << x << " is not the owner of property number " << no;
		system("pause");
	}

}
void GamePlay::print_mortage_properties(int x)
{
	int* group = new int[40];
	group = p[x - 1]->get_ids_of_property();
	cout << "\n Id's of Mortgaged Properties : ";

	for (int i = 0; i < p[x - 1]->get_index(); i++)
	{
		if (pro[group[i] - 1]->get_mortgage() == true)
		{
			cout << group[i] << " ";
		}
	}
	cout << endl;
	for (int k = 1; k < 14; k++)
	{
		Color(k);
		cout << "~";
	}
	for (int k = 1; k < 15; k++)
	{
		Color(k);
		cout << "~";
	}
	for (int k = 1; k < 15; k++)
	{
		Color(k);
		cout << "~";
	}
	for (int k = 1; k < 15; k++)
	{
		Color(k);
		cout << "~";
	}
	for (int k = 1; k < 15; k++)
	{
		Color(k);
		cout << "~";
	}
	cout << endl;
	//////cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

}
bool GamePlay::mortaageg_check(int x)
{
	int* group = new int[40];
	group = p[x - 1]->get_ids_of_property();

	for (int i = 0; i < p[x - 1]->get_index(); i++)
	{
		if (pro[group[i] - 1]->get_mortgage() == true)
		{
			return  true;
		}
	}

	return  false;
}
void GamePlay::properties_reset(int x)
{


	pro[x - 1]->set_updated_rent(pro[x - 1]->get_defalut_rent());

	pro[x - 1]->set_house(-pro[x - 1]->get_house());

	pro[x - 1]->set_hotel(-pro[x - 1]->get_hotel());

	pro[x - 1]->set_shop(-pro[x - 1]->getshop());

	pro[x - 1]->set_electricity(0);

	pro[x - 1]->set_gas(0);

	pro[x - 1]->set_wi_fi(0);

	/*pro[x - 1]->set_property_status(0);*/
}
void GamePlay::land_trasfer(int x, int y)
{
	int* group = new int[40];
	group = p[x - 1]->get_ids_of_property();

	for (int jj = 0; jj < p[x - 1]->get_index(); jj++)
	{
		properties_reset(group[jj]);

		p[y - 1]->set_ids_of_property(group[jj]);
	}
}
void GamePlay::save()
{

	ofstream file("Player.txt");

	file << no_of_players << endl << endl;

	for (int i = 0; i < no_of_players; i++)
	{

		file << p[i]->get_name() << "	" << p[i]->get_player_number() << "	" << p[i]->get_money() << "	" << p[i]->get_location_on_board() << "	" << p[i]->get_bankrupt_status() << "	" << p[i]->get_special_card_status() << "	" << p[i]->get_index() << "	";

		if (p[i]->get_index() > 0)
		{
			int* group = new int[40];
			group = p[i]->get_ids_of_property();

			for (int j = 0; j < p[i]->get_index(); j++)
			{
				file << group[j] << "    ";
			}
		}
		file << endl;
	}
	file.close();


	ofstream  file2("properties1.txt");

	for (int j = 0; j < 40; j++)
	{
		int* grop = new int[4];
		grop = pro[j]->get_ids_of_groups();

		file2 << pro[j]->get_property_number() << "       " << pro[j]->get_property_status() << "       " << pro[j]->get_price() << "       " << pro[j]->get_defalut_rent() << "       " << pro[j]->get_property_name() << "       " << pro[j]->get_house() << "       " << pro[j]->get_hotel() << "       " << pro[j]->getshop() << "       " << pro[j]->get_wi_fi() << "       " << pro[j]->get_gas() << "       " << pro[j]->get_electricity() << "       " << pro[j]->get_special_property() << "       " << pro[j]->get_station_utility() << "       " << pro[j]->get_updated_rent() << "       " << pro[j]->get_mortgage() << "       " << pro[j]->get_group_count() << "       ";

		file2 << grop[0] << "	" << grop[1] << "	" << grop[2] << "	" << grop[3] << "	" << endl;


		file2 << endl << endl;

	}
	file2.close();
}
void GamePlay::Chance(int x, int y)
{
	static int card_no;
	card_no++;

	Color(9);
	cout << " \n	C ";
	Color(2);
	cout << "H ";
	Color(3);
	cout << "A ";
	Color(4);
	cout << "N ";
	Color(5);
	cout << "C ";
	Color(6);
	cout << "E ";
	Color(10);
	cout << " !";
	Color(4);
	cout << "\n\n    -->";

	chance.print(card_no);
	Color(x + 2);
	if (card_no == 1)
	{
		p[x - 1]->set_location_on_board(1, y);
		p[x - 1]->set_money(300);

		cout << "\n New balance of player " << p[x - 1]->get_player_number() << " is " << p[x - 1]->get_money() << "." << endl;
	}
	else  if (card_no == 2)
	{
		if (p[x - 1]->get_location_on_board() == 8)
		{
			p[x - 1]->set_location_on_board(27, y);
		}

		if (p[x - 1]->get_location_on_board() == 23)
		{
			p[x - 1]->set_location_on_board(27, y);
		}

		if (p[x - 1]->get_location_on_board() == 37)
		{
			p[x - 1]->set_location_on_board(27, y);
			p[x - 1]->set_money(300);
			cout << "\n New balance of player " << p[x - 1]->get_player_number() << " is " << p[x - 1]->get_money() << "." << endl;
		}
	}
	else if (card_no == 3)
	{
		if (p[x - 1]->get_location_on_board() == 8)
		{
			p[x - 1]->set_location_on_board(17, y);

		}
		else if (p[x - 1]->get_location_on_board() == 23)
		{
			p[x - 1]->set_money(300);
			cout << "\n New balance of player " << p[x - 1]->get_player_number() << " is " << p[x - 1]->get_money() << "." << endl;
			p[x - 1]->set_location_on_board(17, y);
		}
		else if (p[x - 1]->get_location_on_board() == 37)
		{
			p[x - 1]->set_money(300);
			cout << "\n New balance of player " << p[x - 1]->get_player_number() << " is " << p[x - 1]->get_money() << "." << endl;
			p[x - 1]->set_location_on_board(17, y);
		}
	}
	else if (card_no == 4)
	{
		p[x - 1]->set_money(100);
		cout << "\n New balance of player " << p[x - 1]->get_player_number() << " is " << p[x - 1]->get_money() << "." << endl;
	}
	else if (card_no == 5)
	{
		p[x - 1]->set_special_card(1);
	}
	else if (card_no == 6)
	{
		int loca = p[x - 1]->get_location_on_board();

		p[x - 1]->set_location_on_board(loca - 4, y);
	}
	else if (card_no == 7)
	{
		p[x - 1]->set_money(-25);
		cout << "\n New balance of player " << p[x - 1]->get_player_number() << " is " << p[x - 1]->get_money() << "." << endl;
	}
	else if (card_no == 8)
	{
		for (int j = 0; j < no_of_players; j++)
		{
			if (p[j]->get_player_number() != x)
			{
				p[x - 1]->set_money(-25);
				p[j]->set_money(25);
			}
		}
		cout << "\n New balance of player " << p[x - 1]->get_player_number() << " is " << p[x - 1]->get_money() << "." << endl;
	}
	else if (card_no == 9)
	{
		p[x - 1]->set_money(150);
		cout << "\n New balance of player " << p[x - 1]->get_player_number() << " is " << p[x - 1]->get_money() << "." << endl;

	}
	else if (card_no == 10)
	{
		p[x - 1]->set_location_on_board(36, y);
	}
	else if (card_no == 11)
	{
		p[x - 1]->set_location_on_board(26, y);
	}
	else   if (card_no == 12)
	{
		if (p[x - 1]->get_location_on_board() == 8)
		{
			p[x - 1]->set_location_on_board(6, y);
			if (pro[p[x - 1]->get_location_on_board() - 1]->get_property_status() == true)
			{
				int owne = get_owner_id_of_property(p[x - 1]->get_location_on_board());
				cout << "\n Player " << owne << " recived " << 2 * pro[p[owne - 1]->get_location_on_board()]->get_updated_rent() << " player " << x << " .";

				p[owne - 1]->set_money(2 * pro[p[owne - 1]->get_location_on_board()]->get_updated_rent());
				p[x - 1]->set_money(-(2 * pro[p[owne - 1]->get_location_on_board()]->get_updated_rent()));


				cout << "\n New balance of player " << p[owne - 1]->get_player_number() << " is " << p[owne - 1]->get_money() << "." << endl;
				cout << "\n New balance of player " << p[x - 1]->get_player_number() << " is " << p[x - 1]->get_money() << "." << endl;

			}
		}
		else if (p[x - 1]->get_location_on_board() == 23)
		{
			p[x - 1]->set_location_on_board(26, y);
			if (pro[p[x - 1]->get_location_on_board() - 1]->get_property_status() == true)
			{
				int owne = get_owner_id_of_property(p[x - 1]->get_location_on_board());
				cout << "\n Player " << owne << " recived " << 2 * pro[p[owne - 1]->get_location_on_board()]->get_updated_rent() << " player " << x << " .";

				p[owne - 1]->set_money(2 * pro[p[owne - 1]->get_location_on_board()]->get_updated_rent());
				p[x - 1]->set_money(-(2 * pro[p[owne - 1]->get_location_on_board()]->get_updated_rent()));


				cout << "\n New balance of player " << p[owne - 1]->get_player_number() << " is " << p[owne - 1]->get_money() << "." << endl;
				cout << "\n New balance of player " << p[x - 1]->get_player_number() << " is " << p[x - 1]->get_money() << "." << endl;

			}
		}
		else if (p[x - 1]->get_location_on_board() == 37)
		{
			p[x - 1]->set_location_on_board(36, y);
			if (pro[p[x - 1]->get_location_on_board() - 1]->get_property_status() == true)
			{
				int owne = get_owner_id_of_property(p[x - 1]->get_location_on_board());
				cout << "\n Player " << owne << " recived " << 2 * pro[p[owne - 1]->get_location_on_board()]->get_updated_rent() << " player " << x << " .";

				p[owne - 1]->set_money(2 * pro[p[owne - 1]->get_location_on_board()]->get_updated_rent());
				p[x - 1]->set_money(-(2 * pro[p[owne - 1]->get_location_on_board()]->get_updated_rent()));


				cout << "\n New balance of player " << p[owne - 1]->get_player_number() << " is " << p[owne - 1]->get_money() << "." << endl;
				cout << "\n New balance of player " << p[x - 1]->get_player_number() << " is " << p[x - 1]->get_money() << "." << endl;

			}
		}
	}

	else   if (card_no == 13)
	{
		if (p[x - 1]->get_location_on_board() == 8)
		{
			p[x - 1]->set_location_on_board(6, y);

			if (pro[p[x - 1]->get_location_on_board() - 1]->get_property_status() == true)
			{
				int owne = get_owner_id_of_property(p[x - 1]->get_location_on_board());
				cout << "\n Player " << owne << " recived " << 2 * pro[p[owne - 1]->get_location_on_board()]->get_updated_rent() << " player " << x << " .";

				p[owne - 1]->set_money(2 * pro[p[owne - 1]->get_location_on_board()]->get_updated_rent());
				p[x - 1]->set_money(-(2 * pro[p[owne - 1]->get_location_on_board()]->get_updated_rent()));


				cout << "\n New balance of player " << p[owne - 1]->get_player_number() << " is " << p[owne - 1]->get_money() << "." << endl;
				cout << "\n New balance of player " << p[x - 1]->get_player_number() << " is " << p[x - 1]->get_money() << "." << endl;

			}
		}
		else if (p[x - 1]->get_location_on_board() == 23)
		{
			p[x - 1]->set_location_on_board(26, y);

			if (pro[p[x - 1]->get_location_on_board() - 1]->get_property_status() == true)
			{
				int owne = get_owner_id_of_property(p[x - 1]->get_location_on_board());
				cout << "\n Player " << owne << " recived " << 2 * pro[p[owne - 1]->get_location_on_board()]->get_updated_rent() << " player " << x << " .";

				p[owne - 1]->set_money(2 * pro[p[owne - 1]->get_location_on_board()]->get_updated_rent());
				p[x - 1]->set_money(-(2 * pro[p[owne - 1]->get_location_on_board()]->get_updated_rent()));


				cout << "\n New balance of player " << p[owne - 1]->get_player_number() << " is " << p[owne - 1]->get_money() << "." << endl;
				cout << "\n New balance of player " << p[x - 1]->get_player_number() << " is " << p[x - 1]->get_money() << "." << endl;

			}
		}
		else if (p[x - 1]->get_location_on_board() == 37)
		{
			p[x - 1]->set_location_on_board(36, y);

			if (pro[p[x - 1]->get_location_on_board() - 1]->get_property_status() == true)
			{
				int owne = get_owner_id_of_property(p[x - 1]->get_location_on_board());
				cout << "\n Player " << owne << " recived " << 2 * pro[p[owne - 1]->get_location_on_board()]->get_updated_rent() << " player " << x << " .";

				p[owne - 1]->set_money(2 * pro[p[owne - 1]->get_location_on_board()]->get_updated_rent());
				p[x - 1]->set_money(-(2 * pro[p[owne - 1]->get_location_on_board()]->get_updated_rent()));


				cout << "\n New balance of player " << p[owne - 1]->get_player_number() << " is " << p[owne - 1]->get_money() << "." << endl;
				cout << "\n New balance of player " << p[x - 1]->get_player_number() << " is " << p[x - 1]->get_money() << "." << endl;

			}
		}
	}
	else   if (card_no == 14)
	{
		if (p[x - 1]->get_location_on_board() == 8)
		{


			p[x - 1]->set_location_on_board(6, y);


			int owne = get_owner_id_of_property(p[x - 1]->get_location_on_board());

			if (pro[p[x - 1]->get_location_on_board() - 1]->get_property_status() == true)
			{
				cout << "\n PKR " << 5 * y << " is recived by player " << owne << " from player " << x << "  .";

				p[x - 1]->set_money(-(5 * y));
				p[owne - 1]->set_money(-(5 * y));


				cout << "\n New balance of player " << p[owne - 1]->get_player_number() << " is " << p[owne - 1]->get_money() << "." << endl;
				cout << "\n New balance of player " << p[x - 1]->get_player_number() << " is " << p[x - 1]->get_money() << "." << endl;

			}

		}
		else if (p[x - 1]->get_location_on_board() == 23)
		{
			p[x - 1]->set_location_on_board(26, y);

			int owne = get_owner_id_of_property(p[x - 1]->get_location_on_board());

			if (pro[p[x - 1]->get_location_on_board() - 1]->get_property_status() == true)
			{
				cout << "\n PKR " << 5 * y << " is recived by player " << owne << " from player " << x << "  .";

				p[x - 1]->set_money(-(5 * y));
				p[owne - 1]->set_money(-(5 * y));


				cout << "\n New balance of player " << p[owne - 1]->get_player_number() << " is " << p[owne - 1]->get_money() << "." << endl;
				cout << "\n New balance of player " << p[x - 1]->get_player_number() << " is " << p[x - 1]->get_money() << "." << endl;

			}
		}
		else if (p[x - 1]->get_location_on_board() == 37)
		{
			p[x - 1]->set_location_on_board(36, y);


			int owne = get_owner_id_of_property(p[x - 1]->get_location_on_board());

			if (pro[p[x - 1]->get_location_on_board() - 1]->get_property_status() == true)
			{
				cout << "\n PKR " << 5 * y << " is recived by player " << owne << " from player " << x << "  .";

				p[x - 1]->set_money(-(5 * y));
				p[owne - 1]->set_money(-(5 * y));


				cout << "\n New balance of player " << p[owne - 1]->get_player_number() << " is " << p[owne - 1]->get_money() << "." << endl;
				cout << "\n New balance of player " << p[x - 1]->get_player_number() << " is " << p[x - 1]->get_money() << "." << endl;

			}
		}
	}

	/*else if (p[x - 1]->get_location_on_board() == 23)
	{
		p[x - 1]->set_location_on_board(26, 0);
	}
	else if (p[x - 1]->get_location_on_board() == 37)
	{
		p[x - 1]->set_location_on_board(36, 0);
	}*/


	if (card_no == 14)
	{
		card_no = 0;
	}
}

void GamePlay::chest_ca(int x)
{
	static int card_n;
	card_n++;

	cout << "\n	";

	Color(9);
	cout << " \n	C ";
	Color(2);
	cout << "H ";
	Color(3);
	cout << "E ";
	Color(4);
	cout << "S ";
	Color(5);
	cout << "T ";
	/*Color(6);
	cout << "E ";*/
	Color(10);
	cout << " !";
	Color(4);
	cout << "\n\n   -->";



	chest.print(card_n);

	Color(x + 2);
	if (card_n == 1)
	{
		p[x - 1]->set_location_on_board(1, 0);
		p[x - 1]->set_money(400);

		cout << "\n New balance of player " << p[x - 1]->get_player_number() << " is " << p[x - 1]->get_money() << "." << endl;
	}
	else if (card_n == 2)
	{
		p[x - 1]->set_money(200);
		cout << "\n New balance of player " << p[x - 1]->get_player_number() << " is " << p[x - 1]->get_money() << "." << endl;
	}
	else if (card_n == 3)
	{
		p[x - 1]->set_money(-200);
		cout << "\n New balance of player " << p[x - 1]->get_player_number() << " is " << p[x - 1]->get_money() << "." << endl;
	}
	else if (card_n == 4)
	{
		p[x - 1]->set_money(50);
		cout << "\n New balance of player " << p[x - 1]->get_player_number() << " is " << p[x - 1]->get_money() << "." << endl;
	}
	else if (card_n == 5)
	{
		p[x - 1]->set_special_card(1);
	}
	else if (card_n == 6)
	{
		p[x - 1]->set_money(150);
		cout << "\n New balance of player " << p[x - 1]->get_player_number() << " is " << p[x - 1]->get_money() << "." << endl;
	}
	else if (card_n == 7)
	{
		p[x - 1]->set_money(200);
		cout << "\n New balance of player " << p[x - 1]->get_player_number() << " is " << p[x - 1]->get_money() << "." << endl;
	}
	else if (card_n == 8)
	{
		p[x - 1]->set_money(-100);
		cout << "\n New balance of player " << p[x - 1]->get_player_number() << " is " << p[x - 1]->get_money() << "." << endl;
	}
	else if (card_n == 9)
	{
		p[x - 1]->set_money(-200);
		cout << "\n New balance of player " << p[x - 1]->get_player_number() << " is " << p[x - 1]->get_money() << "." << endl;
	}
	else if (card_n == 10)
	{
		p[x - 1]->set_money(50);
		cout << "\n New balance of player " << p[x - 1]->get_player_number() << " is " << p[x - 1]->get_money() << "." << endl;
	}
	else if (card_n == 11)
	{
		p[x - 1]->set_money(300);
		cout << "\n New balance of player " << p[x - 1]->get_player_number() << " is " << p[x - 1]->get_money() << "." << endl;
	}
	else if (card_n == 12)
	{
		p[x - 1]->set_money(-50);
		cout << "\n New balance of player " << p[x - 1]->get_player_number() << " is " << p[x - 1]->get_money() << "." << endl;
	}
	else if (card_n == 13)
	{
		p[x - 1]->set_money(-80);
		cout << "\n New balance of player " << p[x - 1]->get_player_number() << " is " << p[x - 1]->get_money() << "." << endl;
	}
	else if (card_n == 14)
	{
		p[x - 1]->set_money(-50);
		cout << "\n New balance of player " << p[x - 1]->get_player_number() << " is " << p[x - 1]->get_money() << "." << endl;
	}



	if (card_n == 14)
	{
		card_n = 0;
	}
}


GamePlay::~GamePlay()
{
}

void GamePlay::game()
{

	int x = 0, i = 0, pn = 0, bid = 0, max_bid = 0, winner_id = 0, jai = 0, jail_index = 0, count = 0;
	int* jail = new int[20];

	while (true)
	{
		box();
		Color(13);
		pn = 0, bid = 0, max_bid = 0, winner_id = 0, count = 0;

		do
		{
			x = rand();
		} while (x < 1 || x>6);


		if (p[i]->get_bankrupt_status() == false)
		{

			for (int jj = 0; jj < jail_index; jj++)
			{
				if (jail[jj] == p[i]->get_player_number())
				{
					for (int kk = jj; kk < jail_index - 1; kk++)
					{
						jail[kk] = jail[kk + 1];
					}
					jail_index--;
					cout << p[i][0];

					print_mortage_properties(p[i]->get_player_number());
					cout << pro[p[i]->get_location_on_board() - 1][0];
					Color(1);
					cout << "\n You are in jail. Hence You cannot perform any transaction.";
					goto  end;

				}
			}
			for (int qq = 0; qq < no_of_players; qq++)
			{
				if (qq == i)
				{
					int z = p[i]->get_location_on_board();

					z = z + x;
					if (z > 40)
					{
						///////////go
						setbkcolor(CYAN);
						setcolor(BLACK);
						settextstyle(2, 0, 10);
						outtextxy(540, 300, "YipPpeeee!");
						settextstyle(2, 0, 9);
						outtextxy(590, 420, "YOU RECEIVED PKR 500");

						p[i]->set_location_on_board(z - 40, x, i);
						p[i]->set_money(500);

					}
					else
					{
						p[i]->set_location_on_board(z, x, i);
					}

				}
				else
				{
					p[qq]->set_location_on_board(p[qq]->get_location_on_board(), qq);
				}
			}

			/*int z = p[i]->get_location_on_board();

			z = z + x;
			if (z > 40)
			{
				p[i]->set_location_on_board(z - 40, x, i);
				p[i]->set_money(500);

			}
			else
			{
				p[i]->set_location_on_board(z, x, i);
			}*/
			cout << p[i][0];

			print_mortage_properties(p[i]->get_player_number());
			cout << pro[p[i]->get_location_on_board() - 1][0];

			if (p[i]->get_money() < 1500 || mortaageg_check(p[i]->get_player_number()) == true)
			{
				int mo = 0;
				cout << "\n Player " << p[i]->get_player_number() << "\n Enter 1 if you want to moratge any property.\n Enter 2 if u want to unmortage any property.\n Enter 3 if you want to sell any property . \n	Enter your choice : ";
				cin >> mo;
				if (mo == 1)
				{
					set_mortage_property(p[i]->get_player_number());
				}
				else if (mo == 2)
				{
					set_unmortage_property(p[i]->get_player_number());
				}
				else if (mo == 3)
				{
					sell_property(p[i]->get_player_number());
				}
				//else
				//{
				//	/*continue;*/
				//}
				system("cls");
				cout << p[i][0] << endl;

				print_mortage_properties(p[i]->get_player_number());
				cout << pro[p[i]->get_location_on_board() - 1][0];
			}
			//////////-----------------------------------------------------------------------------------

			if (pro[p[i]->get_location_on_board() - 1]->get_property_status() == false && pro[p[i]->get_location_on_board() - 1]->get_special_property() == false)
			{
				int choice = 0;


				cout << "\n\n Current Property is unowned.\n Enter 1 if you want to buy this property ohterwise enter 0 : ";
				cin >> choice;

				pn = p[i]->get_location_on_board();

				if (choice == 1)
				{
					if (p[i]->get_money() < pro[pn - 1]->get_price())
					{
						cout << " Player " << p[i]->get_player_number() << " did not have enough money to buy this property, hence the property will be auctioned to the player placing highest bid.\n";
						goto jump;
					}

					Color(p[i]->get_player_number() + 2);
					cout << "\n Property number : " << pro[p[i]->get_location_on_board() - 1]->get_property_number() << " is purchased by the player " << p[i]->get_player_number() << " at PKR :" << pro[p[i]->get_location_on_board() - 1]->get_price() << endl;
					p[i]->set_money(-pro[p[i]->get_location_on_board() - 1]->get_price());

					pro[p[i]->get_location_on_board() - 1]->set_property_status(true);

					p[i]->set_ids_of_property(pn);

					bank.remove_property_from_bank(pn);
					cout << "\n New balance of player " << p[i]->get_player_number() << " is " << p[i]->get_money() << "." << endl;

				}
				else
				{
				jump:
				jump1:
					for (int k = 0; k < no_of_players; k++)
					{
						if (p[k]->get_bankrupt_status() == false)
						{
							Color(p[k]->get_player_number() + 2);
							cout << " Player " << p[k]->get_player_number() << ". Enter your bid for the property number " << pn << " : ";
							cin >> bid;
							if (bid > max_bid)
							{
								max_bid = bid;
								winner_id = p[k]->get_player_number();
							}
						}
					}

					for (int j = 0; j < no_of_players; j++)
					{
						if (p[j]->get_player_number() == winner_id)
						{

							if (p[j]->get_money() < max_bid)
							{

								cout << "\n Player " << p[j]->get_player_number() << " did not have enough money to buy this property, hence the property will be auctioned again to the player placing highest bid.\n";
								max_bid = 0;
								goto jump1;
							}
							Color(p[j]->get_player_number() + 2);
							cout << "\n Property number : " << pn << " is purchased by the player " << p[j]->get_player_number() << " at PKR :" << max_bid << endl;
							p[j]->set_money(-max_bid);

							pro[pn - 1]->set_property_status(true);

							p[j]->set_ids_of_property(pn);

							bank.remove_property_from_bank(pn);
							cout << "\n New balance of player " << p[j]->get_player_number() << " is " << p[j]->get_money() << "." << endl;

							break;
						}
					}
				}
			}
			else  if (pro[p[i]->get_location_on_board() - 1]->get_property_status() == true && p[i]->get_player_number() == get_owner_id_of_property(p[i]->get_location_on_board()))
			{

				int que = 0;
				int uo = 0;// upgrade option
				pn = p[i]->get_location_on_board();
				//cout << pro[p[i]->get_location_on_board() - 1][0];
				cout << "\n Player " << p[i]->get_player_number() << " this property is owned by you.";

				cout << "\n Enter 1 if you want to make any development on this land otherwise enter 0 : ";
				cin >> que;

				if (pro[pn - 1]->get_station_utility() == true && que == 1)
				{
					cout << "\n Development can not be made on a station and utility. ";
					goto skip;
				}

				if (que == 1)
				{
					if (true == check_for_properties_of_same_group(p[i]->get_player_number(), pn - 1))
					{
						do
						{
							cout << "\n Enter 1 to build a house for PKR 100.";
							cout << "\n Enter 2 to build a hotel for PKR 700.";
							cout << "\n Enter 3 to build a shop for PKR 300.";

							cout << "\n Enter 4 to add Wi_fi connection at PKR 30.";
							cout << "\n Enter 5 to add Gas connection at PKR 50.";
							cout << "\n Enter 6 to add Electricity connection at PKR 50.";
							cout << "\n Enter 0 to exit.";
							cout << "\n\n		Enter your choice : ";
							cin >> uo;

							if (uo == 1)
							{
								if (check_for_number_of_house(pn - 1) == true)
								{
									pro[pn - 1]->set_house(1);
									pro[pn - 1]->increase_rent(30);		//30 % increase in rent.
									p[i]->set_money(-100);
								}
								else
								{
									cout << "\n More houses can not be constucted on this property right now.";
									system("pause");
								}
							}
							else if (uo == 2)
							{
								if (check_for_number_of_hotel(pn - 1) == true)
								{
									pro[pn - 1]->set_hotel(1);
									pro[pn - 1]->increase_rent(80);
									p[i]->set_money(-1000);
								}
								else
								{
									cout << "\n More hotels can not be constucted on this property right now.";
									system("pause");
								}
							}
							else if (uo == 3)
							{
								if (check_for_number_of_shop(pn - 1) == true)
								{
									pro[pn - 1]->set_shop(1);
									pro[pn - 1]->increase_rent(60);
									p[i]->set_money(-300);
								}
								else
								{

									cout << "\n More shops can not be constucted on this property right now.";
									system("pause");
								}
							}
							else if (uo == 4)
							{
								if (pro[pn - 1]->get_wi_fi() == true)
								{
									cout << "\n Only one  Wi_fi connection can be added.";
									system("pause");
								}
								else
								{
									pro[pn - 1]->set_wi_fi(1);
									pro[pn - 1]->increase_rent(10);
									p[i]->set_money(-30);
								}
							}
							else if (uo == 5)
							{
								if (pro[pn - 1]->get_gas() == true)
								{
									cout << "\n Only one gas connection can be added.";
									system("pause");
								}
								else
								{
									pro[pn - 1]->set_gas(1);
									pro[pn - 1]->increase_rent(20);
									p[i]->set_money(-50);
								}
							}
							else if (uo == 6)
							{
								if (pro[pn - 1]->get_electricity() == true)
								{
									cout << "\n Only one electricity connection can be added.";
									system("pause");
								}
								else
								{
									pro[pn - 1]->set_electricity(1);
									pro[pn - 1]->increase_rent(20);
									p[i]->set_money(-50);
								}
							}
							else if (uo == 0)
							{
								break;
							}
							system("cls");
							cout << p[i][0];
							print_mortage_properties(p[i]->get_player_number());
							cout << pro[pn - 1][0];

						} while (true);
					}
					else
					{
						cout << "\n All properties of this group are not owned by you hence this property cannot be upgraded now.";
					}
				skip:;
				}

			}
			else if (pro[p[i]->get_location_on_board() - 1]->get_property_status() == true && pro[p[i]->get_location_on_board() - 1]->get_special_property() == false)
			{
				//cout << pro[p[i]->get_location_on_board() - 1][0];
				if (pro[p[i]->get_location_on_board() - 1]->get_mortgage() == false)
				{
					cout << "\n Player " << p[i]->get_player_number() << " is on already owned property. Hence rent must be paied.";

					pn = p[i]->get_location_on_board();

					if (true == check_for_properties_of_same_group(p[i]->get_player_number(), pn - 1) && pro[pn - 1]->get_house() == 0 && pro[pn - 1]->get_hotel() == 0 && pro[pn - 1]->getshop() == 0 && pro[pn - 1]->get_wi_fi() == 0 && pro[pn - 1]->get_gas() == 0 && pro[pn - 1]->get_electricity() == 0)
					{

						p[i]->set_money(-2 * (pro[pn - 1]->get_updated_rent()));

						if (p[i]->get_money() < 0)
						{
							p[i]->set_bankrupt(1);
							land_trasfer(p[i]->get_player_number(), get_owner_id_of_property(pn));


							setbkcolor(CYAN);
							setcolor(BLACK);
							settextstyle(2, 0, 10);

							outtextxy(540, 250, "oOooopPssss!");
							settextstyle(2, 0, 9);
							outtextxy(620, 380, "Seems like you are out of money!");
							settextstyle(1, 0, 2);
							outtextxy(700, 420, "YOU ARE ELIMINATED FROM THE GAME");
							settextstyle(2, 0, 9);
							outtextxy(550, 470, "Better luck next time!");



							Color(p[i]->get_player_number());
							cout << "\n\n  --> Player " << p[i]->get_player_number() << " you are bankrupt.";
							Color(4);
							cout << "\n\n    --> Player " << p[i]->get_player_number() << " is eliminated.\n\n";
						}
						else
						{
							int owner = get_owner_id_of_property(pn);

							for (int jj = 0; jj < no_of_players; jj++)
							{
								if (p[jj]->get_player_number() == owner)
								{
									p[jj]->set_money(2 * (pro[pn - 1]->get_defalut_rent()));

									cout << "\n PKR " << 2 * (pro[pn - 1]->get_defalut_rent()) << " is received by the player " << owner << " from player " << p[i]->get_player_number() << ".\n";
									cout << "\n Double rent recived.";
								}
							}
						}
					}
					else
					{
						p[i]->set_money(-pro[pn - 1]->get_updated_rent());

						if (p[i]->get_money() < 0)
						{

							setbkcolor(CYAN);
							setcolor(BLACK);
							settextstyle(2, 0, 10);

							outtextxy(540, 250, "oOooopPssss!");
							settextstyle(2, 0, 9);
							outtextxy(620, 380, "Seems like you are out of money!");
							settextstyle(1, 0, 2);
							outtextxy(700, 420, "YOU ARE ELIMINATED FROM THE GAME");
							settextstyle(2, 0, 9);
							outtextxy(550, 470, "Better luck next time!");



							p[i]->set_bankrupt(1);
							land_trasfer(p[i]->get_player_number(), get_owner_id_of_property(pn));

							Color(p[i]->get_player_number());
							cout << "\n\n  --> Player " << p[i]->get_player_number() << " you are bankrupt.";
							Color(4);
							cout << "\n\n    --> Player " << p[i]->get_player_number() << " is eliminated.\n\n";
						}
						else
						{
							int owner = get_owner_id_of_property(pn);

							for (int jj = 0; jj < no_of_players; jj++)
							{
								if (p[jj]->get_player_number() == owner)
								{
									p[jj]->set_money(pro[pn - 1]->get_updated_rent());

									cout << "\n PKR " << pro[pn - 1]->get_updated_rent() << " is received by the player " << owner << " from player " << p[i]->get_player_number() << ".\n";
								}
							}
						}
					}
				}
				else
				{
					cout << "\n Player " << p[i]->get_player_number() << " is on already owned property which is mortaged. Hence rent will not be paid. \n";
				}
			}
			else if (pro[p[i]->get_location_on_board() - 1]->get_special_property() == true)
			{
				pn = p[i]->get_location_on_board();

				if (pn == 21)	// check for parking
				{
					setbkcolor(CYAN);
					setcolor(BLACK);
					settextstyle(2, 0, 10);
					outtextxy(645, 270, "THANKS FOR PARKING");
					settextstyle(2, 0, 9);
					outtextxy(535, 390, "KINDLY PAY PKR 10");

					Color(1);
					cout << "\n You are in parking pay 10 PKR as parking fee\n";
					p[i]->set_money(-10);
					Color(p[i]->get_player_number() + 2);
					cout << "\n PKR 10 is recived from player " << p[i]->get_player_number() << " as Parking fee.\n";
				}
				else  if (pn == 8 || pn == 23 || pn == 37)
				{
					Chance(p[i]->get_player_number(), x);
				}
				else  if (pn == 3 || pn == 18 || pn == 34)
				{
					chest_ca(p[i]->get_player_number());
				}
				else if (pn == 5)	// check for land tax
				{
					get_land_tax(p[i]->get_player_number());
				}
				else if (pn == 39)
				{
					get_property_tax(p[i]->get_player_number());
				}
				else if (pn == 1)
				{
					setbkcolor(CYAN);
					setcolor(BLACK);
					settextstyle(2, 0, 10);
					outtextxy(540, 300, "YipPpeeee!");
					settextstyle(2, 0, 9);
					outtextxy(590, 420, "YOU RECEIVED PKR 500");
					p[i]->set_location_on_board(z - 40, x, i);
					p[i]->set_money(500);

					cout << "\n Player " << p[i]->get_player_number() << " PKR 500 id added to your account.";
				}
				else if (pn == 31)
				{
					setbkcolor(CYAN);
					setcolor(BLACK);
					settextstyle(2, 0, 10);
					outtextxy(580, 300, "oooOOoPppsSss");
					settextstyle(2, 0, 9);
					outtextxy(595, 420, "YOU ARE IN NO GO AREA");


					cout << "\n Player " << p[i]->get_player_number() << " you are in no go area hence you are sent to jail.";
					p[i]->set_location_on_board(11, 0);

					cout << "\n Now you have two options.\n 1. Either pay a fine of 400 PKR to be released. \n 2. Use a Chance or Community Chest “Get out of Jail Free” card.\n Otherwise your next 2 turns will be skipped.";
					cout << "\n     Make a Choice : ";
					cin >> jai;

					if (jai == 1)
					{
						cout << "\n Player " << p[i]->get_player_number() << " is released from jail by paying PKR 400.";
						p[i]->set_money(-400);
						cout << "\n New balance of player " << p[i]->get_player_number() << " is " << p[i]->get_money() << ".";

					}
					else if (jai == 2)
					{
						if (p[i]->get_special_card_status() == true)
						{
							cout << "\n Player " << p[i]->get_player_number() << " is released from jail by using a Chance or Community Chest “Get out of Jail Free” card.";
							p[i]->set_special_card(0);
						}
						else
						{
							cout << "\n Player " << p[i]->get_player_number() << " you do not have any Chance or Community Chest “Get out of Jail Free” card. Hence your next two turns are skipped.";

							jail[jail_index] = p[i]->get_player_number();
							jail_index++;
							jail[jail_index] = p[i]->get_player_number();
							jail_index++;

						}
					}
					else
					{
						cout << "\n Player " << p[i]->get_player_number() << " your next two turns are skipped.";

						jail[jail_index] = p[i]->get_player_number();
						jail_index++;
						jail[jail_index] = p[i]->get_player_number();
						jail_index++;
					}
				}
			}
		end:

			////////////////bankrupt



			if (p[i]->get_money() < 0 && p[i]->get_bankrupt_status() == false)
			{

				setbkcolor(CYAN);
				setcolor(BLACK);
				settextstyle(2, 0, 10);

				outtextxy(540, 250, "oOooopPssss!");
				settextstyle(2, 0, 9);
				outtextxy(620, 380, "Seems like you are out of money!");
				settextstyle(1, 0, 2);
				outtextxy(700, 420, "YOU ARE ELIMINATED FROM THE GAME");
				settextstyle(2, 0, 9);
				outtextxy(550, 470, "Better luck next time!");


				cout << "\n\n		--> Player " << p[i]->get_player_number() << " you are Bankrupt.\n\n";
				Color(4);
				cout << "				--> Player " << p[i]->get_player_number() << " is eliminated.\n\n";
				p[i]->set_bankrupt(1);

				int* group = new int[40];
				group = p[i]->get_ids_of_property();

				for (int kkk = 0; kkk < p[i]->get_index(); kkk++)
				{
					pro[group[kkk] - 1]->set_property_status(0);
					properties_reset(group[kkk]);
				}
			}

			system("pause");
			system("cls");
		}

		for (int ppp = 0; ppp < no_of_players; ppp++)
		{
			if (p[ppp]->get_bankrupt_status() == true)
			{
				count++;
			}
		}
		if (count == (no_of_players - 1))
		{
			system("cls");



			for (int winn = 0; winn < no_of_players; winn++)
			{
				if (p[winn]->get_bankrupt_status() == false)
				{
					cout << p[winn][0];
					print_mortage_properties(p[winn]->get_player_number());
					Color(p[winn]->get_player_number());


					Color(4);
					cout << "\n\n\n\n\n\n	---> GAME FINISHED.";
					Color(p[winn]->get_player_number());
					cout << "\n\n  --> Player " << p[winn]->get_player_number();

					//cout << " congratulation ";

					Color(15);
					cout << "  C ";
					Color(2);
					cout << "O ";
					Color(3);
					cout << "N ";
					Color(4);
					cout << "G ";
					Color(5);
					cout << "R ";
					Color(6);
					cout << "A ";
					Color(9);
					cout << "T ";
					Color(10);
					cout << "U ";
					Color(11);
					cout << "L ";
					Color(12);
					cout << "A ";
					Color(13);
					cout << "T ";
					Color(14);
					cout << "I ";
					Color(15);
					cout << "O ";
					Color(2);
					cout << "N ";
					Color(3);
					cout << "S  ";


					Color(p[winn]->get_player_number());

					cout << "you have won the game.\n\n";
				}
			}
			break;
		}
		i++;
		if (i == no_of_players)
		{
			i = 0;
			save();
		}


		system("cls");
		closegraph();
	}
}





int main()
{




	initwindow(1600, 1000);
	rectangle(0, 0, 1600, 1000);
	setfillstyle(SOLID_FILL, CYAN);
	floodfill(2, 2, WHITE);
	setbkcolor(CYAN);
	setcolor(RED);
	settextstyle(2, 0, 10);
	outtextxy(500, 370, "MONOPOLY");
	delay(1500);
	closegraph();
	/*system("color %");	// instrution to change background color
	system("color fc");*/	//to change back ground color
	while (true)
	{

		system("cls");
		Color(14);
		cout << "                ! ";
		Color(1);
		cout << " M ";
		Color(2);
		cout << "O ";
		Color(3);
		cout << "N ";
		Color(4);
		cout << "O ";
		Color(5);
		cout << "P ";
		Color(6);
		cout << "L ";
		Color(9);
		cout << "Y ";
		Color(10);
		cout << " !";
		Color(6);
		cout << endl;
		cout << "----------------------------------------------------------------------\n";

		int choice = 0;


		Color(11);

		cout << " \n\n\n Developed by : \n";
		for (int k = 1; k < 14; k++)
		{
			Color(k);
			cout << "~";
		}
		for (int k = 1; k < 4; k++)
		{
			Color(k);
			cout << "~";
		}
		Color(13);
		cout << "\n          Sweba Haq";
		Color(2);
		cout << "\n          Rasaal Ahmad ";
		Color(12);
		cout << "\n          Huma Karim";
		Color(6);
		cout << "\n          Muhammad Junaid Afzal";
		cout << endl;
		for (int k = 1; k < 14; k++)
		{
			Color(k);
			cout << "~";
		}
		for (int k = 1; k < 15; k++)
		{
			Color(k);
			cout << "~";
		}
		for (int k = 1; k < 15; k++)
		{
			Color(k);
			cout << "~";
		}
		for (int k = 1; k < 15; k++)
		{
			Color(k);
			cout << "~";
		}
		for (int k = 1; k < 15; k++)
		{
			Color(k);
			cout << "~";
		}
		cout << endl;
		//cout << " \n\n   ";
		cout << " \n\n\n\n   ";
		Color(13);
		cout << "          # ";
		Color(2);
		cout << "M ";
		Color(3);
		cout << "E ";
		Color(4);
		cout << "N ";
		Color(5);
		cout << "U ";
		Color(9);
		cout << "# ";
		cout << "\n            ";
		for (int k = 1; k < 14; k++)
		{
			Color(k);
			cout << "~";
		}
		Color(9);
		// #MENU#";
		cout << "\n\n         Enter 1 to play new game.\n         Enter 2 to play saved game.\n         Enter 0 to exit.";
		Color(2);
		cout << "\n\n              Enter choice : ";
		cin >> choice;

		if (choice == 1)
		{
			initwindow(1600, 1000);
			rectangle(0, 0, 1600, 1000);
			setfillstyle(SOLID_FILL, CYAN);
			floodfill(2, 2, WHITE);

			setcolor(RED);
			settextstyle(2, 0, 10);
			outtextxy(500, 340, "MONOPOLY");
			outtextxy(500, 400, "NEW GAME");
			delay(1500);
			closegraph();


			system("cls");
			GamePlay game;

			game.game();
		}
		else if (choice == 2)
		{
			initwindow(1600, 1000);
			rectangle(0, 0, 1600, 1000);
			setfillstyle(SOLID_FILL, CYAN);
			floodfill(2, 2, WHITE);

			setcolor(RED);
			settextstyle(2, 0, 10);
			outtextxy(480, 340, "MONOPOLY");
			outtextxy(430, 400, "GAME LOADING");


			delay(1500);
			closegraph();


			system("cls");
			GamePlay game1(1);
			system("cls");
			game1.game();

		}
		else if (choice == 0)
		{
			break;
		}


		//cout << game;
		system("pause");
	}
}
//1: Blue
//2: Green
//3: Cyan
//4: Red
//5: Purple
//6: Yellow (Dark)
//7: Default white
//8: Gray/Grey
//9: Bright blue
//10: Brigth green
//11: Bright cyan
//12: Bright red
//13: Pink/Magenta
//14: Yellow
//15: Bright white