#include <iostream>

enum CPU_Rank : int
{P1=1,P2,P3,P4,P5,P6,P7};

class CPU
{
private:
	int m_frequency;
	float m_volage;
	CPU_Rank m_rank;
public:
	CPU(CPU_Rank rank = P6,int frequency = 300,float volage = 2.8f):
		m_rank(rank),m_frequency(frequency),m_volage(volage){
		std::cout << "one CPU is created!" << std::endl;	
	}
	
	void run()
	{
		std::cout << "CPU is running!" << std::endl;
	}
	
	void stop()
	{
		std::cout << "CPU stop!" << std::endl;
	}
	
	~CPU()
	{
		std::cout << "one CPU is distoried!";
	}
};

int main()
{
	CPU my_CPU;
	my_CPU.run();
	my_CPU.stop();
}
