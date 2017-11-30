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

	//Deng::Misc::ReadArguments::FromFile file_args(argv[1]);

	//file_args();

	//cout << Deng::Misc::TimeStamp();

	Deng::Misc::ReadArguments::FromFile myargs(argv[1]);

	

	//Verify_level_crossing();
	const unsigned int num_spinor = myargs("num_spinor");
	const unsigned int dim_hamil = 1 << num_spinor;
	const unsigned int dim_para_each_direction = myargs("dim_para_each_direction");
	const unsigned int dim_para = (2 * num_spinor + 1)*dim_para_each_direction;
	const double rand = myargs("rand");

	std::cout << "Number of spin: " << num_spinor << std::endl;
	std::cout << "Dim of Paramateric space: " << dim_para << "  with " << dim_para_each_direction << " paras for each direction" << std::endl;
	std::cout << "start with " << rand << " randomness" << std::endl << std::endl << std::endl;

	const unsigned int N_t = myargs("N_t");
	const double tau = myargs("tau");
	const double epsilon = myargs("epsilon");
	const double epsilon_gradient = sqrt(dim_hamil)*epsilon;
	const unsigned int conj_grad_max_iter = myargs("conj_grad_max_iter");


	std::ofstream my_file;
	my_file.open("test_output.dat");

	myargs(my_file);

	return 0;
}