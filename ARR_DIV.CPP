#include<iostream.h>
#include<conio.h>

class Array
{
    int* arr;
    int size;

    public:
	Array();
	Array(int size);
	Array operator/(const Array &r);
	friend ostream &operator<<(ostream &out, const Array &r);
	friend istream &operator>>(istream &in, const Array &r);

};
//-------------------------------------------------------------------------

Array::Array(int size)
{
     arr = new int[size];
     this->size = size;
}

Array::Array()
{
      size = 5;
      arr = new int[size];
}

Array Array::operator/(const Array &r)
{
     for (int i = 0; i < this->size; i++)
     {
	 this->arr[i] = this->arr[i] / r.arr[i];
     }

     return *this;

}

ostream &operator<<(ostream & out, const Array &r)
{


     for( int i = 0; i < r.size; i++)
     {
	 out << r.arr[i] << " ";
     }

     out << endl;

     return out;
}

istream &operator >> (istream &in, const Array &r)
{
      for (int i = 0; i < 5; i++)
      {
	  cout<< "Enter the value at " << i << "th Position: ";
	  in >> r.arr[i];
      }

      return in;
}
//-------------------------------------------------------------------------
int main()
{

      int size_array;

      cout << "Give the size of Array: ";
      cin >> size_array;

      Array a1(size_array);
      Array a2(size_array);
      Array res(size_array);

      cin >> a1;
      cout << "A1 INPUT IS OVER" << endl;
      cin >> a2;
      cout << "A2 INPUT IS OVER" << endl;

      res = a1 / a2;

      cout<< "Res is: " << res;

      cout << "A1 is: " << a1 ;

      cout << "A2 is: " << a2 ;


      getch();
}