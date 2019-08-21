# Vectors
C++ program that implements a Vector data structure

The Vector data stucture is created using a struct which contains a field for the data and a pointer that points to the next vector struct

The methods push_front() adds the argument data to the front of the vector. Initially a pointer which points to a struct of type vector is created.
The memory of struct Vector size is requested from the computer using malloc which is then type casted to represent a pointer to a struct Vector hence the code (struct Vector*)malloc...

The method remove() removes the first element from the Vector which in this case is the data that the head variable is pointing towards. 

The method displayAll() prints the entire vector in the console.

The method printFrom() prints the item from the given index passed in as argument. Ensures that all memory that is no longer required is freed to avoid segmentation faults.

The method removeFrom() removes the item from the given index passed in as argument. 

To run the program just open up a bash terminal for MAC or Powershell for Windows and type g++ -o vector vector.cpp. Then press enter.
The program should compile and the run the program by typing ./vectors

There are a few test cases in the main method which can be used to evaluate the program. 
