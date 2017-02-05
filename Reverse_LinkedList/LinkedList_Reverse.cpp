#include<iostream>
#include"LinkedList.h"

using namespace std;

void main()
{
	LinkedList LL;

	//--------------------------------------- Insertion of Temporary data-------------------------
	LL.insert_temp_data();
	//---------------------------------------------------END---------------------------------------


	//--------------------------------------- Display Original Linked List data-------------------------

	cout << endl << "Original Linked List: " << endl;
	LL.display_data();

	//---------------------------------------------------END---------------------------------------



	//--------------------------------------- Reversing Linked List-------------------------
	
	LL.reverse_list();

	//---------------------------------------------------END---------------------------------------


	//--------------------------------------- Display Reversed Linked List data-------------------------

	cout << endl << "Reversed Linked List: " << endl;
	LL.display_data();

	//---------------------------------------------------END---------------------------------------

	getchar();
}