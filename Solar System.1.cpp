#include<Siv3D.hpp>
using namespace std;

void Main() {
	Window::SetTitle(U"Solar System");
	const Texture texture(U"spacesky.jpg");
	//Scene::SetBackground(Palette::Black);
	const Circle Sun(Scene::Center(), 15);
	const Vec2 center = Scene::Center();
	constexpr double a = 20;
	constexpr double b = 40;
	constexpr double c = 50;
	constexpr double d = 55;
	constexpr double e = 125;
	constexpr double f = 175;
	constexpr double g = 200;
	constexpr double h = 250;

	while (System::Update()) {

		Window::SetStyle(WindowStyle::Sizable);
		texture.scaled(4).drawAt(Scene::Center());

		Sun.draw(Palette::Red);
		Circle(Scene::Center(), a).drawFrame(1, 1,Palette::Lightblue);
		Circle(Scene::Center(), b).drawFrame(1, 1, Palette::Lightblue);
		Circle(Scene::Center(), c).drawFrame(1, 1, Palette::Lightblue);
		Circle(Scene::Center(), d).drawFrame(1, 1, Palette::Lightblue);
		Circle(Scene::Center(), e).drawFrame(3, 3, Palette::Lightblue);
		Circle(Scene::Center(), f).drawFrame(3, 3, Palette::Lightblue);
		Circle(Scene::Center(), g).drawFrame(3, 3, Palette::Lightblue);
		Circle(Scene::Center(), h).drawFrame(3, 3, Palette::Lightblue);
		
		const double t = Scene::Time();

		const double theta1 = 270_deg + t * 45_deg;
		const Vec2 pos1 = OffsetCircular(center, a, theta1);

		const double theta2 = 270_deg + t * 25_deg;
		const Vec2 pos2 = OffsetCircular(center, b, theta2);

		const double theta3 = 270_deg + t * 20_deg;
		const Vec2 pos3 = OffsetCircular(center, c, theta3);

		const double theta4 = 270_deg + t * 10_deg;
		const Vec2 pos4 = OffsetCircular(center, d, theta4);

		const double theta5 = 270_deg + t * 15_deg;
		const Vec2 pos5 = OffsetCircular(center, e, theta5);

		const double theta6 = 270_deg + t * 1_deg;
		const Vec2 pos6 = OffsetCircular(center, f, theta6);

		const double theta7 = 270_deg + t * 2_deg;
		const Vec2 pos7 = OffsetCircular(center, g, theta7);

		const double theta8 = 270_deg + t * 1_deg;
		const Vec2 pos8 = OffsetCircular(center, h, theta8);

		Circle(pos1, 2).draw(Color(128, 128, 0));
		Circle(pos2, 6).draw(Color(255,215,0));
		Circle(pos3, 7).draw(Color(0, 191, 255));
		Circle(pos4, 3).draw(Color(128, 0, 0));
		Circle(pos5, 25).draw(Color(135, 206, 205));
		Circle(pos6, 23).draw(Color(210, 180, 140));
		Circle(pos7, 14).draw(Color(102, 205, 170));
		Circle(pos8, 13).draw(Color(0, 0, 139));
	}
}