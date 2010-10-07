#ifndef EVENTHANDLER_H
#define EVENTHANDLER_H

class Event;

class EventHandler {
public:
	EventHandler();
	virtual ~EventHandler(void);

	Event *addEvent();
	
	void signal(Event *event);
	void waitForAny();

private:
	class PrivateData;
	PrivateData *d;
};

#endif //EVENTHANDLER_H