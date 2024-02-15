//#include <iostream>
//
//
//class MYFloat final
//{
//public:
//	MYFloat()
//		: x(0.0f), y(0.0f), z(0.0f) {}
//
//	MYFloat(float _x, float _y, float _z)
//		: x(_x), y(_y), z(_z) {}
//
//	float x;
//	float y;
//	float z;
//
//	MYFloat& operator + (const MYFloat& _other) const
//	{
//		MYFloat Return = *this;
//		Return.x += _other.x;
//		Return.y += _other.y;
//		Return.z += _other.z;
//		return Return;
//	}
//
//	MYFloat& operator - (const MYFloat& _other) const
//	{
//		MYFloat Return = *this;
//		Return.x -= _other.x;
//		Return.y -= _other.y;
//		Return.z -= _other.z;
//		return Return;
//	}
//
//	MYFloat& operator / (const MYFloat& _other) const
//	{
//		MYFloat Return = *this;
//		Return.x /= _other.x;
//		Return.y /= _other.y;
//		Return.z /= _other.z;
//		return Return;
//	}
//
//	MYFloat& operator * (const MYFloat& _other) const
//	{
//		MYFloat Return = *this;
//		Return.x *= _other.x;
//		Return.y *= _other.y;
//		Return.z *= _other.z;
//		return Return;
//	}
//
//	bool operator ==(const MYFloat& _Other)
//	{
//		return _Other.x == x && _Other.y == y && _Other.z == z;
//	}
//
//	MYFloat& operator +=(const MYFloat& _Other)
//	{
//		*this = *this + _Other;
//		return *this;
//	}
//
//	MYFloat& operator -=(const MYFloat& _Other)
//	{
//		*this = *this - _Other;
//		return *this;
//	}
//
//	MYFloat& operator *=(const MYFloat& _Other)
//	{
//		*this = *this * _Other;
//		return *this;
//	}
//
//	MYFloat& operator /=(const MYFloat& _Other)
//	{
//		*this = *this / _Other;
//		return *this;
//	}
//
//	MYFloat& operator ()(int a)
//	{
//		std::cout << "operator () 호출" << std::endl;
//		return *this;
//	}
//	MYFloat& operator [](int a)
//	{
//		std::cout << "operator [] 호출" << std::endl;
//		return *this;
//	}
//};
//
//int main()
//{
//	MYFloat Test;
//	MYFloat Test2(10, 20, 30);
//	MYFloat Test3;
//	Test3(7);
//	Test3[7];
//}