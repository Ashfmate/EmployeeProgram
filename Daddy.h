#pragma once
#include <fstream>
#include <string>

using std::string;

class Daddy
{
public:
	Daddy(const string& path) : path(path){}
	bool save(string content);
	string load();
private:
	const string path;
};