
#include "date.h"

date::date() {

}

date::~date() {

}

void date::accept()
{
	cin>>day>>month>>year;
}

void date::display ()
{
	cout<<"\ndate:"<<day<<":"<<month<<":"<<year;
}
