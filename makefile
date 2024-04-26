q1: AirVehicle.cpp AirVehicle.h main-1-1.cpp
	g++ main-1-1.cpp AirVehicle.cpp AirVehicle.h

q2: AirVehicle.cpp AirVehicle.h main-2-1.cpp Helicopter.cpp Helicopter.h
	g++ main-2-1.cpp AirVehicle.cpp AirVehicle.h Helicopter.cpp Helicopter.h

q3: AirVehicle.cpp AirVehicle.h main-2-2.cpp Airplane.cpp Airplane.h
	g++ main-2-2.cpp AirVehicle.cpp AirVehicle.h Airplane.cpp Airplane.h

q4: AirVehicle.cpp AirVehicle.h main-3-1.cpp Airplane.cpp Airplane.h AirFleet.h AirFleet.cpp
	g++ main-3-1.cpp AirVehicle.cpp AirVehicle.h Helicopter.cpp Helicopter.h AirFleet.h AirFleet.cpp Airplane.cpp Airplane.h