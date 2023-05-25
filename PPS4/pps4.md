# Practise Problems Set - 4

1. **Student1**
   Write a Program to perform the following scenario. Define a class student with rollno as
   member and getdata() and putdata() as member functions. .Define another class test that inherit the class student, this class test has data members as marks in the subject 1 and subject 2 with member functions getmark() and putmark(). Define a class Grade with data member grade and a member function to display the grade. Define another class result that inherit the classes test and Grade with data member total and member function to compute the total marks along with the grade.

2. **Courier**
   Create a parent class named ‘Courier’ with the following:
   Data members CourierID, Name_of_Courier.
   Method named PrintBill() to accept the Base_fare of type double as parameter and display the CourierID, Name_of_Courier , and    Shipping_Cost, where Shipping_Cost = Base_fare + 30.
   Create a subclass names ‘Internatial_services’ which inherits from the Courier class. The class include the following:
   Data members Destination, Weight.
   Method named FinalBill()to print the CourierID, Name_of_Courier, Destination, Weight and Total_ ShippingCost, where Total_ShippingCost = Base_fare * Weight. Print the message “More Sale” when Total_ShippingCost is more than 100, otherwise print the message “Less Sale”.

3. **Employee**
   Write a C++ program to read and print employee salary details using multilevel
   inheritance.
   a. Create a class named employee to get and print the employee details like employee number, name and designation.
   b. Create a derived class named salary which derives the class employee in private mode, to get the employee complete information including employee number, name, designation, basic pay, hra, da, pf and to display the complete employee information including the net pay.
   c. Create a derived class bank_details which derives the class salary in private mode to get the complete employee details including his bank name, account number and to display the complete employee details like empno, name, designation, bp, hra, da, pf, net pay, account number.
   d. Create appropriate main method for the same.

4. FIXME:**Student2**
   Write a code with Student as a base class, Mark as intermediate class and Result as a
   derived class.
   ·The base class named Student with data members id, and name and getstu() and
   putstu() are the methods to read and display the id and name.
   ·The intermediate class named Marks with data members m1, m2, m3 and getmarks()
   and putmarks() are the methods to read and display the marks.
   ·The derived class named Result with total, average as a data members and show() as
   the method to display the total and average of marks.

5. TODO:**Vehicles**
    Consider creating a program to simulate various vehicle types. In addition to making a
   basic class named Vehicle that has universally applicable properties and methods, you
   also want to make distinct classes for various kinds of vehicles, such as cars and
   airplanes. The distinct traits and procedures that distinguish each vehicle class from other
   sorts of vehicles are their own. Nonetheless, several vehicle types might have things in
   common and work in similar ways. A plane, for instance, also has an altitude, while both
   a car and a plane have a maximum speed and a present speed. you can create a Vehicle
   class that contains general properties and methods, and then create specific vehicle
   classes that inherit from Vehicle as well as from each other. Create a C++ code snippet for
   the above scenario that demonstrates inheritance.

6. **Array**
   Case1:
   Input: lectures [][] = {{0, 5}, {1, 2}, {1, 10}}
   Output: 3
   1.An education centre runs several batches for various courses in a day. Due to the limited number of resources, they want to finalize the minimum number of class rooms needed to run the classes so that no batch of students wait.
   Given the start time and end time of all batches, design a system that finds the minimum number of class rooms required for the education centre. Your system should overload the appropriate operators (wherever if possible).
   Problem Input: List of start time and end time
   Problem Output: Minimum number of class rooms required.

7. **Increment & Decrement**
   Write a Program to read an odd number N. and overload the Prefix ++ increment operator and Prefix -- decrement operator.
