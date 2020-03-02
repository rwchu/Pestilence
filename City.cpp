#include <string>
#include <vector>
using namespace std;

class City {
public:
	string name;
	float x, y; // city coordinates
	int population, infected_count;
	bool quarantine;

	City(string cityname, float x1, float y1, int pop) {
		name = cityname;
		x = x1;
		y = y1;
		population = pop;

		infected_count = 0;
		quarantine = false;
	}
};

void LoadCities(std::vector<City> cities, int city_count) {
	for (int i = 0; i < city_count; i++) {
		string name = "";
		float x = static_cast <float> (rand()) / static_cast <float> (RAND_MAX); // 0-1
		float y = static_cast <float> (rand()) / static_cast <float> (RAND_MAX); // 0-1
		int population = rand() % ((1000000 - 10000) + 1) + 10000; // 10,000 - 1,000,000

		cities.push_back(City(name, x, y, population));
	}
}