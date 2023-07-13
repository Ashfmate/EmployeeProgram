#include "Daddy.h"

bool Daddy::save(string content)
{
	std::ofstream file(path, std::ios::app);

	if (file) 
	{
		file << content << "\n";
		file.close();
		return true;
	}
	else
	{
		return false;
	}
}

string Daddy::load()
{
	std::ifstream file(path);

	if (file)
	{
		string res;
		for (char ch = file.get(); file; ch = file.get())
			res.push_back(ch);
		return res;
	}
	else
	{
		throw std::exception("Could not find the file");
	}
}
