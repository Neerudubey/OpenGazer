#pragma once

#include "ImageWindow.h"
#include "Component.h"

class TestWindow: public Component {
public:
	TestWindow(const std::vector<cv::Point> &points);
	~TestWindow();
	
	// Main processing function
	void process();
	
	// Calibration API functions (for future use)
	void start();
	void pointStart();
	void pointEnd();
	void abortTesting();
	void testingEnded();
	void draw();
	
	bool isActive();
	cv::Point getActivePoint();
	int getPointNumber();
	int getPointFrameNo();
	bool isLastFrame();
	bool isLastPoint();
	bool isFinished();
	bool shouldStartNextPoint();
	
private:
	int _frameNumber;
	std::vector<cv::Point> _points;
	ImageWindow _window;
	cv::Mat _screenImage;
	cv::Mat _targetImage;
};


