//file containing interface for Playlist class
#include <string>
#include <vector>

#include "CarPart.h"
using namespace std;

class RebuildKit {
    private:
        vector<CarPart> carParts;
        static const int maximumParts = 10;

    public:
     	void addCarPart(CarPart e);
      void displayDetails();
};
