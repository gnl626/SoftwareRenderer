#pragma once

class Vector2f
{
public:
	int vCount = 2;
	float vNum1;
	float vNum2;

	void ShowVector(Vector2f u, char* a)
	{
		cout << a << " = <" << u.vNum1 << ", " << u.vNum2 << "> " << endl;
	}

	Vector2f operator+(const Vector2f &u)
	{
		Vector2f a;
		a.vNum1 = this->vNum1 + u.vNum1;
		a.vNum2 = this->vNum2 + u.vNum2;
		return a;
	}
	Vector2f operator-(const Vector2f &u)
	{
		Vector2f a;
		a.vNum1 = this->vNum1 - u.vNum1;
		a.vNum2 = this->vNum2 - u.vNum2;
		return a;
	}
	Vector2f operator*(const float &u)
	{
		Vector2f a;
		a.vNum1 = this->vNum1 * u;
		a.vNum2 = this->vNum2 * u;
		return a;
	}
};

class Vector3f
{
public:
	int vCount = 3;
	float vNum1;
	float vNum2;
	float vNum3;
	void ShowVector(Vector3f u, char* a)
	{
		cout << a << " = <" << u.vNum1 << ", " << u.vNum2 << ", " << u.vNum3 << "> " << endl;
	}
	Vector3f operator+(const Vector3f &u)
	{
		Vector3f a;
		a.vNum1 = this->vNum1 + u.vNum1;
		a.vNum2 = this->vNum2 + u.vNum2;
		a.vNum3 = this->vNum3 + u.vNum3;
		return a;
	}
	Vector3f operator-(const Vector3f &u)
	{
		Vector3f a;
		a.vNum1 = this->vNum1 - u.vNum1;
		a.vNum2 = this->vNum2 - u.vNum2;
		a.vNum3 = this->vNum3 - u.vNum3;
		return a;
	}
	Vector3f operator*(const float &u)
	{
		Vector3f a;
		a.vNum1 = this->vNum1 * u;
		a.vNum2 = this->vNum2 * u;
		a.vNum3 = this->vNum3 * u;
		return a;
	}
};