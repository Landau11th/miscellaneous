#include<iostream>
#include<cassert>

#include"miscellaneous.hpp"

using std::cout;
using std::endl;

class Enigma : public Deng::Misc::FiniteGroup::Abelian_Additive_Group_of_Z<int, 26>
{
protected:

public:
	using Deng::Misc::FiniteGroup::Abelian_Additive_Group_of_Z<int, 26>::Abelian_Additive_Group_of_Z;
	
	void i_am_enigma() { std::cout << "I am Enigma\n"; };
};

class A
{
public:
	void f() { cout << "A's f\n"; };
};
class B : public A
{
};

int main(int argc, char*argv[])
{
	//Enigma a = 40;
	//Enigma b(2);

	////Deng::Misc::FiniteGroup::Abelian_Additive_Group_of_Z<int, 10> a(5);
	////Deng::Misc::FiniteGroup::Abelian_Additive_Group_of_Z<int, 10> b(5);
	////auto c = a + b;
	//auto c = a - b;

	////cout << a.v();

	//B b_text;
	//b_text.f();

	//std::map<std::string, int> test;
	//test["1"] = 1;
	//test["2"] = 2;

	//cout << test["32"];

	Deng::Misc::ReadArguments::FromFile file_args(argv[1]);

	file_args();

	return 0;
}
