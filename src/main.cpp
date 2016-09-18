#include "osc_sender.h"
#include "common.h"

int main()
{
	// initialize osc sender
	osc_sender sender;
	sender.setup();

	// make a list of detected people's position
	vector<Point> pointsList;

	// make test points
	Point p;
	p.x = 100;
	p.y = 150;

	pointsList.push_back(p);

	p.x = 200;
	p.y = 350;

	pointsList.push_back(p);

	// send points
	sender.send(pointsList);

	return 0;
}