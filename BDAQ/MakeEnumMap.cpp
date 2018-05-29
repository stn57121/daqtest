#include <string>
#include "MakeEnumMap.h"

EnumMap MakeEnumMap(std::string str) {
	if (str == "HVState") {
		return MakeEnumMap_HV();
	}
	else if (str == "RCState") {
		return MakeEnumMap_RC();
	}
	else {
		return MakeEnumMap_ONOFF();
	}
}

EnumMap MakeEnumMap_HV() {
	EnumMap mp;
	mp.addNode("OFF",2);
	mp.addNode("STABLE", 11);
	mp.addNode("STANDBY",12);
	mp.addNode("SHOULDER",13);
	mp.addNode("PEAK",14);
	mp.addNode("TRANSIRION",31);
	mp.addNode("RAMPINGUP", 32);
	mp.addNode("RAMPINGDOWN", 33);
	mp.addNode("TURNINGON", 35);
	mp.addNode("TURNINGOGG", 36);
	mp.addNode("ERROR", 41);
	mp.addNode("TRIP", 42);
	mp.addNode("OVERCURRENT", 43);
	mp.addNode("OVER_VOLTAGE", 44);
	mp.addNode("INTERLOCK", 45);
	mp.addNode("MASKED", 50);
	return mp;
}

EnumMap MakeEnumMap_RC() {
	EnumMap mp;
	mp.addNode("OFF",1);
	mp.addNode("NOTREADY",2);
	mp.addNode("READY",3);
	mp.addNode("RUNNING",4);
	mp.addNode("PAUSED",5);
	mp.addNode("LOADING",6);
	mp.addNode("STARTING",7);
	mp.addNode("STOPPING",8);
	mp.addNode("CONFIGURING",9);
	mp.addNode("ERROR",10);
	mp.addNode("FATAL",11);
	mp.addNode("RECOVERING",12);
	mp.addNode("ABORTING",13);
	mp.addNode("BOOTING",14);
	return mp;
}

EnumMap MakeEnumMap_ONOFF(){
	EnumMap mp;
	mp.addNode("OFF", 0);
	mp.addNode("ON", 1);
	return mp;
}

//enum class State_HV {
//	OFF=2,
//	STABLE=11,
//	STANDBY=12,
//	SHOULDER=13,
//	PEAK=14,
//	TRANSITION=31,
//	RAMPINGUP=32,
//	RAMPINGDOWN=33,
//	TURNINGON=35,
//	TURNINGOFF=36,
//	ERROR=41,
//	TRIP=42,
//	OVER_CURRENT=43, 
//	OVER_VOLTAGE=44,
//	INTERLOCK=45,
//	MASKED=50
//};
//
//enum class State_RC {
//	OFF=1,
//	NOTREADY=2,
//	READY=3,
//	RUNNING=4,
//	PAUSED=5,
//	LOADING=6,
//	STARTING=7,
//	STOPPING=8,
//	CONFIGURING=9,
//	ERROR=10,
//	FATAL=11,
//	RECOVERING=12,
//	ABORTING=13,
//	BOOTING=14
//};