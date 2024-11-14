#pragma once
#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;
class Cladiri
{
private:
	int numarcladire;
	int id;
	string civ;
public:
	
	Cladiri();
	~Cladiri();
	map<string, vector<string>> AdaugareCladiri(int _id,int _numarcladire,string _civ);


};

