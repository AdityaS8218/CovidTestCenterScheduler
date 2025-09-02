Covid Test Center Scheduler 

 Description -

This project is a simple C++ application that manages Covid test appointment scheduling.
It uses a priority queue to ensure patients with higher priority are scheduled first.
The system allows:

Booking new slots 

Viewing the schedule

Exporting data to a CSV file

 Features

Book a Slot - Add patient details (name, age, priority).

View Schedule - Display patients sorted by priority.

Export to CSV - Save the schedule for records.

Priority Queue System → Higher priority patients are seen first.

 How to Run

Make sure you have a C++ compiler (like g++).

Clone this repository:

git clone https://github.com/AdityaS8218/CovidTestCenterScheduler.git

cd CovidTestCenterScheduler

Compile the program:

g++ main.cpp -o scheduler

Run the executable:

./scheduler

Project Structure

CovidTestCenterScheduler/
 main.cpp → Source code
 .gitignore → Ignored files list
 README.md → Project documentation
 appointments.csv → Exported schedule (generated after running)

Example Output

Covid Test Center Scheduler 

Book a Slot

View Schedule

Export to CSV

Exit
Enter choice:

What I Have Done

Implemented patient scheduling using priority queue.

Added timestamp to each booking.

Enabled CSV export for reports.

Designed a simple menu-driven interface.

 License

This project is open-source. You are free to use and modify it.