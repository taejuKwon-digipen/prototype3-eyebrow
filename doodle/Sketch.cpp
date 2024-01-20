#include "setting.h"

using namespace doodle;

void sketch::setup()
{
	create_window("Eyebrow", windowX, windowY);
	set_rectangle_mode(RectMode::Center);
	set_image_mode(RectMode::Center);
	if (!BGM.openFromFile("asset/bgm.ogg")) {
		std::cout << "Failed to load the music file";
	}

	BGM.setLoop(true);
	BGM.play();
}

void sketch::draw()
{
	switch (scene) {
	default: break;

	case 1: // DIGIPENSCREEN
		digipen();
		break;

	case 2: // TITLESCREEN
		title();
		break;

	case 3: // GAMESCREEN
		playGame();
		break;

	case 4: // GAMECLEAR
		clear();
		break;

	case 5: // GAMEOVERSCREEN
		over();
		break;

	case 6: // WINSCREEN
		win();
		break;

	case 7:
		copyright();
		break;
	}
}

void sketch::digipen()
{
	try {
		clear_background(255);
		static const Image DigiPenLogo{ "asset/digipen_black.jpg" };
		static const Image copyRight{ "asset/copyrightMessage.jpg" };
		draw_image(DigiPenLogo, 0, 0, 650, 200);
		draw_image(copyRight, 0, -250, 650, 30);
		logoTimer--;
		if (logoTimer < 0)
			scene = TITLESCREEN;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void sketch::title() {
	drawBG();
	push_settings();
	set_font_size(35);
	set_outline_color(255);
	set_fill_color(0);
	draw_text("Missing:\nJuhong's Eyebrow", -200, 100);
	pop_settings();

	set_font_size(20);
	draw_rectangle(0, -150, 100, 50);
	draw_rectangle(0, -250, 100, 50);
	draw_text("Start", -30, -170);
	set_font_size(15);
	draw_text("Copyright", -40, -270);

	draw_rectangle(-360, -80, 30, 30);
	draw_rectangle(-360, -120, 30, 30);
	draw_rectangle(-360, -160, 30, 30);
	draw_rectangle(-360, -200, 30, 30);
	draw_rectangle(-360, -240, 30, 30);

	draw_text("1", -365, -97);
	draw_text("2", -365, -137);
	draw_text("3", -365, -177);
	draw_text("4", -365, -217);
	draw_text("5", -365, -257);
}

void sketch::playGame() {
	clear_background(0);

	switch (level) {
		default: break;
		
		case 1:
			Eyebrow.showMain();
			Ball.drawblueBalls();
			if (Eyebrow.brow_V.size() == 0) {
				scene = 4;
			}

			level1_timer--;
			timerNumb = std::to_string(level1_timer);

			draw_text("Timer: " + timerNumb, 200, -250);

			
			if (level1_timer < 0) {
				scene = 5;
				level1_timer = 800;
			}
			break;

		case 2:
			Eyebrow.showMain();
			Ball.drawgreenBalls();
			Ball.drawblueBalls();
			if (Eyebrow.brow_V.size() == 0) {
				scene = 4;
			}

			level2_timer--;
			timerNumb = std::to_string(level2_timer);

			draw_text("Timer: " + timerNumb, 200, -250);


			if (level2_timer < 0) {
				scene = 5;
				level2_timer = 800;
			}
			break;

		case 3:
			Eyebrow.showMain();
			Ball.drawyellowBalls();
			Ball.drawgreenBalls();
			Ball.drawblueBalls();
			if (Eyebrow.brow_V.size() == 0) {
				scene = 4;
			}

			level3_timer--;
			timerNumb = std::to_string(level3_timer);

			draw_text("Timer: " + timerNumb, 200, -250);


			if (level3_timer < 0) {
				scene = 5;
				level3_timer = 500;
			}
			break;

		case 4:
			Eyebrow.showMain();
			Ball.drawredBalls();
			Ball.drawyellowBalls();
			Ball.drawgreenBalls();
			Ball.drawblueBalls();
			if (Eyebrow.brow_V.size() == 0) {
				scene = 4;
			}

			level4_timer--;
			timerNumb = std::to_string(level4_timer);

			draw_text("Timer: " + timerNumb, 200, -250);


			if (level4_timer < 0) {
				scene = 5;
				level4_timer = 500;
			}
			break;

		case 5:
			Eyebrow.showMain();
			Ball.drawredBalls();
			Ball.drawyellowBalls();
			Ball.drawgreenBalls();
			Ball.drawblueBalls();
			if (Eyebrow.brow_V.size() == 0) {
				scene = 6;
			}

			level5_timer--;
			timerNumb = std::to_string(level5_timer);

			draw_text("Timer: " + timerNumb, 200, -250);


			if (level5_timer < 0) {
				scene = 5;
				level5_timer = 300;
			}
			break;
	}
};

void sketch::clear() {
	clear_background(0);
	set_font_size(35);
	std::string levelshow;
	levelshow = std::to_string(level);
	draw_text(levelshow + " STAGE CLEAR", -150, 100);

	set_font_size(20);
	draw_rectangle(0, -200, 150, 50);
	draw_text("next stage", -60, -215);

	if (MouseIsPressed) {
		if (get_mouse_x() >= -75 && get_mouse_x() <= 75 && get_mouse_y() >= -225 && get_mouse_y() <= -175) {
			level++;
			initial();
			scene = 3;
			if (level == 6) {
				scene = 5; 
			}
		}
	}
}

void sketch::over() {
	drawLose();
	push_settings();
	set_outline_color(255);
	set_fill_color(0);
	set_font_size(15);
	draw_text("Press R key to replay", 100, -250);
	pop_settings();
}

void sketch::initial() {
	Eyebrow.brow1 = { (double)random(-400, 400), (double)random(-250, 250), Eyebrow.rectXSize, Eyebrow.rectYSize };
	Eyebrow.brow2 = { (double)random(-400, 400), (double)random(-250, 250), Eyebrow.rectXSize, Eyebrow.rectYSize };
	Eyebrow.brow_V = { Eyebrow.brow1, Eyebrow.brow2 };
	Ball.blueBalls_V = { Ball.ball0, Ball.ball1, Ball.ball2, Ball.ball3, Ball.ball4,
						 Ball.ball5, Ball.ball6, Ball.ball7, Ball.ball8, Ball.ball9 };
	Ball.greenBalls_V = { Ball.ball10, Ball.ball11, Ball.ball12, Ball.ball13, Ball.ball14,
						  Ball.ball15, Ball.ball16, Ball.ball17, Ball.ball18, Ball.ball19,
						  Ball.ball20, Ball.ball21, Ball.ball22, Ball.ball23, Ball.ball24,
						  Ball.ball25, Ball.ball26, Ball.ball27, Ball.ball28, Ball.ball29 };

	Ball.yellowBalls_V = { Ball.ball30, Ball.ball31, Ball.ball32, Ball.ball33, Ball.ball34, Ball.ball35, Ball.ball36, Ball.ball37, Ball.ball38, Ball.ball39,
						   Ball.ball40, Ball.ball41, Ball.ball42, Ball.ball43, Ball.ball44, Ball.ball45, Ball.ball46, Ball.ball47, Ball.ball48, Ball.ball49,
						   Ball.ball50, Ball.ball51, Ball.ball52, Ball.ball53, Ball.ball54, Ball.ball55, Ball.ball56, Ball.ball57, Ball.ball58, Ball.ball59 };

	Ball.redBalls_V = { Ball.ball60, Ball.ball61, Ball.ball62, Ball.ball63, Ball.ball64, Ball.ball65, Ball.ball66, Ball.ball67, Ball.ball68, Ball.ball69,
						Ball.ball70, Ball.ball71, Ball.ball72, Ball.ball73, Ball.ball74, Ball.ball75, Ball.ball76, Ball.ball77, Ball.ball78, Ball.ball79,
						Ball.ball80, Ball.ball81, Ball.ball82, Ball.ball83, Ball.ball84, Ball.ball85, Ball.ball86, Ball.ball87, Ball.ball88, Ball.ball89,
						Ball.ball90, Ball.ball91, Ball.ball92, Ball.ball93, Ball.ball94, Ball.ball95, Ball.ball96, Ball.ball97, Ball.ball98, Ball.ball99 };

	Eyebrow.brow1_xPos = Eyebrow.brow_V[0].x, Eyebrow.brow1_yPos = Eyebrow.brow_V[0].y;
	Eyebrow.brow2_xPos = Eyebrow.brow_V[1].x, Eyebrow.brow2_yPos = Eyebrow.brow_V[1].y;
}

void sketch::win() {
	drawWin();
	push_settings();
	set_outline_color(255);
	set_fill_color(0);
	set_font_size(15);
	draw_text("Press R key to replay", 100, -250);
	pop_settings();
}

void sketch::drawBG() {
	static const Image Background{ "asset/background.jpg" };
	draw_image(Background, 0, 0, windowX, windowY);
}

void sketch::drawLose() {
	static const Image LoseImage{ "asset/lose.png" };
	draw_image(LoseImage, 0, 0, windowX, windowY);
}

void sketch::drawWin() {
	static const Image WinImage{ "asset/win.png" };
	draw_image(WinImage, 0, 0, windowX, windowY);
}

void sketch::copyright() {
	drawBG();
	set_font_size(35);
	draw_text("CopyRight", -100, 250);

	set_font_size(20);
	draw_text("BGM:\n https://www.youtube.com/watch?v=y4p_5JtWdDg& \nfeature=youtu.be", -300, 100);
	draw_text("Backgrond Base:\n https://flashgameheaven.com/60", -300, -50);
	draw_text("Press M key to go to Main", 70, -250);
}