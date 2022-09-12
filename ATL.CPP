#include<iostream.h>
#include<conio.h>

class Array
{
       int* arr;
       int size;

       public:
	   Array();
	   Array(int size);
	   void display();
	   void take_input();
	   Array add(Array temp);
};
//--------------------------------------------------------------------------
Array::Array (int size)
{
     arr = new int[size];
     this->size = size;
}

Array::Array()
{
     size = 5;
     arr = new int[size];
}

void Array::take_input()
{
     for(int i = 0;i < 5;i++)
     {
	cout<<"Enter the value at" << i << "th Position:";
	cin>>arr[i];
     }
}

void Array::display()
{
     for(int i = 0; i < 5; i++)
     {
	cout<< arr[i] << " ";
     }
}

Array Array::add(Array temp)
{
     Array res(this->size);

     for(int i = 0;i < temp.size ; i++)
     {
	  res.arr[i] = this->arr[i] + temp.arr[i];
     }

     return res;
}
//----------------------------------------------------------------------------
int main()
{
     int size_array;

     cout<< "Give the size of Array: ";
     cin>> size_array;

     Array a1(size_array);
     Array a2(size_array);
     Array res(size_array);

     //cin >>a1;
     cout << "A1 INPUT OVER" << endl;
     //cin >>a2;
     cout << "A2 INPUT OVER" << endl;

     res =a1+a2 ;

     cout<< "Res is: ";

     getch();
}