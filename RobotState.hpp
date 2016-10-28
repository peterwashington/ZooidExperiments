//
//  RobotState.hpp
//  SwarmSimulator
//
//  Created by Mathieu Le Goc on 27/01/16.
//
//

#ifndef RobotState_hpp
#define RobotState_hpp

#include "ofMain.h"
#include <iostream>
#include <stdio.h>
#include "ofxSvg.h"

#define NO_TOUCH 0

class RobotState {
    
private:
	unsigned int id;
	float radius;
	float angle;
	ofVec2f position;
	ofVec2f  goal;
	uint8_t touch;
	bool goalReached;
	ofColor color;
	unsigned int batteryLevel;
    float speed;
    uint8_t jerkiness;
    float jitter;
public:
    RobotState();
    ~RobotState();
	RobotState(unsigned int _id, float _radius, ofVec2f _position, ofVec2f _goal, float _angle, ofColor _color, uint8_t _battery);
    RobotState(unsigned int _id, float _radius, ofVec2f _position, ofVec2f _goal, float _angle, ofColor _color, uint8_t _battery, float _speed, uint8_t _jerkiness, float _jitter);

    bool operator==(const RobotState& r);
    bool operator!=(const RobotState& r);
    
    ofVec2f  getPosition();
    float getAngle();
    ofVec2f getGoal();
    uint8_t getTouch();
    bool isGoalReached();
    ofColor getColor();
    unsigned int getId();
    float getRadius();
	uint8_t getBatteryLevel();
    float getSpeed();
    uint8_t getJerkiness();
    float getJitter();

    void setPosition(ofVec2f _pos);
    void setPosition(float _x, float _y);
    void setRadius(float _radius);
    void setAngle(float _angle);
    void setGoal(ofVec2f _goal);
	void setGoal(float _x, float _y);
    void setColor(ofColor _color);
    void setGoalReached(bool _goalReached);
    void setTouch(uint8_t _touch);
    void setId(unsigned int _id);
	void setBatteryLevel(uint8_t _battery);
    void setSpeed(float _speed);
    void setJerkiness(uint8_t _jerkiness);
    void setJitter(float _jitter);

    void drawRobot(ofxSVG* artwork, float scale);
	void drawGoal();
    void drawBatteryLevel(ofxSVG* artwork, float scale);
    };

#endif /* RobotState_hpp */
