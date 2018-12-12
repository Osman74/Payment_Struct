#pragma once
#include <string>
#include <iostream>
struct Payment
{
	char m_NameCompany[20];
	char m_KindOfWork[20];
	char m_UnitOfMeasurement[20];
	double m_Cost;
	char m_Date[20];
	char m_Workload[20];
	~Payment() {};

	/*Payment(){};
	Payment(const& Payment p_Pay) : m_NameCompany(p_Pay.m_NameCompany), m_KindOfWork(p_Pay.m_KindOfWork), m_UnitOfMeasurement(p_Pay.m_UnitOfMeasurement), m_Cost(p_Pay.m_ost), m_Date(p_Pay.m_Date), m_Workload(p_Pay.m_Workload) {};
	Payment( std::string p_NameCompany,
			 std::string p_KindOfWork,
	         std::string p_UnitOfMeasurement,
	         double p_Cost,
	         std::string p_Date,
			 std::string p_Workload) 
			 : m_NameCompany(p_NameCompany), m_KindOfWork(p_KindOfWork), m_UnitOfMeasurement(p_UnitOfMeasurement), m_Cost(p_Cost), m_Date(p_Date), m_Workload(p_Workload) {};
	~Payment(){
		m_Date.assign("");
	};*/
	friend std::istream& operator>>(std::istream& p_In, Payment& p_Pay) {
		std::cout << "¬ведите им€ фирмы : ";
		p_In >> p_Pay.m_NameCompany;
		std::cout << "\n¬ведите вид работы : ";
		p_In >> p_Pay.m_KindOfWork;
		std::cout << "\n¬ведите единицу измерени€ : ";
		p_In >> p_Pay.m_UnitOfMeasurement;
		std::cout << "\n¬ведите стоимость за выполненную единицу работы : ";
		p_In >> p_Pay.m_Cost;
		std::cout << "\n¬ведите дату исполнени€ : ";
		p_In >> p_Pay.m_Date;
		std::cout << "\n¬ведите объем выполненной работы : ";
		p_In >> p_Pay.m_Workload;
		std::cout << "\n";
		return p_In;
	}
	friend std::ifstream& operator>>(std::ifstream& p_In, Payment& p_Pay) {
		std::cout << "¬ведите им€ фирмы : ";
		p_In >> p_Pay.m_NameCompany;
		std::cout << "\n¬ведите вид работы : ";
		p_In >> p_Pay.m_KindOfWork;
		std::cout << "\n¬ведите единицу измерени€ : ";
		p_In >> p_Pay.m_UnitOfMeasurement;
		std::cout << "\n¬ведите стоимость за выполненную единицу работы : ";
		p_In >> p_Pay.m_Cost;
		std::cout << "\n¬ведите дату исполнени€ : ";
		p_In >> p_Pay.m_Date;
		std::cout << "\n¬ведите объем выполненной работы : ";
		p_In >> p_Pay.m_Workload;
		std::cout << "\n";
		return p_In;
	}
};