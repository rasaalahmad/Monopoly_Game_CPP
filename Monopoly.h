#pragma once
#pragma comment(lib, "winmm.lib")
#include"graphics.h"
#include<Windows.h>
#include<mmsystem.h>
#include<iostream>
#include<fstream>

#pragma warning(disable:4996)
using namespace std;


class Person
{
	char* name;
	int player_number;
	float money;
	int location_on_board;
	bool Bankrupt;
public:
	Person();
	Person(const char* nam, int player_num, float mon, int locate, bool bank_rupt);
	Person(const Person& p);

	//void set_name();
	void set_name(const char* nam);
	void set_location_on_board(int locate, int dice, int clr);
	void set_location_on_board(int locate, int clr);
	void set_bankrupt(bool bank);
	void set_money(float mon);
	void set_player_number(int n);



	const char* get_name();
	int get_player_number();
	int get_location_on_board();
	float get_money();
	bool get_bankrupt_status();

	friend ostream& operator<<(ostream& out, Person& p);

	friend istream& operator>>(istream& in, Person& p);

	~Person();

};


class Player : public Person
{
	bool special_card;
	int* ids_of_property_owned;
	int index;
public:
	Player();
	Player(const char* nam, int player_num, float mon, int locate, bool bank_rupt, bool special, const int* property_id, int size);
	Player(const Player&);
	~Player();

	void set_ids_of_property1(const int* property_id, int size);
	void set_ids_of_property(int id);
	void remove_id_of_property(int);
	void set_special_card(bool card);

	int* get_ids_of_property();
	int get_index();
	bool get_special_card_status();

	friend ostream& operator<<(ostream& out, Player& obj);
};


class Upgrade
{
private:
	int house, hotel, shop;
	bool wi_fi, gas, electricity;
public:
	Upgrade();
	Upgrade(int, int, int, bool, bool, bool);
	Upgrade(Upgrade&);

	void set_house(int);
	void set_hotel(int);
	void set_shop(int);
	void set_wi_fi(bool);
	void set_gas(bool);
	void set_electricity(bool);

	int get_house();
	int get_hotel();
	int getshop();
	bool get_wi_fi();
	bool get_gas();
	bool get_electricity();

	~Upgrade();

	friend ostream& operator<<(ostream& out, Upgrade& obj);
};

class Place
{
private:
	int		property_number;
	char* property_name;
	bool	property_status;	// 1 if owned else 0
	float	price;
	float defalut_rent;
public:
	Place();
	Place(int, const char*, bool, float, float);
	Place(Place& p);
	void set_property_number(int);

	void set_property_name(char*);
	void set_property_status(bool);
	void set_price(float);
	void set_defalut_rent(float);
	 
	int get_property_number();
	char* get_property_name();
	bool get_property_status();
	float get_price();
	float get_defalut_rent();

	friend ostream& operator<<(ostream& out, Place& obj);

	~Place();
};

class Property : public Place, public Upgrade
{
private:
	int* ids_of_groups;
	int  group_count;
	bool special_property;
	bool station_utility;
	bool mortgage;
	float updated_rent;

public:
	Property();
	Property(int, int, int, int, int, bool, bool, bool, float, int, const char*, bool, float, float, int, int, int, bool, bool, bool);
	Property(Property& p);

	void set_ids_of_groups(int, int, int, int);
	void set_group_count(int);
	void set_special_property(bool);
	void set_station_utility(bool);
	void set_mortgage(bool);
	void set_updated_rent(float);
	void increase_rent(int);

	int* get_ids_of_groups();
	int	   get_group_count();
	bool   get_special_property();
	bool   get_station_utility();
	bool   get_mortgage();
	float get_updated_rent();


	friend ostream& operator<<(ostream& out, Property& obj);
	friend ifstream& operator>>(ifstream& in, Property& obj);

	~Property();
};

class Banker
{
	float balance;

	int properties[40] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40 };

	//Property* all_properties;
public:
	Banker();
	Banker(const Banker& b);

	void remove_property_from_bank(int);
	void set_balance(float bal);
	float get_balance();

	~Banker();
};

class CommunityChest
{
	int* card_number;
	char** chest_card_details;
public:
	CommunityChest();

	void print(int);

	~CommunityChest();
};

class ChanceCards
{
	int* chance_card_number;
	char** chance_card_details;
public:
	ChanceCards();

	void print(int);

	~ChanceCards();
};

class GameBoard
{
public:
	GameBoard();
	
	virtual void box();

	virtual ~GameBoard();
};

class GamePlay: public GameBoard
{
private:
	int no_of_players;
	Player** p;
	Banker bank;
	Property** pro;
	ChanceCards chance;
	CommunityChest	chest;

public:
	GamePlay();
	GamePlay(int);

	int	get_owner_id_of_property(int);
	bool check_for_properties_of_same_group(int, int);

	bool check_for_number_of_house(int);
	bool check_for_number_of_hotel(int);
	bool check_for_number_of_shop(int);

	void get_land_tax(int);
	void get_property_tax(int);
	void set_mortage_property(int);
	void set_unmortage_property(int);
	void sell_property(int);
	void print_mortage_properties(int);
	bool mortaageg_check(int);
	void properties_reset(int);
	void land_trasfer(int, int);
	void save();

	void Chance(int, int);
	void chest_ca(int);
	void game();
	void box();


	//void  main();

	friend ostream& operator<<(ostream& out, GamePlay& obj);

	~GamePlay();
};

