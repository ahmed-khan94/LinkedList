#include <iostream>
#include"LinkedList.h"

using namespace std;


void main()
{
	//01 - Unit Test case for Linked List Temporary Data insertion..
	//---- Test Data: Numbers 1 to 20-------
	//---- Expected Results: Data Inserted -----
	//---- Actual Result: Data Inserted ------ 
	
	new LinkedList()->insert_temp_data();
	
	// Code Coverage: 100% Coverage


	
	//02 - Unit Test case for Display of linked list data (When Linked List is empty) ..
	//---- Test Data: Linked List is empty  -------
	//---- Expected Results: Data not displayed-----
	//---- Actual Result: Data not displayed ------ 

	new LinkedList()->display_data();

	// Code Coverage: 2% Coverage

	
	
	
	//03 - Unit Test case for Display of linked list data ..
	//---- Test Data: Numbers from 1 to 20  -------
	//---- Expected Results: Data Displayed-----
	//---- Actual Result: Data displayed ------ 

	LinkedList LL;

	LL.insert_temp_data();
	LL.display_data();

	// Code Coverage: 100% Coverage



	//04 - Unit Test case for Reversal of Linked List data ..
	//---- Test Data: Linked List is empty  -------
	//---- Expected Results: Linked List is not reversed -----
	//---- Actual Result: Linked List is not reversed ------ 

	new LinkedList()->reverse_list();

	// Code Coverage: 2% Coverage




	//05 - Unit Test case for Reversal of Linked List data ..
	//---- Test Data: Numbers from 1 to 20  -------
	//---- Expected Results: Linked List is reversed -----
	//---- Actual Result: Linked List is reversed ------ 

	LinkedList LL2;
	LL2.insert_temp_data();
	LL2.reverse_list();

	// Code Coverage: 100% Coverage
}