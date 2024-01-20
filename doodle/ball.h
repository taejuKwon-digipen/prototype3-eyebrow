#pragma once

class ball {
public:
	struct balls {
		double x{ 0 }, y{ 0 }, size{ 0 };

		balls(double posX, double posY, double diameter) : x{ posX }, y{ posY }, size{ diameter }{}
	};

public:
	void drawblueBalls();
	void drawgreenBalls();
	void drawyellowBalls();
	void drawredBalls();

	unsigned int blueBallColor{ 0x0F4C81e6 };
	unsigned int greenBallColor{0x677d2beb };
	unsigned int yellowBallColor{ 0xffce00f0 };
	unsigned int redBallColor{ 0xc40000ff };
	double blueBalldiameterSize{ 250 };
	double greenBalldiameterSize{ 130 };
	double yellowBalldiameterSize{ 100 };
	double redBalldiameterSize{ 60 };

public:
	balls ball0{ doodle::random(-400, 400), doodle::random(-250, 250), blueBalldiameterSize },
		  ball1{ doodle::random(-400, 400), doodle::random(-250, 250), blueBalldiameterSize },
		  ball2{ doodle::random(-400, 400), doodle::random(-250, 250), blueBalldiameterSize },
		  ball3{ doodle::random(-400, 400), doodle::random(-250, 250), blueBalldiameterSize },
		  ball4{ doodle::random(-400, 400), doodle::random(-250, 250), blueBalldiameterSize },
		  ball5{ doodle::random(-400, 400), doodle::random(-250, 250), blueBalldiameterSize },
		  ball6{ doodle::random(-400, 400), doodle::random(-250, 250), blueBalldiameterSize },
		  ball7{ doodle::random(-400, 400), doodle::random(-250, 250), blueBalldiameterSize },
		  ball8{ doodle::random(-400, 400), doodle::random(-250, 250), blueBalldiameterSize },
		  ball9{ doodle::random(-400, 400), doodle::random(-250, 250), blueBalldiameterSize };

	balls ball10{ doodle::random(-400, 400), doodle::random(-250, 250), greenBalldiameterSize },
		  ball11{ doodle::random(-400, 400), doodle::random(-250, 250), greenBalldiameterSize },
		  ball12{ doodle::random(-400, 400), doodle::random(-250, 250), greenBalldiameterSize },
		  ball13{ doodle::random(-400, 400), doodle::random(-250, 250), greenBalldiameterSize },
		  ball14{ doodle::random(-400, 400), doodle::random(-250, 250), greenBalldiameterSize },
		  ball15{ doodle::random(-400, 400), doodle::random(-250, 250), greenBalldiameterSize },
		  ball16{ doodle::random(-400, 400), doodle::random(-250, 250), greenBalldiameterSize },
		  ball17{ doodle::random(-400, 400), doodle::random(-250, 250), greenBalldiameterSize },
		  ball18{ doodle::random(-400, 400), doodle::random(-250, 250), greenBalldiameterSize },
		  ball19{ doodle::random(-400, 400), doodle::random(-250, 250), greenBalldiameterSize },
		  ball20{ doodle::random(-400, 400), doodle::random(-250, 250), greenBalldiameterSize },
		  ball21{ doodle::random(-400, 400), doodle::random(-250, 250), greenBalldiameterSize },
		  ball22{ doodle::random(-400, 400), doodle::random(-250, 250), greenBalldiameterSize },
		  ball23{ doodle::random(-400, 400), doodle::random(-250, 250), greenBalldiameterSize },
		  ball24{ doodle::random(-400, 400), doodle::random(-250, 250), greenBalldiameterSize },
		  ball25{ doodle::random(-400, 400), doodle::random(-250, 250), greenBalldiameterSize },
		  ball26{ doodle::random(-400, 400), doodle::random(-250, 250), greenBalldiameterSize },
		  ball27{ doodle::random(-400, 400), doodle::random(-250, 250), greenBalldiameterSize },
		  ball28{ doodle::random(-400, 400), doodle::random(-250, 250), greenBalldiameterSize },
		  ball29{ doodle::random(-400, 400), doodle::random(-250, 250), greenBalldiameterSize };

