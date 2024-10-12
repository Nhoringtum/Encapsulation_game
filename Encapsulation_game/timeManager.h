#ifndef __TIMEMANAGER_H__
#define __TIMEMANAGER_H__

class TimeManager
{
public:
	TimeManager();

	void delta_time();
	int get_fps();
	void set_game_pause();
};

#endif