/*
 * autotime.h
 *
 *  Created on: 2014/04/30
 *      Author: nash
 */

#ifndef AUTOTIME_H_
#define AUTOTIME_H_

#include <string>
class AutoTimer {
public:
	// protection against implicit conversations
	explicit AutoTimer(const std::string &name);
	~AutoTimer();

private:
	class Impl;
	Impl *mImpl;
};


#endif /* AUTOTIME_H_ */