	balls ball30{ doodle::random(-400, 400), doodle::random(-250, 250), yellowBalldiameterSize },
		  ball31{ doodle::random(-400, 400), doodle::random(-250, 250), yellowBalldiameterSize },
		  ball32{ doodle::random(-400, 400), doodle::random(-250, 250), yellowBalldiameterSize },
		  ball33{ doodle::random(-400, 400), doodle::random(-250, 250), yellowBalldiameterSize },
		  ball34{ doodle::random(-400, 400), doodle::random(-250, 250), yellowBalldiameterSize },
		  ball35{ doodle::random(-400, 400), doodle::random(-250, 250), yellowBalldiameterSize },
		  ball36{ doodle::random(-400, 400), doodle::random(-250, 250), yellowBalldiameterSize },
		  ball37{ doodle::random(-400, 400), doodle::random(-250, 250), yellowBalldiameterSize },
		  ball38{ doodle::random(-400, 400), doodle::random(-250, 250), yellowBalldiameterSize },
		  ball39{ doodle::random(-400, 400), doodle::random(-250, 250), yellowBalldiameterSize },
		  ball40{ doodle::random(-400, 400), doodle::random(-250, 250), yellowBalldiameterSize },
		  ball41{ doodle::random(-400, 400), doodle::random(-250, 250), yellowBalldiameterSize },
		  ball42{ doodle::random(-400, 400), doodle::random(-250, 250), yellowBalldiameterSize },
		  ball43{ doodle::random(-400, 400), doodle::random(-250, 250), yellowBalldiameterSize },
		  ball44{ doodle::random(-400, 400), doodle::random(-250, 250), yellowBalldiameterSize },
		  ball45{ doodle::random(-400, 400), doodle::random(-250, 250), yellowBalldiameterSize },
		  ball46{ doodle::random(-400, 400), doodle::random(-250, 250), yellowBalldiameterSize },
		  ball47{ doodle::random(-400, 400), doodle::random(-250, 250), yellowBalldiameterSize },
		  ball48{ doodle::random(-400, 400), doodle::random(-250, 250), yellowBalldiameterSize },
		  ball49{ doodle::random(-400, 400), doodle::random(-250, 250), yellowBalldiameterSize },
		  ball50{ doodle::random(-400, 400), doodle::random(-250, 250), yellowBalldiameterSize },
		  ball51{ doodle::random(-400, 400), doodle::random(-250, 250), yellowBalldiameterSize },
		  ball52{ doodle::random(-400, 400), doodle::random(-250, 250), yellowBalldiameterSize },
		  ball53{ doodle::random(-400, 400), doodle::random(-250, 250), yellowBalldiameterSize },
		  ball54{ doodle::random(-400, 400), doodle::random(-250, 250), yellowBalldiameterSize },
		  ball55{ doodle::random(-400, 400), doodle::random(-250, 250), yellowBalldiameterSize },
		  ball56{ doodle::random(-400, 400), doodle::random(-250, 250), yellowBalldiameterSize },
		  ball57{ doodle::random(-400, 400), doodle::random(-250, 250), yellowBalldiameterSize },
		  ball58{ doodle::random(-400, 400), doodle::random(-250, 250), yellowBalldiameterSize },
		  ball59{ doodle::random(-400, 400), doodle::random(-250, 250), yellowBalldiameterSize };

	balls ball60{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize },
		  ball61{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize },
		  ball62{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize },
		  ball63{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize },
		  ball64{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize },
		  ball65{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize },
		  ball66{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize },
		  ball67{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize },
		  ball68{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize },
		  ball69{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize },
		  ball70{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize },
		  ball71{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize },
		  ball72{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize },
		  ball73{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize },
		  ball74{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize },
		  ball75{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize },
		  ball76{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize },
		  ball77{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize },
		  ball78{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize },
		  ball79{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize },
		  ball80{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize },
		  ball81{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize },
		  ball82{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize },
		  ball83{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize },
		  ball84{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize },
		  ball85{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize },
		  ball86{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize },
		  ball87{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize },
		  ball88{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize },
		  ball89{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize },
		  ball90{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize },
		  ball91{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize },
		  ball92{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize },
		  ball93{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize },
		  ball94{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize },
		  ball95{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize },
		  ball96{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize },
		  ball97{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize },
		  ball98{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize },
		  ball99{ doodle::random(-400, 400), doodle::random(-250, 250), redBalldiameterSize };


public:
	std::vector<balls> blueBalls_V = {ball0, ball1, ball2, ball3, ball4, ball5, ball6, ball7, ball8, ball9 };
	std::vector<balls> greenBalls_V = { ball10, ball11, ball12, ball13, ball14, ball15, ball16, ball17, ball18, ball19,
										ball20, ball21, ball22, ball23, ball24, ball25, ball26, ball27, ball28, ball29 };
	std::vector<balls> yellowBalls_V = { ball30, ball31, ball32, ball33, ball34, ball35, ball36, ball37, ball38, ball39,
										  ball40, ball41, ball42, ball43, ball44, ball45, ball46, ball47, ball48, ball49,
										  ball50, ball51, ball52, ball53, ball54, ball55, ball56, ball57, ball58, ball59 };
	std::vector<balls> redBalls_V = { ball60, ball61, ball62, ball63, ball64, ball65, ball66, ball67, ball68, ball69,
									  ball70, ball71, ball72, ball73, ball74, ball75, ball76, ball77, ball78, ball79,
									  ball80, ball81, ball82, ball83, ball84, ball85, ball86, ball87, ball88, ball89,
									  ball90, ball91, ball92, ball93, ball94, ball95, ball96, ball97, ball98, ball99 };
};