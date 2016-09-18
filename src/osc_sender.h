#include "osc/src/ofxOsc.h"
#include "common.h"

class osc_sender {
public:
	void setup();

	void send(vector<Point> list);

private:
	ofxOscSender sender;
};