#include "osc_sender.h"

void osc_sender::setup()
{
	//TODO: read settings from a file

	// initialize data sender
	sender.setup("localhost", 12340);
}

void osc_sender::send(vector<Point> list)
{
	ofxOscBundle bundle;
	for (int i = 0; i < list.size(); ++i) {
		ofxOscMessage m;
		m.setAddress("/blob");
		m.addInt32Arg(list[i].x);
		m.addInt32Arg(list[i].y);

		bundle.addMessage(m);
	}
	sender.sendBundle(bundle);
}