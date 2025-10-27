#include <iostream>
#include<string.h>

class Date
{
private:
	int day;
	int month;
	int year;
public:
	friend class People;
public:
	Date()
	{
		std::cout << "�������ڣ��� �� �գ���";
		std::cin  >> year >> month >> day;  
	}
};

class People
{
private:
	char* name;
	char* sex;
	int* date;
	char* id;
	int number;
public:
	People()
	{
		name = new char(11);
		std::cout << "������";
		std::cin  >> name;
		
		std::cout << "��ţ�";
		std::cin  >> number;
		
		sex = new char(3); 
		std::cout << "�Ա�(��/Ů)��";
		std::cin  >> sex;
		
		Date buf_date;
		date = new int(3);
		date[0] = buf_date.year;
		date[1] = buf_date.month;
		date[2] = buf_date.day;
		
		id = new char(19);
		std::cout << "���֤�ţ�";
		std::cin  >> id;  
	}
	
	void outputInfo()
	{
		std::cout << "������" 		   << name   << std::endl;
		std::cout << "��ţ�" 		   << number << std::endl;
		std::cout << "�Ա�"          << sex    << std::endl;
		std::cout << "�������ڣ�" << date[0] << "��" << date[1] << "��" << date[2] << "��" <<std::endl;
		std::cout << "���֤�ţ�" << id << std::endl;
	}
	
	People(const People& other) 
	{
		number = other.number;
		name = new char(12);
		sex = new char(4); 
		date = new int[3];
		id = new char(20);
		
		memcpy(name,other.name,11);
		name[11] = 0;
		memcpy(sex,other.sex,3);
		sex[3] = 0;
		memcpy(id,other.id,19);
		id[19] = 0;
		memcpy(date,other.date,12);
	}
	
	~People()
	{
		delete name;
		delete sex;
		delete[] date;
		delete id;
	}
};

int main()
{
	int size;
	std::cout << "Ա��������";
	std::cin >> size;
	
	People* people = new People[size];
	People  copypeople = people[0];
	
	std::cout << std::endl; 
	
	copypeople.outputInfo(); 
	for(int i = 0;i < size;i++)
		people[i].outputInfo();
}

