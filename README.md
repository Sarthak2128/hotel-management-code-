Hotel Room Booking System
This project is a Hotel Room Booking and Billing System developed in the C programming language. It simulates a simple hotel management system that allows hotel staff to manage room bookings, guest check-ins, check-outs, and billing for a small hotel with up to five rooms.

Designed for students and beginners in C programming, this project covers key concepts like:

Structures (struct)

Arrays

String handling (fgets, strcpy, strcmp)

Basic console-based UI

Conditionals and loops

Function modularity

It serves as a basic but functional example of how real-world systems such as hotel management software are built at a foundational level.

💼 Key Functionalities
Room Initialization:
At startup, all rooms (numbered from 101 to 105) are initialized with types (Single, Double, Deluxe) in a rotating manner and set to available.

View Available Rooms:
Displays a list of all rooms that are currently not booked.

Room Booking:
Prompts the user to:

Select a room number

Enter guest name, email, phone number, and duration of stay

Validates if the room is already booked

Marks the room as booked and stores guest info

**



You said:
write a same readme file this also




🏨 Hotel Room Booking & Billing System (C Project)
📄 Description
This project is a Hotel Room Booking and Billing System, written in the C programming language. It simulates a small hotel management system where the staff can manage room availability, bookings, guest details, and generate bills upon checkout.

It is designed as a simple console-based application and is ideal for C programming learners to understand how real-world business applications work under the hood using basic language features.

The hotel consists of 5 rooms, each assigned a room number and type:

Room 101 – Single

Room 102 – Double

Room 103 – Deluxe

Room 104 – Single

Room 105 – Double

Each room can be booked for a certain number of days, and the system calculates the total cost based on the room type.

🛠 Features
✅ Room Initialization
Rooms are initialized with predefined numbers and types.

All rooms start as available.

✅ Show Available Rooms
Lists all unbooked rooms with their respective types.

✅ Book a Room
Prompts user to:

Choose an available room number.

Enter guest name, email, phone number, and duration of stay.

Marks the room as booked and stores guest details.

✅ Check-Out
Asks for a room number to check out.

Displays a detailed bill, including:

Guest name and contact details

Room type and number

Duration of stay

Rate per day (based on room type)

Total amount

Clears all guest data and marks the room as available again.

✅ View All Rooms Status
Shows the status of all rooms (Booked/Available) with room type.

💵 Room Pricing
Room Type	Rate per Day
Single	Rs. 1000
Double	Rs. 1500
Deluxe	Rs. 2500

📚 Learning Highlights
This program demonstrates:

Use of structures to manage room and guest data

String input/output handling using fgets, strcpy, and strcmp

Modular design with multiple functions

Conditionals and loops for menu navigation

Simple billing logic based on room type

It’s an excellent mini-project for students learning:

Structured programming

Practical applications of C

Console-based UI design

📌 Future Enhancements (Ideas)
Add file storage for guest history (file I/O)

Add login system for staff

Allow editing or extending a booking

GUI version using a C++ library or web interface

👤 Author
Developed by [Sarthak Jahagirdar]
