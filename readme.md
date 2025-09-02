Covid Test Center Scheduler 

 Description :-

This project is a simple C++ application that manages Covid test appointment scheduling.
It uses a priority queue to ensure patients with higher priority are scheduled first.
The system allows:

-Booking new slots 

-Viewing the schedule

-Exporting data to a CSV file

 Features :-

 1 Book a Slot - Add patient details (name, age, priority).

 2 View Schedule - Display patients sorted by priority.

 3 Export to CSV - Save the schedule for records.

 4 Priority Queue System → Higher priority patients are seen first.

 How to Run :-

 1 Make sure you have a C++ compiler (like g++).

 2 Clone this repository:
git clone https://github.com/AdityaS8218/CovidTestCenterScheduler.git

cd CovidTestCenterScheduler

 3 Compile the program:

g++ main.cpp -o scheduler

 4 Run the executable:

./scheduler

Project Structure

CovidTestCenterScheduler/
- main.cpp → Source code
- .gitignore → Ignored files list
- README.md → Project documentation
- appointments.csv → Exported schedule (generated after running)


Example Output :-

Covid Test Center Scheduler 

1.Book a Slot

2.View Schedule

3.Export to CSV

4.Exit
Enter choice:

What I Have Done :-

-Implemented patient scheduling using priority queue.

-Added timestamp to each booking.

-Enabled CSV export for reports.

-Designed a simple menu-driven interface.

 License :-

This project is open-source. You are free to use and modify it.