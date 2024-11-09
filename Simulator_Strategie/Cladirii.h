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
public:
	map<string, int> listacladiri;
	
	Cladiri();
	~Cladiri();
	void AdaugareCladiri(map<string,int>&listacladiri,int _id,int _numarcladire);


};

