
#include<string.h>


class Aeroplan {
	char route[50];
	int fare;
	float totalFare;
public:
	Aeroplan();
	virtual ~Aeroplan();

	int getFare() const {
		return fare;
	}

	void setFare(int fare) {
		this->fare = fare;
	}

	const char* getRoute() const {
		return route;
	}

	float getTotalFare() const {
		return totalFare;
	}

	void setTotalFare(float totalFare) {
		this->totalFare = totalFare;
	}

	void setRoute(char* r)
	{
		strcpy(route,r);
	}
};


