#pragma once

class eyebrow {
	struct eyebrows {
		double x{ 0 }, y{ 0 }, xsize{ 0 }, ysize{ 0 };
		
		eyebrows (double posX, double posY, double xSize, double ySize) :
			x{ posX }, y{ posY }, xsize{ xSize }, ysize{ ySize }{}
	};

public:
	void drawBrows(eyebrows browname);
	void showMain();
	void drawingImage();
	
public:
	double rectXSize{ 40 }, rectYSize{ 20 };
	unsigned int eyebrowColor{ 0xfde7d9ff };

	eyebrows brow1{ doodle::random(-400, 400), doodle::random(-250, 250), rectXSize, rectYSize },
			 brow2{ doodle::random(-400, 400), doodle::random(-250, 250), rectXSize, rectYSize };

	std::vector<eyebrows> brow_V = { brow1, brow2 };

	double brow1_xPos{ brow_V[0].x }, brow1_yPos{ brow_V[0].y };
	double brow2_xPos{ brow_V[1].x }, brow2_yPos{ brow_V[1].y };
};