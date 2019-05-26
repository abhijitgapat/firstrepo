#include<iostream>
using namespace std;

#ifndef DATE_H_
#define DATE_H_

class date {
	int day,month,year;
public:

	void accept();
	void display();
	date();
	virtual ~date();
};

#endif /* DATE_H_ */
