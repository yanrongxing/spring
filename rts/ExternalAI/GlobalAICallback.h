#ifndef GLOBALAICALLBACK_H
#define GLOBALAICALLBACK_H

#include "IGlobalAICallback.h"
#include "AICallback.h"
class CGlobalAI;
class CAICheats;

class CGlobalAICallback :
	public IGlobalAICallback
{
	CGlobalAI* ai;
public:
	CGlobalAICallback(CGlobalAI* ai);
	~CGlobalAICallback(void);

	CAICheats* cheats;
	bool noMessages;
	CAICallback scb;

	IAICheats* GetCheatInterface();
	IAICallback* GetAICallback();
};

#endif
