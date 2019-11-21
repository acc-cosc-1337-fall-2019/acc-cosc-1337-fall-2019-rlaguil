//
class Vector
{
public:
	Vector(size_t sz);
	Vector(const Vector& v); //copy consturctor
	Vector& operator=(const Vector& v);
	size_t Size()const { return size; } // copy assignment
	int& operator[](int i) {return nums[i];}
	int& operator[](int i) const { return nums[i]; }
	~Vector();
private:
	size_t size; 
	int* nums;
};